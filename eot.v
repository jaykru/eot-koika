Require Import Koika.Frontend.

(* the number of things you can sort is currently fixed because Coq
   sucks *)
Definition num_procs := 64.
Definition reg_sz := 32. (* we support sorting 32-bit integers *)
Definition clock_sz := 1.

Inductive reg_t := rData (n: Vect.index num_procs) | clock.
Inductive rule_name_t := do_swap_evens | do_swap_odds | tick.

Notation index_sz := (log2 num_procs).

Definition R r :=
  match r with
  | rData n => bits_t reg_sz
  | clock => bits_t 1
  end.

(* the sequence to sort;
   here, 64 random integers \in [1,100] generated by random.org *)
Definition init_seq: list nat := [25; 50; 79; 61; 65; 21; 35; 83; 54; 77; 45; 48; 89; 55; 9; 72; 71; 57; 30; 63; 78; 41; 88; 49; 80; 59; 62; 68; 42; 31; 16; 37; 13; 8; 84; 27; 19; 20; 14; 96; 1; 39; 5; 85; 22; 28; 69; 33; 97; 2; 11; 67; 12; 43; 18; 98; 58; 64; 92; 46; 100; 26; 34]%list.

Definition r reg : R reg :=
  match reg with
  | clock => Bits.zero
  | rData n => Bits.of_nat _ (List.nth (index_to_nat n) init_seq 0)
  end.


(* This macro expands into a switch that branches on the value of [idx] to return
   the idx-th register in rData. *)
Definition read_vect idx : uaction reg_t empty_ext_fn_t :=
  {{ read0(rData idx) }}.

Definition write_vect idx: UInternalFunction reg_t empty_ext_fn_t :=
  {{
    fun write_vect(val: bits_t reg_sz) : unit_t =>
      write1(rData idx, val)
  }}.
Check write_vect.

Definition _do_compare_swap idxL idxR: uaction reg_t empty_ext_fn_t :=
  let wL := write_vect idxL in
  let wR := write_vect idxR in
  let rL := read_vect idxL in
  let rR := read_vect idxR in
    {{
        (* let par := #par in *)
        (* guard((!read0(clock) && !par) || (read0(clock) && par)); *)
        let left_val := `rL` in
        let right_val := `rL` in
        if left_val > right_val then
          wR(left_val);
          wL(right_val)
        else
          pass
    }}.

Require Import Magic.
Definition do_comp_swap :=
  Eval vm_compute in
    (tc_rule R empty_Sigma (_do_compare_swap __magic__ __magic__)).

Definition _do_swap_evens_rules :=
  let evens := List.filter (fun n => Nat.even n) (List.seq 0 (num_procs)) in
  List.map
  (fun e => _do_compare_swap
           (match @index_of_nat _ e with
            | Some i => i
            | _ => __magic__
            end)
           (match @index_of_nat _ (e+1) with
              | Some i => i
              | _ => __magic__
              end))
  evens.
Print _do_swap_evens_rules.
              
Definition _do_swap_odds_rules :=
  let odds := List.filter (fun n => Nat.odd n) (List.seq 0 (num_procs-1)) in
  List.map
    (fun e => _do_compare_swap
             (match @index_of_nat _ e with
              | Some i => i
              | _ => __magic__
              end)
             (match @index_of_nat _ (e+1) with
              | Some i => i
              | _ => __magic__
              end))
    odds.
Print _do_swap_odds_rules.

Definition _do_swap_evens := USugar (UProgn ({{ guard(!read0(clock)) }} :: _do_swap_evens_rules)).
Definition _do_swap_odds := USugar (UProgn ({{ guard(read0(clock)) }} :: _do_swap_odds_rules)).

Definition rules : rule_name_t -> rule R empty_Sigma :=
  Eval vm_compute in
    (tc_rules R empty_Sigma (fun rl => match rl with
                                   | do_swap_evens => 
                                     _do_swap_evens
                                   | do_swap_odds => 
                                     _do_swap_odds
                                   | tick => {{ write0(clock, read0(clock) + |clock_sz`d1|) }}
                                   end)).

Definition regfile : scheduler :=
  do_swap_evens |> do_swap_odds |> tick |> done.

Definition external (r: rule_name_t) := false.

Definition circuits :=
  compile_scheduler rules external regfile.

Definition package :=
  {| ip_koika := {| koika_reg_types := R;
                   koika_reg_init reg := r reg;
                   koika_ext_fn_types := empty_Sigma;
                   koika_rules := rules;
                   koika_rule_external := external;
                   koika_scheduler := regfile;
                   koika_module_name := "evenoddtranspose" |};

     ip_sim := {| sp_ext_fn_specs := empty_ext_fn_props;
                  sp_prelude := None |};
     
     ip_verilog := {| vp_ext_fn_specs := empty_ext_fn_props |} |}.

Definition prog := Interop.Backends.register package.
Extraction "eot.ml" prog.


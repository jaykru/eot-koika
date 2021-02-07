
type __ = Obj.t

val fst : ('a1 * 'a2) -> 'a1

val snd : ('a1 * 'a2) -> 'a2

val app : 'a1 list -> 'a1 list -> 'a1 list

type 'a sig0 =
| Exist of 'a



val add : int -> int -> int

module Nat :
 sig
  val sub : int -> int -> int

  val divmod : int -> int -> int -> int -> int * int

  val div : int -> int -> int

  val modulo : int -> int -> int
 end

module Pos :
 sig
  val succ : int -> int

  val of_succ_nat : int -> int
 end

module N :
 sig
  val zero : int

  val of_nat : int -> int
 end

val nth : int -> 'a1 list -> 'a1 -> 'a1

val map : ('a1 -> 'a2) -> 'a1 list -> 'a2 list

val append : char list -> char list -> char list

type index = int

val index_to_nat : int -> index -> int

type ('a, 'b) vect_cons_t = { vhd : 'a; vtl : 'b }

type 't vect = __

val vect_hd : int -> ('a1, __) vect_cons_t -> 'a1

val vect_tl : int -> ('a1, __) vect_cons_t -> 'a1 vect

val vect_cons : int -> 'a1 -> 'a1 vect -> ('a1, __) vect_cons_t

val vect_const : int -> 'a1 -> 'a1 vect

val vect_map : int -> ('a1 -> 'a2) -> 'a1 vect -> 'a2 vect

val vect_fold_left : int -> ('a1 -> 'a2 -> 'a1) -> 'a1 -> 'a2 vect -> 'a1

val vect_to_list : int -> 'a1 vect -> 'a1 list

module Bits :
 sig
  val of_positive : int -> int -> bool vect

  val of_N : int -> int -> bool vect

  val of_nat : int -> int -> bool vect

  val zero : int -> bool vect
 end

type 't finiteType = { finite_index : ('t -> int); finite_elements : 't list }

type 'a show = { show0 : ('a -> char list) }

module Show_nat :
 sig
  val string_of_base10_digit : int sig0 -> char list

  val string_of_nat_rec : int -> int -> char list

  val string_of_nat : int -> char list
 end

val show_string : char list show

type 'k member =
| MemberHd of 'k * 'k list
| MemberTl of 'k * 'k * 'k list * 'k member

val all_indices : int -> index vect

val finiteType_index : int -> index finiteType

type 'a struct_sig' = { struct_name : char list; struct_fields : (char list * 'a) list }

type enum_sig = { enum_name : char list; enum_size : int; enum_bitsize : int; enum_members : char list vect;
                  enum_bitpatterns : bool vect vect }

type 'a array_sig' = { array_type : 'a; array_len : int }

type type0 =
| Bits_t of int
| Enum_t of enum_sig
| Struct_t of type0 struct_sig'
| Array_t of type0 array_sig'

type struct_index = index

type array_index = index

type port =
| P0
| P1

type type_denote = __

type 'argKind _Sig = { argSigs : 'argKind vect; retSig : 'argKind }

type externalSignature = type0 _Sig

type 'var_t tsig = ('var_t * type0) list

type ('k, 'v) context =
| CtxEmpty
| CtxCons of 'k list * 'k * 'v * ('k, 'v) context

type bits_comparison =
| CLt
| CGt
| CLe
| CGe

type bits_display_style =
| DBin
| DDec
| DHex
| DFull

type display_options = { display_strings : bool; display_newline : bool; display_style : bits_display_style }

module PrimTyped :
 sig
  type fdisplay =
  | DisplayUtf8 of int
  | DisplayValue of type0 * display_options

  type fconv =
  | Pack
  | Unpack
  | Ignore

  type lowered1 =
  | IgnoreBits of int
  | DisplayBits of fdisplay

  type fbits1 =
  | Not of int
  | SExt of int * int
  | ZExtL of int * int
  | ZExtR of int * int
  | Repeat of int * int
  | Slice of int * int * int
  | Lowered of lowered1

  type fbits2 =
  | And of int
  | Or of int
  | Xor of int
  | Lsl of int * int
  | Lsr of int * int
  | Asr of int * int
  | Concat of int * int
  | Sel of int
  | SliceSubst of int * int * int
  | IndexedSlice of int * int
  | Plus of int
  | Minus of int
  | Mul of int * int
  | EqBits of int * bool
  | Compare of bool * bits_comparison * int

  type fn1 =
  | Display of fdisplay
  | Conv of type0 * fconv
  | Bits1 of fbits1
  | Struct1 of type0 struct_sig' * struct_index
  | Array1 of type0 array_sig' * array_index

  type fn2 =
  | Eq of type0 * bool
  | Bits2 of fbits2
  | Struct2 of type0 struct_sig' * struct_index
  | Array2 of type0 array_sig' * array_index
 end

type ('pos_t, 'rule_name_t) scheduler =
| Done
| Cons of 'rule_name_t * ('pos_t, 'rule_name_t) scheduler
| Try of 'rule_name_t * ('pos_t, 'rule_name_t) scheduler * ('pos_t, 'rule_name_t) scheduler
| SPos of 'pos_t * ('pos_t, 'rule_name_t) scheduler

type ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action =
| Fail of 'var_t tsig * type0
| Var of ('var_t * type0) list * 'var_t * type0 * ('var_t * type0) member
| Const of 'var_t tsig * type0 * type_denote
| Assign of ('var_t * type0) list * 'var_t * type0 * ('var_t * type0) member * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| Seq of 'var_t tsig * type0 * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
   * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| Bind of 'var_t tsig * type0 * type0 * 'var_t * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
   * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| If of 'var_t tsig * type0 * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
   * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| Read of 'var_t tsig * port * 'reg_t
| Write of 'var_t tsig * port * 'reg_t * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| Unop of 'var_t tsig * PrimTyped.fn1 * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| Binop of 'var_t tsig * PrimTyped.fn2 * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
   * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| ExternalCall of 'var_t tsig * 'ext_fn_t * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| InternalCall of 'var_t tsig * type0 * 'fn_name_t * 'var_t tsig
   * ('var_t * type0, ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action) context
   * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action
| APos of 'var_t tsig * type0 * 'pos_t * ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action

type ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) rule = ('pos_t, 'var_t, 'fn_name_t, 'reg_t, 'ext_fn_t) action

type ext_fn_rtl_spec = { efr_name : char list; efr_internal : bool }

type ext_fn_sim_spec = { efs_name : char list; efs_method : bool }

val empty_Sigma : __ -> externalSignature

val empty_ext_fn_props : __ -> 'a1

type ('pos_t, 'var_t, 'fn_name_t, 'rule_name_t, 'reg_t, 'ext_fn_t) koika_package_t = { koika_var_names : 'var_t show;
                                                                                       koika_fn_names : 'fn_name_t show;
                                                                                       koika_reg_names : 'reg_t show;
                                                                                       koika_reg_types : ('reg_t -> type0);
                                                                                       koika_reg_init : ('reg_t -> type_denote);
                                                                                       koika_reg_finite : 'reg_t finiteType;
                                                                                       koika_ext_fn_types : ('ext_fn_t ->
                                                                                                            externalSignature);
                                                                                       koika_rules : ('rule_name_t -> ('pos_t, 'var_t,
                                                                                                     'fn_name_t, 'reg_t, 'ext_fn_t)
                                                                                                     rule);
                                                                                       koika_rule_external : ('rule_name_t -> bool);
                                                                                       koika_rule_names : 'rule_name_t show;
                                                                                       koika_scheduler : ('pos_t, 'rule_name_t)
                                                                                                         scheduler;
                                                                                       koika_module_name : char list }

type 'ext_fn_t verilog_package_t = { vp_ext_fn_specs : ('ext_fn_t -> ext_fn_rtl_spec) }

type 'ext_fn_t sim_package_t = { sp_ext_fn_specs : ('ext_fn_t -> ext_fn_sim_spec); sp_prelude : char list option }

type interop_package_t = { ip_koika : (unit, char list, char list, __, __, __) koika_package_t; ip_verilog : __ verilog_package_t;
                           ip_sim : __ sim_package_t }

module Backends :
 sig
  val register : interop_package_t -> unit
 end

type pos_t = unit

type var_t = char list

type fn_name_t = char list

val num_procs : int

val reg_sz : int

type reg_t =
| RData of index
| Clock

type rule_name_t =
| Do_swap_evens
| Do_swap_odds
| Tick

val r : reg_t -> type0

val init_seq : int list

val r0 : reg_t -> type_denote

val rules : rule_name_t -> (pos_t, var_t, fn_name_t, reg_t, __) rule

val regfile : (pos_t, rule_name_t) scheduler

val external0 : rule_name_t -> bool

val package : interop_package_t

val prog : unit

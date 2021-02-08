// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vevenoddtranspose.h for the primary calling header

#ifndef _VEVENODDTRANSPOSE_EVENODDTRANSPOSE_H_
#define _VEVENODDTRANSPOSE_EVENODDTRANSPOSE_H_  // guard

#include "verilated_heavy.h"
#include "Vevenoddtranspose__Dpi.h"

//==========

class Vevenoddtranspose__Syms;
class Vevenoddtranspose_VerilatedVcd;


//----------

VL_MODULE(Vevenoddtranspose_evenoddtranspose) {
  public:
    
    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ clock;
        CData/*0:0*/ __PVT___cond0;
        CData/*0:0*/ __PVT___cond1;
        CData/*0:0*/ __PVT___do_swap_evens_out0;
        CData/*0:0*/ __PVT___cond2;
        CData/*0:0*/ __PVT___cond3;
        CData/*0:0*/ __PVT___do_swap_evens_out1;
        CData/*0:0*/ __PVT___do_swap_evens_out2;
        CData/*0:0*/ __PVT___cond4;
        CData/*0:0*/ __PVT___cond5;
        CData/*0:0*/ __PVT___do_swap_evens_out3;
        CData/*0:0*/ __PVT___do_swap_evens_out4;
        CData/*0:0*/ __PVT___cond6;
        CData/*0:0*/ __PVT___cond7;
        CData/*0:0*/ __PVT___do_swap_evens_out5;
        CData/*0:0*/ __PVT___do_swap_evens_out6;
        CData/*0:0*/ __PVT___cond8;
        CData/*0:0*/ __PVT___cond9;
        CData/*0:0*/ __PVT___do_swap_evens_out7;
        CData/*0:0*/ __PVT___do_swap_evens_out8;
        CData/*0:0*/ __PVT___cond10;
        CData/*0:0*/ __PVT___cond11;
        CData/*0:0*/ __PVT___do_swap_evens_out9;
        CData/*0:0*/ __PVT___do_swap_evens_out10;
        CData/*0:0*/ __PVT___cond12;
        CData/*0:0*/ __PVT___cond13;
        CData/*0:0*/ __PVT___do_swap_evens_out11;
        CData/*0:0*/ __PVT___do_swap_evens_out12;
        CData/*0:0*/ __PVT___cond14;
        CData/*0:0*/ __PVT___cond15;
        CData/*0:0*/ __PVT___do_swap_evens_out13;
        CData/*0:0*/ __PVT___do_swap_evens_out14;
        CData/*0:0*/ __PVT___cond16;
        CData/*0:0*/ __PVT___cond17;
        CData/*0:0*/ __PVT___do_swap_evens_out15;
        CData/*0:0*/ __PVT___do_swap_evens_out16;
        CData/*0:0*/ __PVT___cond18;
        CData/*0:0*/ __PVT___cond19;
        CData/*0:0*/ __PVT___do_swap_evens_out17;
        CData/*0:0*/ __PVT___do_swap_evens_out18;
        CData/*0:0*/ __PVT___cond20;
        CData/*0:0*/ __PVT___cond21;
        CData/*0:0*/ __PVT___do_swap_evens_out19;
        CData/*0:0*/ __PVT___do_swap_evens_out20;
        CData/*0:0*/ __PVT___cond22;
        CData/*0:0*/ __PVT___cond23;
        CData/*0:0*/ __PVT___do_swap_evens_out21;
        CData/*0:0*/ __PVT___do_swap_evens_out22;
        CData/*0:0*/ __PVT___cond24;
        CData/*0:0*/ __PVT___cond25;
        CData/*0:0*/ __PVT___do_swap_evens_out23;
        CData/*0:0*/ __PVT___do_swap_evens_out24;
        CData/*0:0*/ __PVT___cond26;
        CData/*0:0*/ __PVT___cond27;
        CData/*0:0*/ __PVT___do_swap_evens_out25;
        CData/*0:0*/ __PVT___do_swap_evens_out26;
        CData/*0:0*/ __PVT___cond28;
        CData/*0:0*/ __PVT___cond29;
        CData/*0:0*/ __PVT___do_swap_evens_out27;
        CData/*0:0*/ __PVT___do_swap_evens_out28;
        CData/*0:0*/ __PVT___cond30;
        CData/*0:0*/ __PVT___cond31;
        CData/*0:0*/ __PVT___do_swap_evens_out29;
        CData/*0:0*/ __PVT___do_swap_evens_out30;
    };
    struct {
        CData/*0:0*/ __PVT___cond32;
        CData/*0:0*/ __PVT___cond33;
        CData/*0:0*/ __PVT___do_swap_evens_out31;
        CData/*0:0*/ __PVT___do_swap_evens_out32;
        CData/*0:0*/ __PVT___cond34;
        CData/*0:0*/ __PVT___cond35;
        CData/*0:0*/ __PVT___do_swap_evens_out33;
        CData/*0:0*/ __PVT___do_swap_evens_out34;
        CData/*0:0*/ __PVT___cond36;
        CData/*0:0*/ __PVT___cond37;
        CData/*0:0*/ __PVT___do_swap_evens_out35;
        CData/*0:0*/ __PVT___do_swap_evens_out36;
        CData/*0:0*/ __PVT___cond38;
        CData/*0:0*/ __PVT___cond39;
        CData/*0:0*/ __PVT___do_swap_evens_out37;
        CData/*0:0*/ __PVT___do_swap_evens_out38;
        CData/*0:0*/ __PVT___cond40;
        CData/*0:0*/ __PVT___cond41;
        CData/*0:0*/ __PVT___do_swap_evens_out39;
        CData/*0:0*/ __PVT___do_swap_evens_out40;
        CData/*0:0*/ __PVT___cond42;
        CData/*0:0*/ __PVT___cond43;
        CData/*0:0*/ __PVT___do_swap_evens_out41;
        CData/*0:0*/ __PVT___do_swap_evens_out42;
        CData/*0:0*/ __PVT___cond44;
        CData/*0:0*/ __PVT___cond45;
        CData/*0:0*/ __PVT___do_swap_evens_out43;
        CData/*0:0*/ __PVT___do_swap_evens_out44;
        CData/*0:0*/ __PVT___cond46;
        CData/*0:0*/ __PVT___cond47;
        CData/*0:0*/ __PVT___do_swap_evens_out45;
        CData/*0:0*/ __PVT___do_swap_evens_out46;
        CData/*0:0*/ __PVT___cond48;
        CData/*0:0*/ __PVT___cond49;
        CData/*0:0*/ __PVT___do_swap_evens_out47;
        CData/*0:0*/ __PVT___do_swap_evens_out48;
        CData/*0:0*/ __PVT___cond50;
        CData/*0:0*/ __PVT___cond51;
        CData/*0:0*/ __PVT___do_swap_evens_out49;
        CData/*0:0*/ __PVT___do_swap_evens_out50;
        CData/*0:0*/ __PVT___cond52;
        CData/*0:0*/ __PVT___cond53;
        CData/*0:0*/ __PVT___do_swap_evens_out51;
        CData/*0:0*/ __PVT___do_swap_evens_out52;
        CData/*0:0*/ __PVT___cond54;
        CData/*0:0*/ __PVT___cond55;
        CData/*0:0*/ __PVT___do_swap_evens_out53;
        CData/*0:0*/ __PVT___do_swap_evens_out54;
        CData/*0:0*/ __PVT___cond56;
        CData/*0:0*/ __PVT___cond57;
        CData/*0:0*/ __PVT___do_swap_evens_out55;
        CData/*0:0*/ __PVT___do_swap_evens_out56;
        CData/*0:0*/ __PVT___cond58;
        CData/*0:0*/ __PVT___cond59;
        CData/*0:0*/ __PVT___do_swap_evens_out57;
        CData/*0:0*/ __PVT___do_swap_evens_out58;
        CData/*0:0*/ __PVT___cond60;
        CData/*0:0*/ __PVT___cond61;
        CData/*0:0*/ __PVT___do_swap_evens_out59;
        CData/*0:0*/ __PVT___do_swap_evens_out60;
        CData/*0:0*/ __PVT___cond62;
        CData/*0:0*/ __PVT___do_swap_evens_out61;
        CData/*0:0*/ __PVT___wF_do_swap_odds0;
        IData/*31:0*/ rData_0;
    };
    struct {
        IData/*31:0*/ rData_1;
        IData/*31:0*/ rData_2;
        IData/*31:0*/ rData_3;
        IData/*31:0*/ rData_4;
        IData/*31:0*/ rData_5;
        IData/*31:0*/ rData_6;
        IData/*31:0*/ rData_7;
        IData/*31:0*/ rData_8;
        IData/*31:0*/ rData_9;
        IData/*31:0*/ rData_10;
        IData/*31:0*/ rData_11;
        IData/*31:0*/ rData_12;
        IData/*31:0*/ rData_13;
        IData/*31:0*/ rData_14;
        IData/*31:0*/ rData_15;
        IData/*31:0*/ rData_16;
        IData/*31:0*/ rData_17;
        IData/*31:0*/ rData_18;
        IData/*31:0*/ rData_19;
        IData/*31:0*/ rData_20;
        IData/*31:0*/ rData_21;
        IData/*31:0*/ rData_22;
        IData/*31:0*/ rData_23;
        IData/*31:0*/ rData_24;
        IData/*31:0*/ rData_25;
        IData/*31:0*/ rData_26;
        IData/*31:0*/ rData_27;
        IData/*31:0*/ rData_28;
        IData/*31:0*/ rData_29;
        IData/*31:0*/ rData_30;
        IData/*31:0*/ rData_31;
        IData/*31:0*/ rData_32;
        IData/*31:0*/ rData_33;
        IData/*31:0*/ rData_34;
        IData/*31:0*/ rData_35;
        IData/*31:0*/ rData_36;
        IData/*31:0*/ rData_37;
        IData/*31:0*/ rData_38;
        IData/*31:0*/ rData_39;
        IData/*31:0*/ rData_40;
        IData/*31:0*/ rData_41;
        IData/*31:0*/ rData_42;
        IData/*31:0*/ rData_43;
        IData/*31:0*/ rData_44;
        IData/*31:0*/ rData_45;
        IData/*31:0*/ rData_46;
        IData/*31:0*/ rData_47;
        IData/*31:0*/ rData_48;
        IData/*31:0*/ rData_49;
        IData/*31:0*/ rData_50;
        IData/*31:0*/ rData_51;
        IData/*31:0*/ rData_52;
        IData/*31:0*/ rData_53;
        IData/*31:0*/ rData_54;
        IData/*31:0*/ rData_55;
        IData/*31:0*/ rData_56;
        IData/*31:0*/ rData_57;
        IData/*31:0*/ rData_58;
        IData/*31:0*/ rData_59;
        IData/*31:0*/ rData_60;
        IData/*31:0*/ rData_61;
        IData/*31:0*/ rData_62;
        IData/*31:0*/ rData_63;
    };
    
    // INTERNAL VARIABLES
  private:
    Vevenoddtranspose__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vevenoddtranspose_evenoddtranspose);  ///< Copying not allowed
  public:
    Vevenoddtranspose_evenoddtranspose(const char* name = "TOP");
    ~Vevenoddtranspose_evenoddtranspose();
    
    // INTERNAL METHODS
    void __Vconfigure(Vevenoddtranspose__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__evenoddtranspose__2(Vevenoddtranspose__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__evenoddtranspose__1(Vevenoddtranspose__Syms* __restrict vlSymsp);
    static void _settle__TOP__evenoddtranspose__3(Vevenoddtranspose__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

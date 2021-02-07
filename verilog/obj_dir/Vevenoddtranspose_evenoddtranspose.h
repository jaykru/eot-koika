// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vevenoddtranspose.h for the primary calling header

#ifndef _VEVENODDTRANSPOSE_EVENODDTRANSPOSE_H_
#define _VEVENODDTRANSPOSE_EVENODDTRANSPOSE_H_  // guard

#include "verilated.h"
#include "Vevenoddtranspose__Dpi.h"

//==========

class Vevenoddtranspose__Syms;

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
        IData/*31:0*/ rData_0;
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
    };
    struct {
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
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

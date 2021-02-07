// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vevenoddtranspose.h for the primary calling header

#include "Vevenoddtranspose_evenoddtranspose.h"
#include "Vevenoddtranspose__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vevenoddtranspose_evenoddtranspose::_sequent__TOP__evenoddtranspose__1(Vevenoddtranspose__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vevenoddtranspose_evenoddtranspose::_sequent__TOP__evenoddtranspose__1\n"); );
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        vlSymsp->TOP__evenoddtranspose.rData_63 = vlSymsp->TOP__evenoddtranspose.rData_63;
        vlSymsp->TOP__evenoddtranspose.rData_62 = vlSymsp->TOP__evenoddtranspose.rData_62;
        vlSymsp->TOP__evenoddtranspose.rData_61 = vlSymsp->TOP__evenoddtranspose.rData_61;
        vlSymsp->TOP__evenoddtranspose.rData_60 = vlSymsp->TOP__evenoddtranspose.rData_60;
        vlSymsp->TOP__evenoddtranspose.rData_59 = vlSymsp->TOP__evenoddtranspose.rData_59;
        vlSymsp->TOP__evenoddtranspose.rData_58 = vlSymsp->TOP__evenoddtranspose.rData_58;
        vlSymsp->TOP__evenoddtranspose.rData_57 = vlSymsp->TOP__evenoddtranspose.rData_57;
        vlSymsp->TOP__evenoddtranspose.rData_56 = vlSymsp->TOP__evenoddtranspose.rData_56;
        vlSymsp->TOP__evenoddtranspose.rData_55 = vlSymsp->TOP__evenoddtranspose.rData_55;
        vlSymsp->TOP__evenoddtranspose.rData_54 = vlSymsp->TOP__evenoddtranspose.rData_54;
        vlSymsp->TOP__evenoddtranspose.rData_53 = vlSymsp->TOP__evenoddtranspose.rData_53;
        vlSymsp->TOP__evenoddtranspose.rData_52 = vlSymsp->TOP__evenoddtranspose.rData_52;
        vlSymsp->TOP__evenoddtranspose.rData_51 = vlSymsp->TOP__evenoddtranspose.rData_51;
        vlSymsp->TOP__evenoddtranspose.rData_50 = vlSymsp->TOP__evenoddtranspose.rData_50;
        vlSymsp->TOP__evenoddtranspose.rData_49 = vlSymsp->TOP__evenoddtranspose.rData_49;
        vlSymsp->TOP__evenoddtranspose.rData_48 = vlSymsp->TOP__evenoddtranspose.rData_48;
        vlSymsp->TOP__evenoddtranspose.rData_47 = vlSymsp->TOP__evenoddtranspose.rData_47;
        vlSymsp->TOP__evenoddtranspose.rData_46 = vlSymsp->TOP__evenoddtranspose.rData_46;
        vlSymsp->TOP__evenoddtranspose.rData_45 = vlSymsp->TOP__evenoddtranspose.rData_45;
        vlSymsp->TOP__evenoddtranspose.rData_44 = vlSymsp->TOP__evenoddtranspose.rData_44;
        vlSymsp->TOP__evenoddtranspose.rData_43 = vlSymsp->TOP__evenoddtranspose.rData_43;
        vlSymsp->TOP__evenoddtranspose.rData_42 = vlSymsp->TOP__evenoddtranspose.rData_42;
        vlSymsp->TOP__evenoddtranspose.rData_41 = vlSymsp->TOP__evenoddtranspose.rData_41;
        vlSymsp->TOP__evenoddtranspose.rData_40 = vlSymsp->TOP__evenoddtranspose.rData_40;
        vlSymsp->TOP__evenoddtranspose.rData_39 = vlSymsp->TOP__evenoddtranspose.rData_39;
        vlSymsp->TOP__evenoddtranspose.rData_38 = vlSymsp->TOP__evenoddtranspose.rData_38;
        vlSymsp->TOP__evenoddtranspose.rData_37 = vlSymsp->TOP__evenoddtranspose.rData_37;
        vlSymsp->TOP__evenoddtranspose.rData_36 = vlSymsp->TOP__evenoddtranspose.rData_36;
        vlSymsp->TOP__evenoddtranspose.rData_35 = vlSymsp->TOP__evenoddtranspose.rData_35;
        vlSymsp->TOP__evenoddtranspose.rData_34 = vlSymsp->TOP__evenoddtranspose.rData_34;
        vlSymsp->TOP__evenoddtranspose.rData_33 = vlSymsp->TOP__evenoddtranspose.rData_33;
        vlSymsp->TOP__evenoddtranspose.rData_32 = vlSymsp->TOP__evenoddtranspose.rData_32;
        vlSymsp->TOP__evenoddtranspose.rData_31 = vlSymsp->TOP__evenoddtranspose.rData_31;
        vlSymsp->TOP__evenoddtranspose.rData_30 = vlSymsp->TOP__evenoddtranspose.rData_30;
        vlSymsp->TOP__evenoddtranspose.rData_29 = vlSymsp->TOP__evenoddtranspose.rData_29;
        vlSymsp->TOP__evenoddtranspose.rData_28 = vlSymsp->TOP__evenoddtranspose.rData_28;
        vlSymsp->TOP__evenoddtranspose.rData_27 = vlSymsp->TOP__evenoddtranspose.rData_27;
        vlSymsp->TOP__evenoddtranspose.rData_26 = vlSymsp->TOP__evenoddtranspose.rData_26;
        vlSymsp->TOP__evenoddtranspose.rData_25 = vlSymsp->TOP__evenoddtranspose.rData_25;
        vlSymsp->TOP__evenoddtranspose.rData_24 = vlSymsp->TOP__evenoddtranspose.rData_24;
        vlSymsp->TOP__evenoddtranspose.rData_23 = vlSymsp->TOP__evenoddtranspose.rData_23;
        vlSymsp->TOP__evenoddtranspose.rData_22 = vlSymsp->TOP__evenoddtranspose.rData_22;
        vlSymsp->TOP__evenoddtranspose.rData_21 = vlSymsp->TOP__evenoddtranspose.rData_21;
        vlSymsp->TOP__evenoddtranspose.rData_20 = vlSymsp->TOP__evenoddtranspose.rData_20;
        vlSymsp->TOP__evenoddtranspose.rData_19 = vlSymsp->TOP__evenoddtranspose.rData_19;
        vlSymsp->TOP__evenoddtranspose.rData_18 = vlSymsp->TOP__evenoddtranspose.rData_18;
        vlSymsp->TOP__evenoddtranspose.rData_17 = vlSymsp->TOP__evenoddtranspose.rData_17;
        vlSymsp->TOP__evenoddtranspose.rData_16 = vlSymsp->TOP__evenoddtranspose.rData_16;
        vlSymsp->TOP__evenoddtranspose.clock = (((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__evenoddtranspose.clock)) 
                                                & 1U);
        vlSymsp->TOP__evenoddtranspose.rData_15 = vlSymsp->TOP__evenoddtranspose.rData_15;
        vlSymsp->TOP__evenoddtranspose.rData_14 = vlSymsp->TOP__evenoddtranspose.rData_14;
        vlSymsp->TOP__evenoddtranspose.rData_13 = vlSymsp->TOP__evenoddtranspose.rData_13;
        vlSymsp->TOP__evenoddtranspose.rData_12 = vlSymsp->TOP__evenoddtranspose.rData_12;
        vlSymsp->TOP__evenoddtranspose.rData_11 = vlSymsp->TOP__evenoddtranspose.rData_11;
        vlSymsp->TOP__evenoddtranspose.rData_10 = vlSymsp->TOP__evenoddtranspose.rData_10;
        vlSymsp->TOP__evenoddtranspose.rData_9 = vlSymsp->TOP__evenoddtranspose.rData_9;
        vlSymsp->TOP__evenoddtranspose.rData_8 = vlSymsp->TOP__evenoddtranspose.rData_8;
        vlSymsp->TOP__evenoddtranspose.rData_7 = vlSymsp->TOP__evenoddtranspose.rData_7;
        vlSymsp->TOP__evenoddtranspose.rData_6 = vlSymsp->TOP__evenoddtranspose.rData_6;
        vlSymsp->TOP__evenoddtranspose.rData_5 = vlSymsp->TOP__evenoddtranspose.rData_5;
        vlSymsp->TOP__evenoddtranspose.rData_4 = vlSymsp->TOP__evenoddtranspose.rData_4;
        vlSymsp->TOP__evenoddtranspose.rData_3 = vlSymsp->TOP__evenoddtranspose.rData_3;
        vlSymsp->TOP__evenoddtranspose.rData_2 = vlSymsp->TOP__evenoddtranspose.rData_2;
        vlSymsp->TOP__evenoddtranspose.rData_0 = vlSymsp->TOP__evenoddtranspose.rData_0;
        vlSymsp->TOP__evenoddtranspose.rData_1 = vlSymsp->TOP__evenoddtranspose.rData_1;
    } else {
        vlSymsp->TOP__evenoddtranspose.rData_63 = 0U;
        vlSymsp->TOP__evenoddtranspose.rData_62 = 0x22U;
        vlSymsp->TOP__evenoddtranspose.rData_61 = 0x1aU;
        vlSymsp->TOP__evenoddtranspose.rData_60 = 0x64U;
        vlSymsp->TOP__evenoddtranspose.rData_59 = 0x2eU;
        vlSymsp->TOP__evenoddtranspose.rData_58 = 0x5cU;
        vlSymsp->TOP__evenoddtranspose.rData_57 = 0x40U;
        vlSymsp->TOP__evenoddtranspose.rData_56 = 0x3aU;
        vlSymsp->TOP__evenoddtranspose.rData_55 = 0x62U;
        vlSymsp->TOP__evenoddtranspose.rData_54 = 0x12U;
        vlSymsp->TOP__evenoddtranspose.rData_53 = 0x2bU;
        vlSymsp->TOP__evenoddtranspose.rData_52 = 0xcU;
        vlSymsp->TOP__evenoddtranspose.rData_51 = 0x43U;
        vlSymsp->TOP__evenoddtranspose.rData_50 = 0xbU;
        vlSymsp->TOP__evenoddtranspose.rData_49 = 2U;
        vlSymsp->TOP__evenoddtranspose.rData_48 = 0x61U;
        vlSymsp->TOP__evenoddtranspose.rData_47 = 0x21U;
        vlSymsp->TOP__evenoddtranspose.rData_46 = 0x45U;
        vlSymsp->TOP__evenoddtranspose.rData_45 = 0x1cU;
        vlSymsp->TOP__evenoddtranspose.rData_44 = 0x16U;
        vlSymsp->TOP__evenoddtranspose.rData_43 = 0x55U;
        vlSymsp->TOP__evenoddtranspose.rData_42 = 5U;
        vlSymsp->TOP__evenoddtranspose.rData_41 = 0x27U;
        vlSymsp->TOP__evenoddtranspose.rData_40 = 1U;
        vlSymsp->TOP__evenoddtranspose.rData_39 = 0x60U;
        vlSymsp->TOP__evenoddtranspose.rData_38 = 0xeU;
        vlSymsp->TOP__evenoddtranspose.rData_37 = 0x14U;
        vlSymsp->TOP__evenoddtranspose.rData_36 = 0x13U;
        vlSymsp->TOP__evenoddtranspose.rData_35 = 0x1bU;
        vlSymsp->TOP__evenoddtranspose.rData_34 = 0x54U;
        vlSymsp->TOP__evenoddtranspose.rData_33 = 8U;
        vlSymsp->TOP__evenoddtranspose.rData_32 = 0xdU;
        vlSymsp->TOP__evenoddtranspose.rData_31 = 0x25U;
        vlSymsp->TOP__evenoddtranspose.rData_30 = 0x10U;
        vlSymsp->TOP__evenoddtranspose.rData_29 = 0x1fU;
        vlSymsp->TOP__evenoddtranspose.rData_28 = 0x2aU;
        vlSymsp->TOP__evenoddtranspose.rData_27 = 0x44U;
        vlSymsp->TOP__evenoddtranspose.rData_26 = 0x3eU;
        vlSymsp->TOP__evenoddtranspose.rData_25 = 0x3bU;
        vlSymsp->TOP__evenoddtranspose.rData_24 = 0x50U;
        vlSymsp->TOP__evenoddtranspose.rData_23 = 0x31U;
        vlSymsp->TOP__evenoddtranspose.rData_22 = 0x58U;
        vlSymsp->TOP__evenoddtranspose.rData_21 = 0x29U;
        vlSymsp->TOP__evenoddtranspose.rData_20 = 0x4eU;
        vlSymsp->TOP__evenoddtranspose.rData_19 = 0x3fU;
        vlSymsp->TOP__evenoddtranspose.rData_18 = 0x1eU;
        vlSymsp->TOP__evenoddtranspose.rData_17 = 0x39U;
        vlSymsp->TOP__evenoddtranspose.rData_16 = 0x47U;
        vlSymsp->TOP__evenoddtranspose.clock = 0U;
        vlSymsp->TOP__evenoddtranspose.rData_15 = 0x48U;
        vlSymsp->TOP__evenoddtranspose.rData_14 = 9U;
        vlSymsp->TOP__evenoddtranspose.rData_13 = 0x37U;
        vlSymsp->TOP__evenoddtranspose.rData_12 = 0x59U;
        vlSymsp->TOP__evenoddtranspose.rData_11 = 0x30U;
        vlSymsp->TOP__evenoddtranspose.rData_10 = 0x2dU;
        vlSymsp->TOP__evenoddtranspose.rData_9 = 0x4dU;
        vlSymsp->TOP__evenoddtranspose.rData_8 = 0x36U;
        vlSymsp->TOP__evenoddtranspose.rData_7 = 0x53U;
        vlSymsp->TOP__evenoddtranspose.rData_6 = 0x23U;
        vlSymsp->TOP__evenoddtranspose.rData_5 = 0x15U;
        vlSymsp->TOP__evenoddtranspose.rData_4 = 0x41U;
        vlSymsp->TOP__evenoddtranspose.rData_3 = 0x3dU;
        vlSymsp->TOP__evenoddtranspose.rData_2 = 0x4fU;
        vlSymsp->TOP__evenoddtranspose.rData_0 = 0x19U;
        vlSymsp->TOP__evenoddtranspose.rData_1 = 0x32U;
    }
}

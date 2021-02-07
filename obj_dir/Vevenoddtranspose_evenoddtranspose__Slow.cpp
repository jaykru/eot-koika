// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vevenoddtranspose.h for the primary calling header

#include "Vevenoddtranspose_evenoddtranspose.h"
#include "Vevenoddtranspose__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vevenoddtranspose_evenoddtranspose) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vevenoddtranspose_evenoddtranspose::__Vconfigure(Vevenoddtranspose__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vevenoddtranspose_evenoddtranspose::~Vevenoddtranspose_evenoddtranspose() {
}

void Vevenoddtranspose_evenoddtranspose::_initial__TOP__evenoddtranspose__2(Vevenoddtranspose__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vevenoddtranspose_evenoddtranspose::_initial__TOP__evenoddtranspose__2\n"); );
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__evenoddtranspose.rData_0 = 0x19U;
    vlSymsp->TOP__evenoddtranspose.rData_1 = 0x32U;
    vlSymsp->TOP__evenoddtranspose.rData_2 = 0x4fU;
    vlSymsp->TOP__evenoddtranspose.rData_3 = 0x3dU;
    vlSymsp->TOP__evenoddtranspose.rData_4 = 0x41U;
    vlSymsp->TOP__evenoddtranspose.rData_5 = 0x15U;
    vlSymsp->TOP__evenoddtranspose.rData_6 = 0x23U;
    vlSymsp->TOP__evenoddtranspose.rData_7 = 0x53U;
    vlSymsp->TOP__evenoddtranspose.rData_8 = 0x36U;
    vlSymsp->TOP__evenoddtranspose.rData_9 = 0x4dU;
    vlSymsp->TOP__evenoddtranspose.rData_10 = 0x2dU;
    vlSymsp->TOP__evenoddtranspose.rData_11 = 0x30U;
    vlSymsp->TOP__evenoddtranspose.rData_12 = 0x59U;
    vlSymsp->TOP__evenoddtranspose.rData_13 = 0x37U;
    vlSymsp->TOP__evenoddtranspose.rData_14 = 9U;
    vlSymsp->TOP__evenoddtranspose.rData_15 = 0x48U;
    vlSymsp->TOP__evenoddtranspose.rData_16 = 0x47U;
    vlSymsp->TOP__evenoddtranspose.rData_17 = 0x39U;
    vlSymsp->TOP__evenoddtranspose.rData_18 = 0x1eU;
    vlSymsp->TOP__evenoddtranspose.rData_19 = 0x3fU;
    vlSymsp->TOP__evenoddtranspose.rData_20 = 0x4eU;
    vlSymsp->TOP__evenoddtranspose.rData_21 = 0x29U;
    vlSymsp->TOP__evenoddtranspose.rData_22 = 0x58U;
    vlSymsp->TOP__evenoddtranspose.rData_23 = 0x31U;
    vlSymsp->TOP__evenoddtranspose.rData_24 = 0x50U;
    vlSymsp->TOP__evenoddtranspose.rData_25 = 0x3bU;
    vlSymsp->TOP__evenoddtranspose.rData_26 = 0x3eU;
    vlSymsp->TOP__evenoddtranspose.rData_27 = 0x44U;
    vlSymsp->TOP__evenoddtranspose.rData_28 = 0x2aU;
    vlSymsp->TOP__evenoddtranspose.rData_29 = 0x1fU;
    vlSymsp->TOP__evenoddtranspose.rData_30 = 0x10U;
    vlSymsp->TOP__evenoddtranspose.rData_31 = 0x25U;
    vlSymsp->TOP__evenoddtranspose.rData_32 = 0xdU;
    vlSymsp->TOP__evenoddtranspose.rData_33 = 8U;
    vlSymsp->TOP__evenoddtranspose.rData_34 = 0x54U;
    vlSymsp->TOP__evenoddtranspose.rData_35 = 0x1bU;
    vlSymsp->TOP__evenoddtranspose.rData_36 = 0x13U;
    vlSymsp->TOP__evenoddtranspose.rData_37 = 0x14U;
    vlSymsp->TOP__evenoddtranspose.rData_38 = 0xeU;
    vlSymsp->TOP__evenoddtranspose.rData_39 = 0x60U;
    vlSymsp->TOP__evenoddtranspose.rData_40 = 1U;
    vlSymsp->TOP__evenoddtranspose.rData_41 = 0x27U;
    vlSymsp->TOP__evenoddtranspose.rData_42 = 5U;
    vlSymsp->TOP__evenoddtranspose.rData_43 = 0x55U;
    vlSymsp->TOP__evenoddtranspose.rData_44 = 0x16U;
    vlSymsp->TOP__evenoddtranspose.rData_45 = 0x1cU;
    vlSymsp->TOP__evenoddtranspose.rData_46 = 0x45U;
    vlSymsp->TOP__evenoddtranspose.rData_47 = 0x21U;
    vlSymsp->TOP__evenoddtranspose.rData_48 = 0x61U;
    vlSymsp->TOP__evenoddtranspose.rData_49 = 2U;
    vlSymsp->TOP__evenoddtranspose.rData_50 = 0xbU;
    vlSymsp->TOP__evenoddtranspose.rData_51 = 0x43U;
    vlSymsp->TOP__evenoddtranspose.rData_52 = 0xcU;
    vlSymsp->TOP__evenoddtranspose.rData_53 = 0x2bU;
    vlSymsp->TOP__evenoddtranspose.rData_54 = 0x12U;
    vlSymsp->TOP__evenoddtranspose.rData_55 = 0x62U;
    vlSymsp->TOP__evenoddtranspose.rData_56 = 0x3aU;
    vlSymsp->TOP__evenoddtranspose.rData_57 = 0x40U;
    vlSymsp->TOP__evenoddtranspose.rData_58 = 0x5cU;
    vlSymsp->TOP__evenoddtranspose.rData_59 = 0x2eU;
    vlSymsp->TOP__evenoddtranspose.rData_60 = 0x64U;
    vlSymsp->TOP__evenoddtranspose.rData_61 = 0x1aU;
    vlSymsp->TOP__evenoddtranspose.rData_62 = 0x22U;
    vlSymsp->TOP__evenoddtranspose.rData_63 = 0U;
    vlSymsp->TOP__evenoddtranspose.clock = 0U;
}

void Vevenoddtranspose_evenoddtranspose::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vevenoddtranspose_evenoddtranspose::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    rData_0 = VL_RAND_RESET_I(32);
    rData_1 = VL_RAND_RESET_I(32);
    rData_2 = VL_RAND_RESET_I(32);
    rData_3 = VL_RAND_RESET_I(32);
    rData_4 = VL_RAND_RESET_I(32);
    rData_5 = VL_RAND_RESET_I(32);
    rData_6 = VL_RAND_RESET_I(32);
    rData_7 = VL_RAND_RESET_I(32);
    rData_8 = VL_RAND_RESET_I(32);
    rData_9 = VL_RAND_RESET_I(32);
    rData_10 = VL_RAND_RESET_I(32);
    rData_11 = VL_RAND_RESET_I(32);
    rData_12 = VL_RAND_RESET_I(32);
    rData_13 = VL_RAND_RESET_I(32);
    rData_14 = VL_RAND_RESET_I(32);
    rData_15 = VL_RAND_RESET_I(32);
    rData_16 = VL_RAND_RESET_I(32);
    rData_17 = VL_RAND_RESET_I(32);
    rData_18 = VL_RAND_RESET_I(32);
    rData_19 = VL_RAND_RESET_I(32);
    rData_20 = VL_RAND_RESET_I(32);
    rData_21 = VL_RAND_RESET_I(32);
    rData_22 = VL_RAND_RESET_I(32);
    rData_23 = VL_RAND_RESET_I(32);
    rData_24 = VL_RAND_RESET_I(32);
    rData_25 = VL_RAND_RESET_I(32);
    rData_26 = VL_RAND_RESET_I(32);
    rData_27 = VL_RAND_RESET_I(32);
    rData_28 = VL_RAND_RESET_I(32);
    rData_29 = VL_RAND_RESET_I(32);
    rData_30 = VL_RAND_RESET_I(32);
    rData_31 = VL_RAND_RESET_I(32);
    rData_32 = VL_RAND_RESET_I(32);
    rData_33 = VL_RAND_RESET_I(32);
    rData_34 = VL_RAND_RESET_I(32);
    rData_35 = VL_RAND_RESET_I(32);
    rData_36 = VL_RAND_RESET_I(32);
    rData_37 = VL_RAND_RESET_I(32);
    rData_38 = VL_RAND_RESET_I(32);
    rData_39 = VL_RAND_RESET_I(32);
    rData_40 = VL_RAND_RESET_I(32);
    rData_41 = VL_RAND_RESET_I(32);
    rData_42 = VL_RAND_RESET_I(32);
    rData_43 = VL_RAND_RESET_I(32);
    rData_44 = VL_RAND_RESET_I(32);
    rData_45 = VL_RAND_RESET_I(32);
    rData_46 = VL_RAND_RESET_I(32);
    rData_47 = VL_RAND_RESET_I(32);
    rData_48 = VL_RAND_RESET_I(32);
    rData_49 = VL_RAND_RESET_I(32);
    rData_50 = VL_RAND_RESET_I(32);
    rData_51 = VL_RAND_RESET_I(32);
    rData_52 = VL_RAND_RESET_I(32);
    rData_53 = VL_RAND_RESET_I(32);
    rData_54 = VL_RAND_RESET_I(32);
    rData_55 = VL_RAND_RESET_I(32);
    rData_56 = VL_RAND_RESET_I(32);
    rData_57 = VL_RAND_RESET_I(32);
    rData_58 = VL_RAND_RESET_I(32);
    rData_59 = VL_RAND_RESET_I(32);
    rData_60 = VL_RAND_RESET_I(32);
    rData_61 = VL_RAND_RESET_I(32);
    rData_62 = VL_RAND_RESET_I(32);
    rData_63 = VL_RAND_RESET_I(32);
    clock = VL_RAND_RESET_I(1);
}

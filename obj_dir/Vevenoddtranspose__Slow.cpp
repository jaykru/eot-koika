// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vevenoddtranspose.h for the primary calling header

#include "Vevenoddtranspose.h"
#include "Vevenoddtranspose__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vevenoddtranspose) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = __VlSymsp = new Vevenoddtranspose__Syms(this, name());
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(evenoddtranspose, Vevenoddtranspose_evenoddtranspose);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vevenoddtranspose::__Vconfigure(Vevenoddtranspose__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vevenoddtranspose::~Vevenoddtranspose() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vevenoddtranspose::_eval_initial(Vevenoddtranspose__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vevenoddtranspose::_eval_initial\n"); );
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlSymsp->TOP__evenoddtranspose._initial__TOP__evenoddtranspose__2(vlSymsp);
}

void Vevenoddtranspose::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vevenoddtranspose::final\n"); );
    // Variables
    Vevenoddtranspose__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vevenoddtranspose::_eval_settle(Vevenoddtranspose__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vevenoddtranspose::_eval_settle\n"); );
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__evenoddtranspose._settle__TOP__evenoddtranspose__3(vlSymsp);
}

void Vevenoddtranspose::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vevenoddtranspose::_ctor_var_reset\n"); );
    // Body
    CLK = VL_RAND_RESET_I(1);
    RST_N = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

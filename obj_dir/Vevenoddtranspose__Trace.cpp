// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vevenoddtranspose__Syms.h"


void Vevenoddtranspose::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vevenoddtranspose::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->CLK));
        tracep->chgBit(oldp+1,(vlTOPp->RST_N));
        tracep->chgIData(oldp+2,(vlSymsp->TOP__evenoddtranspose.rData_0),32);
        tracep->chgIData(oldp+3,(vlSymsp->TOP__evenoddtranspose.rData_1),32);
        tracep->chgIData(oldp+4,(vlSymsp->TOP__evenoddtranspose.rData_2),32);
        tracep->chgIData(oldp+5,(vlSymsp->TOP__evenoddtranspose.rData_3),32);
        tracep->chgIData(oldp+6,(vlSymsp->TOP__evenoddtranspose.rData_4),32);
        tracep->chgIData(oldp+7,(vlSymsp->TOP__evenoddtranspose.rData_5),32);
        tracep->chgIData(oldp+8,(vlSymsp->TOP__evenoddtranspose.rData_6),32);
        tracep->chgIData(oldp+9,(vlSymsp->TOP__evenoddtranspose.rData_7),32);
        tracep->chgIData(oldp+10,(vlSymsp->TOP__evenoddtranspose.rData_8),32);
        tracep->chgIData(oldp+11,(vlSymsp->TOP__evenoddtranspose.rData_9),32);
        tracep->chgIData(oldp+12,(vlSymsp->TOP__evenoddtranspose.rData_10),32);
        tracep->chgIData(oldp+13,(vlSymsp->TOP__evenoddtranspose.rData_11),32);
        tracep->chgIData(oldp+14,(vlSymsp->TOP__evenoddtranspose.rData_12),32);
        tracep->chgIData(oldp+15,(vlSymsp->TOP__evenoddtranspose.rData_13),32);
        tracep->chgIData(oldp+16,(vlSymsp->TOP__evenoddtranspose.rData_14),32);
        tracep->chgIData(oldp+17,(vlSymsp->TOP__evenoddtranspose.rData_15),32);
        tracep->chgIData(oldp+18,(vlSymsp->TOP__evenoddtranspose.rData_16),32);
        tracep->chgIData(oldp+19,(vlSymsp->TOP__evenoddtranspose.rData_17),32);
        tracep->chgIData(oldp+20,(vlSymsp->TOP__evenoddtranspose.rData_18),32);
        tracep->chgIData(oldp+21,(vlSymsp->TOP__evenoddtranspose.rData_19),32);
        tracep->chgIData(oldp+22,(vlSymsp->TOP__evenoddtranspose.rData_20),32);
        tracep->chgIData(oldp+23,(vlSymsp->TOP__evenoddtranspose.rData_21),32);
        tracep->chgIData(oldp+24,(vlSymsp->TOP__evenoddtranspose.rData_22),32);
        tracep->chgIData(oldp+25,(vlSymsp->TOP__evenoddtranspose.rData_23),32);
        tracep->chgIData(oldp+26,(vlSymsp->TOP__evenoddtranspose.rData_24),32);
        tracep->chgIData(oldp+27,(vlSymsp->TOP__evenoddtranspose.rData_25),32);
        tracep->chgIData(oldp+28,(vlSymsp->TOP__evenoddtranspose.rData_26),32);
        tracep->chgIData(oldp+29,(vlSymsp->TOP__evenoddtranspose.rData_27),32);
        tracep->chgIData(oldp+30,(vlSymsp->TOP__evenoddtranspose.rData_28),32);
        tracep->chgIData(oldp+31,(vlSymsp->TOP__evenoddtranspose.rData_29),32);
        tracep->chgIData(oldp+32,(vlSymsp->TOP__evenoddtranspose.rData_30),32);
        tracep->chgIData(oldp+33,(vlSymsp->TOP__evenoddtranspose.rData_31),32);
        tracep->chgIData(oldp+34,(vlSymsp->TOP__evenoddtranspose.rData_32),32);
        tracep->chgIData(oldp+35,(vlSymsp->TOP__evenoddtranspose.rData_33),32);
        tracep->chgIData(oldp+36,(vlSymsp->TOP__evenoddtranspose.rData_34),32);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__evenoddtranspose.rData_35),32);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__evenoddtranspose.rData_36),32);
        tracep->chgIData(oldp+39,(vlSymsp->TOP__evenoddtranspose.rData_37),32);
        tracep->chgIData(oldp+40,(vlSymsp->TOP__evenoddtranspose.rData_38),32);
        tracep->chgIData(oldp+41,(vlSymsp->TOP__evenoddtranspose.rData_39),32);
        tracep->chgIData(oldp+42,(vlSymsp->TOP__evenoddtranspose.rData_40),32);
        tracep->chgIData(oldp+43,(vlSymsp->TOP__evenoddtranspose.rData_41),32);
        tracep->chgIData(oldp+44,(vlSymsp->TOP__evenoddtranspose.rData_42),32);
        tracep->chgIData(oldp+45,(vlSymsp->TOP__evenoddtranspose.rData_43),32);
        tracep->chgIData(oldp+46,(vlSymsp->TOP__evenoddtranspose.rData_44),32);
        tracep->chgIData(oldp+47,(vlSymsp->TOP__evenoddtranspose.rData_45),32);
        tracep->chgIData(oldp+48,(vlSymsp->TOP__evenoddtranspose.rData_46),32);
        tracep->chgIData(oldp+49,(vlSymsp->TOP__evenoddtranspose.rData_47),32);
        tracep->chgIData(oldp+50,(vlSymsp->TOP__evenoddtranspose.rData_48),32);
        tracep->chgIData(oldp+51,(vlSymsp->TOP__evenoddtranspose.rData_49),32);
        tracep->chgIData(oldp+52,(vlSymsp->TOP__evenoddtranspose.rData_50),32);
        tracep->chgIData(oldp+53,(vlSymsp->TOP__evenoddtranspose.rData_51),32);
        tracep->chgIData(oldp+54,(vlSymsp->TOP__evenoddtranspose.rData_52),32);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__evenoddtranspose.rData_53),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__evenoddtranspose.rData_54),32);
        tracep->chgIData(oldp+57,(vlSymsp->TOP__evenoddtranspose.rData_55),32);
        tracep->chgIData(oldp+58,(vlSymsp->TOP__evenoddtranspose.rData_56),32);
        tracep->chgIData(oldp+59,(vlSymsp->TOP__evenoddtranspose.rData_57),32);
        tracep->chgIData(oldp+60,(vlSymsp->TOP__evenoddtranspose.rData_58),32);
        tracep->chgIData(oldp+61,(vlSymsp->TOP__evenoddtranspose.rData_59),32);
        tracep->chgIData(oldp+62,(vlSymsp->TOP__evenoddtranspose.rData_60),32);
        tracep->chgIData(oldp+63,(vlSymsp->TOP__evenoddtranspose.rData_61),32);
        tracep->chgIData(oldp+64,(vlSymsp->TOP__evenoddtranspose.rData_62),32);
        tracep->chgIData(oldp+65,(vlSymsp->TOP__evenoddtranspose.rData_63),32);
        tracep->chgBit(oldp+66,(vlSymsp->TOP__evenoddtranspose.clock));
    }
}

void Vevenoddtranspose::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}

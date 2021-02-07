// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vevenoddtranspose__Syms.h"


//======================

void Vevenoddtranspose::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vevenoddtranspose::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vevenoddtranspose::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vevenoddtranspose::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vevenoddtranspose::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"CLK", false,-1, 0,0);
        tracep->declBus(c+2,"RST_N", false,-1, 0,0);
        tracep->declBus(c+1,"evenoddtranspose CLK", false,-1, 0,0);
        tracep->declBus(c+2,"evenoddtranspose RST_N", false,-1, 0,0);
        tracep->declBus(c+3,"evenoddtranspose rData_0", false,-1, 31,0);
        tracep->declBus(c+4,"evenoddtranspose rData_1", false,-1, 31,0);
        tracep->declBus(c+5,"evenoddtranspose rData_2", false,-1, 31,0);
        tracep->declBus(c+6,"evenoddtranspose rData_3", false,-1, 31,0);
        tracep->declBus(c+7,"evenoddtranspose rData_4", false,-1, 31,0);
        tracep->declBus(c+8,"evenoddtranspose rData_5", false,-1, 31,0);
        tracep->declBus(c+9,"evenoddtranspose rData_6", false,-1, 31,0);
        tracep->declBus(c+10,"evenoddtranspose rData_7", false,-1, 31,0);
        tracep->declBus(c+11,"evenoddtranspose rData_8", false,-1, 31,0);
        tracep->declBus(c+12,"evenoddtranspose rData_9", false,-1, 31,0);
        tracep->declBus(c+13,"evenoddtranspose rData_10", false,-1, 31,0);
        tracep->declBus(c+14,"evenoddtranspose rData_11", false,-1, 31,0);
        tracep->declBus(c+15,"evenoddtranspose rData_12", false,-1, 31,0);
        tracep->declBus(c+16,"evenoddtranspose rData_13", false,-1, 31,0);
        tracep->declBus(c+17,"evenoddtranspose rData_14", false,-1, 31,0);
        tracep->declBus(c+18,"evenoddtranspose rData_15", false,-1, 31,0);
        tracep->declBus(c+19,"evenoddtranspose rData_16", false,-1, 31,0);
        tracep->declBus(c+20,"evenoddtranspose rData_17", false,-1, 31,0);
        tracep->declBus(c+21,"evenoddtranspose rData_18", false,-1, 31,0);
        tracep->declBus(c+22,"evenoddtranspose rData_19", false,-1, 31,0);
        tracep->declBus(c+23,"evenoddtranspose rData_20", false,-1, 31,0);
        tracep->declBus(c+24,"evenoddtranspose rData_21", false,-1, 31,0);
        tracep->declBus(c+25,"evenoddtranspose rData_22", false,-1, 31,0);
        tracep->declBus(c+26,"evenoddtranspose rData_23", false,-1, 31,0);
        tracep->declBus(c+27,"evenoddtranspose rData_24", false,-1, 31,0);
        tracep->declBus(c+28,"evenoddtranspose rData_25", false,-1, 31,0);
        tracep->declBus(c+29,"evenoddtranspose rData_26", false,-1, 31,0);
        tracep->declBus(c+30,"evenoddtranspose rData_27", false,-1, 31,0);
        tracep->declBus(c+31,"evenoddtranspose rData_28", false,-1, 31,0);
        tracep->declBus(c+32,"evenoddtranspose rData_29", false,-1, 31,0);
        tracep->declBus(c+33,"evenoddtranspose rData_30", false,-1, 31,0);
        tracep->declBus(c+34,"evenoddtranspose rData_31", false,-1, 31,0);
        tracep->declBus(c+35,"evenoddtranspose rData_32", false,-1, 31,0);
        tracep->declBus(c+36,"evenoddtranspose rData_33", false,-1, 31,0);
        tracep->declBus(c+37,"evenoddtranspose rData_34", false,-1, 31,0);
        tracep->declBus(c+38,"evenoddtranspose rData_35", false,-1, 31,0);
        tracep->declBus(c+39,"evenoddtranspose rData_36", false,-1, 31,0);
        tracep->declBus(c+40,"evenoddtranspose rData_37", false,-1, 31,0);
        tracep->declBus(c+41,"evenoddtranspose rData_38", false,-1, 31,0);
        tracep->declBus(c+42,"evenoddtranspose rData_39", false,-1, 31,0);
        tracep->declBus(c+43,"evenoddtranspose rData_40", false,-1, 31,0);
        tracep->declBus(c+44,"evenoddtranspose rData_41", false,-1, 31,0);
        tracep->declBus(c+45,"evenoddtranspose rData_42", false,-1, 31,0);
        tracep->declBus(c+46,"evenoddtranspose rData_43", false,-1, 31,0);
        tracep->declBus(c+47,"evenoddtranspose rData_44", false,-1, 31,0);
        tracep->declBus(c+48,"evenoddtranspose rData_45", false,-1, 31,0);
        tracep->declBus(c+49,"evenoddtranspose rData_46", false,-1, 31,0);
        tracep->declBus(c+50,"evenoddtranspose rData_47", false,-1, 31,0);
        tracep->declBus(c+51,"evenoddtranspose rData_48", false,-1, 31,0);
        tracep->declBus(c+52,"evenoddtranspose rData_49", false,-1, 31,0);
        tracep->declBus(c+53,"evenoddtranspose rData_50", false,-1, 31,0);
        tracep->declBus(c+54,"evenoddtranspose rData_51", false,-1, 31,0);
        tracep->declBus(c+55,"evenoddtranspose rData_52", false,-1, 31,0);
        tracep->declBus(c+56,"evenoddtranspose rData_53", false,-1, 31,0);
        tracep->declBus(c+57,"evenoddtranspose rData_54", false,-1, 31,0);
        tracep->declBus(c+58,"evenoddtranspose rData_55", false,-1, 31,0);
        tracep->declBus(c+59,"evenoddtranspose rData_56", false,-1, 31,0);
        tracep->declBus(c+60,"evenoddtranspose rData_57", false,-1, 31,0);
        tracep->declBus(c+61,"evenoddtranspose rData_58", false,-1, 31,0);
        tracep->declBus(c+62,"evenoddtranspose rData_59", false,-1, 31,0);
        tracep->declBus(c+63,"evenoddtranspose rData_60", false,-1, 31,0);
        tracep->declBus(c+64,"evenoddtranspose rData_61", false,-1, 31,0);
        tracep->declBus(c+65,"evenoddtranspose rData_62", false,-1, 31,0);
        tracep->declBus(c+66,"evenoddtranspose rData_63", false,-1, 31,0);
        tracep->declBus(c+67,"evenoddtranspose clock", false,-1, 0,0);
    }
}

void Vevenoddtranspose::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vevenoddtranspose::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vevenoddtranspose::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vevenoddtranspose__Syms* __restrict vlSymsp = static_cast<Vevenoddtranspose__Syms*>(userp);
    Vevenoddtranspose* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->CLK));
        tracep->fullBit(oldp+2,(vlTOPp->RST_N));
        tracep->fullIData(oldp+3,(vlSymsp->TOP__evenoddtranspose.rData_0),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__evenoddtranspose.rData_1),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__evenoddtranspose.rData_2),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__evenoddtranspose.rData_3),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__evenoddtranspose.rData_4),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__evenoddtranspose.rData_5),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__evenoddtranspose.rData_6),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__evenoddtranspose.rData_7),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__evenoddtranspose.rData_8),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__evenoddtranspose.rData_9),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__evenoddtranspose.rData_10),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__evenoddtranspose.rData_11),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__evenoddtranspose.rData_12),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__evenoddtranspose.rData_13),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__evenoddtranspose.rData_14),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__evenoddtranspose.rData_15),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__evenoddtranspose.rData_16),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__evenoddtranspose.rData_17),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__evenoddtranspose.rData_18),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__evenoddtranspose.rData_19),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__evenoddtranspose.rData_20),32);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__evenoddtranspose.rData_21),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__evenoddtranspose.rData_22),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__evenoddtranspose.rData_23),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__evenoddtranspose.rData_24),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__evenoddtranspose.rData_25),32);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__evenoddtranspose.rData_26),32);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__evenoddtranspose.rData_27),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__evenoddtranspose.rData_28),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__evenoddtranspose.rData_29),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__evenoddtranspose.rData_30),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__evenoddtranspose.rData_31),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__evenoddtranspose.rData_32),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__evenoddtranspose.rData_33),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__evenoddtranspose.rData_34),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__evenoddtranspose.rData_35),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__evenoddtranspose.rData_36),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__evenoddtranspose.rData_37),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__evenoddtranspose.rData_38),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__evenoddtranspose.rData_39),32);
        tracep->fullIData(oldp+43,(vlSymsp->TOP__evenoddtranspose.rData_40),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__evenoddtranspose.rData_41),32);
        tracep->fullIData(oldp+45,(vlSymsp->TOP__evenoddtranspose.rData_42),32);
        tracep->fullIData(oldp+46,(vlSymsp->TOP__evenoddtranspose.rData_43),32);
        tracep->fullIData(oldp+47,(vlSymsp->TOP__evenoddtranspose.rData_44),32);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__evenoddtranspose.rData_45),32);
        tracep->fullIData(oldp+49,(vlSymsp->TOP__evenoddtranspose.rData_46),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__evenoddtranspose.rData_47),32);
        tracep->fullIData(oldp+51,(vlSymsp->TOP__evenoddtranspose.rData_48),32);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__evenoddtranspose.rData_49),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__evenoddtranspose.rData_50),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__evenoddtranspose.rData_51),32);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__evenoddtranspose.rData_52),32);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__evenoddtranspose.rData_53),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__evenoddtranspose.rData_54),32);
        tracep->fullIData(oldp+58,(vlSymsp->TOP__evenoddtranspose.rData_55),32);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__evenoddtranspose.rData_56),32);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__evenoddtranspose.rData_57),32);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__evenoddtranspose.rData_58),32);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__evenoddtranspose.rData_59),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__evenoddtranspose.rData_60),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__evenoddtranspose.rData_61),32);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__evenoddtranspose.rData_62),32);
        tracep->fullIData(oldp+66,(vlSymsp->TOP__evenoddtranspose.rData_63),32);
        tracep->fullBit(oldp+67,(vlSymsp->TOP__evenoddtranspose.clock));
    }
}

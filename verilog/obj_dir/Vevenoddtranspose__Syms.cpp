// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vevenoddtranspose__Syms.h"
#include "Vevenoddtranspose.h"
#include "Vevenoddtranspose_evenoddtranspose.h"



// FUNCTIONS
Vevenoddtranspose__Syms::Vevenoddtranspose__Syms(Vevenoddtranspose* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__evenoddtranspose(Verilated::catName(topp->name(), "evenoddtranspose"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->evenoddtranspose = &TOP__evenoddtranspose;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__evenoddtranspose.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_evenoddtranspose.configure(this, name(), "evenoddtranspose", "evenoddtranspose", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"clock", &(TOP__evenoddtranspose.clock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_0", &(TOP__evenoddtranspose.rData_0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_1", &(TOP__evenoddtranspose.rData_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_10", &(TOP__evenoddtranspose.rData_10), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_11", &(TOP__evenoddtranspose.rData_11), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_12", &(TOP__evenoddtranspose.rData_12), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_13", &(TOP__evenoddtranspose.rData_13), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_14", &(TOP__evenoddtranspose.rData_14), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_15", &(TOP__evenoddtranspose.rData_15), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_16", &(TOP__evenoddtranspose.rData_16), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_17", &(TOP__evenoddtranspose.rData_17), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_18", &(TOP__evenoddtranspose.rData_18), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_19", &(TOP__evenoddtranspose.rData_19), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_2", &(TOP__evenoddtranspose.rData_2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_20", &(TOP__evenoddtranspose.rData_20), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_21", &(TOP__evenoddtranspose.rData_21), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_22", &(TOP__evenoddtranspose.rData_22), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_23", &(TOP__evenoddtranspose.rData_23), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_24", &(TOP__evenoddtranspose.rData_24), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_25", &(TOP__evenoddtranspose.rData_25), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_26", &(TOP__evenoddtranspose.rData_26), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_27", &(TOP__evenoddtranspose.rData_27), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_28", &(TOP__evenoddtranspose.rData_28), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_29", &(TOP__evenoddtranspose.rData_29), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_3", &(TOP__evenoddtranspose.rData_3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_30", &(TOP__evenoddtranspose.rData_30), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_31", &(TOP__evenoddtranspose.rData_31), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_32", &(TOP__evenoddtranspose.rData_32), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_33", &(TOP__evenoddtranspose.rData_33), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_34", &(TOP__evenoddtranspose.rData_34), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_35", &(TOP__evenoddtranspose.rData_35), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_36", &(TOP__evenoddtranspose.rData_36), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_37", &(TOP__evenoddtranspose.rData_37), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_38", &(TOP__evenoddtranspose.rData_38), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_39", &(TOP__evenoddtranspose.rData_39), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_4", &(TOP__evenoddtranspose.rData_4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_40", &(TOP__evenoddtranspose.rData_40), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_41", &(TOP__evenoddtranspose.rData_41), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_42", &(TOP__evenoddtranspose.rData_42), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_43", &(TOP__evenoddtranspose.rData_43), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_44", &(TOP__evenoddtranspose.rData_44), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_45", &(TOP__evenoddtranspose.rData_45), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_46", &(TOP__evenoddtranspose.rData_46), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_47", &(TOP__evenoddtranspose.rData_47), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_48", &(TOP__evenoddtranspose.rData_48), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_49", &(TOP__evenoddtranspose.rData_49), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_5", &(TOP__evenoddtranspose.rData_5), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_50", &(TOP__evenoddtranspose.rData_50), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_51", &(TOP__evenoddtranspose.rData_51), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_52", &(TOP__evenoddtranspose.rData_52), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_53", &(TOP__evenoddtranspose.rData_53), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_54", &(TOP__evenoddtranspose.rData_54), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_55", &(TOP__evenoddtranspose.rData_55), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_56", &(TOP__evenoddtranspose.rData_56), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_57", &(TOP__evenoddtranspose.rData_57), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_58", &(TOP__evenoddtranspose.rData_58), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_59", &(TOP__evenoddtranspose.rData_59), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_6", &(TOP__evenoddtranspose.rData_6), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_60", &(TOP__evenoddtranspose.rData_60), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_61", &(TOP__evenoddtranspose.rData_61), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_62", &(TOP__evenoddtranspose.rData_62), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_63", &(TOP__evenoddtranspose.rData_63), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_7", &(TOP__evenoddtranspose.rData_7), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_8", &(TOP__evenoddtranspose.rData_8), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_evenoddtranspose.varInsert(__Vfinal,"rData_9", &(TOP__evenoddtranspose.rData_9), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}

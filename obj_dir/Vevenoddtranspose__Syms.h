// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEVENODDTRANSPOSE__SYMS_H_
#define _VEVENODDTRANSPOSE__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vevenoddtranspose.h"
#include "Vevenoddtranspose_evenoddtranspose.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vevenoddtranspose__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vevenoddtranspose*             TOPp;
    Vevenoddtranspose_evenoddtranspose TOP__evenoddtranspose;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_evenoddtranspose;
    
    // CREATORS
    Vevenoddtranspose__Syms(Vevenoddtranspose* topp, const char* namep);
    ~Vevenoddtranspose__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

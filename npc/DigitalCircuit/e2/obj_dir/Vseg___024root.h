// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vseg.h for the primary calling header

#ifndef VERILATED_VSEG___024ROOT_H_
#define VERILATED_VSEG___024ROOT_H_  // guard

#include "verilated.h"


class Vseg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vseg___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(Switch,7,0);
    VL_OUT8(digital_tube,6,0);
    VL_OUT8(led,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ seg__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vseg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vseg___024root(Vseg__Syms* symsp, const char* v__name);
    ~Vseg___024root();
    VL_UNCOPYABLE(Vseg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

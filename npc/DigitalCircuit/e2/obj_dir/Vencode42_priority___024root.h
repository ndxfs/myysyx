// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencode42_priority.h for the primary calling header

#ifndef VERILATED_VENCODE42_PRIORITY___024ROOT_H_
#define VERILATED_VENCODE42_PRIORITY___024ROOT_H_  // guard

#include "verilated.h"


class Vencode42_priority__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencode42_priority___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN8(x,3,0);
    VL_OUT8(y,1,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ encode42_priority__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vencode42_priority__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencode42_priority___024root(Vencode42_priority__Syms* symsp, const char* v__name);
    ~Vencode42_priority___024root();
    VL_UNCOPYABLE(Vencode42_priority___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

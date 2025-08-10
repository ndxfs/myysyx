// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaddsub.h for the primary calling header

#ifndef VERILATED_VADDSUB___024ROOT_H_
#define VERILATED_VADDSUB___024ROOT_H_  // guard

#include "verilated.h"


class Vaddsub__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaddsub___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(Cin,0,0);
    VL_OUT8(Result,3,0);
    VL_OUT8(Carry,0,0);
    VL_OUT8(Overflow,0,0);
    CData/*3:0*/ addsub__DOT__t_add_Cin;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaddsub__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaddsub___024root(Vaddsub__Syms* symsp, const char* v__name);
    ~Vaddsub___024root();
    VL_UNCOPYABLE(Vaddsub___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

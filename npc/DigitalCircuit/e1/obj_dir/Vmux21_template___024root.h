// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux21_template.h for the primary calling header

#ifndef VERILATED_VMUX21_TEMPLATE___024ROOT_H_
#define VERILATED_VMUX21_TEMPLATE___024ROOT_H_  // guard

#include "verilated.h"

class Vmux21_template__Syms;

class Vmux21_template___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(s,0,0);
    VL_OUT8(y,0,0);
    CData/*0:0*/ mux21_template__DOT__i0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ mux21_template__DOT__i0__DOT__i0__DOT__hit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 2> mux21_template__DOT__i0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> mux21_template__DOT__i0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> mux21_template__DOT__i0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux21_template__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux21_template___024root(Vmux21_template__Syms* symsp, const char* v__name);
    ~Vmux21_template___024root();
    VL_UNCOPYABLE(Vmux21_template___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

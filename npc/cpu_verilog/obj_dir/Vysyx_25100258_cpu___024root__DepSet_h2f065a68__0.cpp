// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25100258_cpu.h for the primary calling header

#include "Vysyx_25100258_cpu__pch.h"
#include "Vysyx_25100258_cpu__Syms.h"
#include "Vysyx_25100258_cpu___024root.h"

extern "C" void ebreak_call();

VL_INLINE_OPT void Vysyx_25100258_cpu___024root____Vdpiimwrap_ysyx_25100258_cpu__DOT__u_EXU__DOT__ebreak_call_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root____Vdpiimwrap_ysyx_25100258_cpu__DOT__u_EXU__DOT__ebreak_call_TOP\n"); );
    // Body
    ebreak_call();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__ico(Vysyx_25100258_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25100258_cpu___024root___eval_triggers__ico(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_triggers__ico\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25100258_cpu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__act(Vysyx_25100258_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25100258_cpu___024root___eval_triggers__act(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_triggers__act\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, (vlSelfRef.ysyx_25100258_cpu__DOT__inst_out 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25100258_cpu__DOT__inst_out__0));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25100258_cpu__DOT__inst_out__0 
        = vlSelfRef.ysyx_25100258_cpu__DOT__inst_out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25100258_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddsub.h for the primary calling header

#include "Vaddsub__pch.h"
#include "Vaddsub__Syms.h"
#include "Vaddsub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__ico(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddsub___024root___eval_triggers__ico(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_triggers__ico\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddsub___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__act(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddsub___024root___eval_triggers__act(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_triggers__act\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddsub___024root___dump_triggers__act(vlSelf);
    }
#endif
}

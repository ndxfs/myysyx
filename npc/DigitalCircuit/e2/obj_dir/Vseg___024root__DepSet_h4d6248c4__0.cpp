// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vseg.h for the primary calling header

#include "Vseg__pch.h"
#include "Vseg__Syms.h"
#include "Vseg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vseg___024root___dump_triggers__ico(Vseg___024root* vlSelf);
#endif  // VL_DEBUG

void Vseg___024root___eval_triggers__ico(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_triggers__ico\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vseg___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vseg___024root___dump_triggers__act(Vseg___024root* vlSelf);
#endif  // VL_DEBUG

void Vseg___024root___eval_triggers__act(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_triggers__act\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vseg___024root___dump_triggers__act(vlSelf);
    }
#endif
}

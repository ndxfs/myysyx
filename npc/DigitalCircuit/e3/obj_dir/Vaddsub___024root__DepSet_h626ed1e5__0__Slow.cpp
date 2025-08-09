// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddsub.h for the primary calling header

#include "Vaddsub__pch.h"
#include "Vaddsub__Syms.h"
#include "Vaddsub___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__stl(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaddsub___024root___eval_triggers__stl(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_triggers__stl\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddsub___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

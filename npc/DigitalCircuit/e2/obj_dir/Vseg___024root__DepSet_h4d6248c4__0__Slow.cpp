// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vseg.h for the primary calling header

#include "Vseg__pch.h"
#include "Vseg__Syms.h"
#include "Vseg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vseg___024root___dump_triggers__stl(Vseg___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vseg___024root___eval_triggers__stl(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_triggers__stl\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vseg___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

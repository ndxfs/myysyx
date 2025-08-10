// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_keyboard.h for the primary calling header

#include "Vps2_keyboard__pch.h"
#include "Vps2_keyboard__Syms.h"
#include "Vps2_keyboard___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__stl(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vps2_keyboard___024root___eval_triggers__stl(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_triggers__stl\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vps2_keyboard___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

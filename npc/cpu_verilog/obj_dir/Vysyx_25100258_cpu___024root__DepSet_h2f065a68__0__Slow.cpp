// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25100258_cpu.h for the primary calling header

#include "Vysyx_25100258_cpu__pch.h"
#include "Vysyx_25100258_cpu__Syms.h"
#include "Vysyx_25100258_cpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__stl(Vysyx_25100258_cpu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_triggers__stl(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_triggers__stl\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25100258_cpu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

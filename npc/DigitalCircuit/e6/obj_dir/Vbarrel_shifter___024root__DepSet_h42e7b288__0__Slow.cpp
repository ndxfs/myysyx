// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbarrel_shifter.h for the primary calling header

#include "Vbarrel_shifter__pch.h"
#include "Vbarrel_shifter___024root.h"

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_static(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_static\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_initial(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_initial\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_final(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_final\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__stl(Vbarrel_shifter___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbarrel_shifter___024root___eval_phase__stl(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_settle(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_settle\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vbarrel_shifter___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/barrel_shifter.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbarrel_shifter___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__stl(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__stl\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vbarrel_shifter___024root___ico_sequent__TOP__0(Vbarrel_shifter___024root* vlSelf);
VL_ATTR_COLD void Vbarrel_shifter___024root____Vm_traceActivitySetAll(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_stl(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_stl\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbarrel_shifter___024root___ico_sequent__TOP__0(vlSelf);
        Vbarrel_shifter___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vbarrel_shifter___024root___eval_triggers__stl(Vbarrel_shifter___024root* vlSelf);

VL_ATTR_COLD bool Vbarrel_shifter___024root___eval_phase__stl(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___eval_phase__stl\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbarrel_shifter___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbarrel_shifter___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__ico(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__ico\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__act(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__act\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbarrel_shifter___024root___dump_triggers__nba(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___dump_triggers__nba\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbarrel_shifter___024root____Vm_traceActivitySetAll(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root____Vm_traceActivitySetAll\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vbarrel_shifter___024root___ctor_var_reset(Vbarrel_shifter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root___ctor_var_reset\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15192908731043726583ull);
    vlSelf->shamt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1053237437445446959ull);
    vlSelf->LR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5215092035378683467ull);
    vlSelf->AL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15911437864729183017ull);
    vlSelf->dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11474705599699299244ull);
    vlSelf->barrel_shifter__DOT__pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3324677990464985288ull);
    vlSelf->barrel_shifter__DOT__stage1_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3308262416066596985ull);
    vlSelf->barrel_shifter__DOT__stage2_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17501885278433310637ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

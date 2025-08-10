// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_keyboard.h for the primary calling header

#include "Vps2_keyboard__pch.h"
#include "Vps2_keyboard___024root.h"

VL_ATTR_COLD void Vps2_keyboard___024root___eval_static(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_static\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vps2_keyboard___024root___eval_initial(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_initial\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vps2_keyboard___024root___eval_final(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_final\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__stl(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vps2_keyboard___024root___eval_phase__stl(Vps2_keyboard___024root* vlSelf);

VL_ATTR_COLD void Vps2_keyboard___024root___eval_settle(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_settle\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vps2_keyboard___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ps2_keyboard.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vps2_keyboard___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__stl(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___dump_triggers__stl\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vps2_keyboard___024root___stl_sequent__TOP__0(Vps2_keyboard___024root* vlSelf);

VL_ATTR_COLD void Vps2_keyboard___024root___eval_stl(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_stl\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vps2_keyboard___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vps2_keyboard___024root___stl_sequent__TOP__0(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___stl_sequent__TOP__0\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data = vlSelfRef.ps2_keyboard__DOT__fifo
        [vlSelfRef.ps2_keyboard__DOT__r_ptr];
}

VL_ATTR_COLD void Vps2_keyboard___024root___eval_triggers__stl(Vps2_keyboard___024root* vlSelf);

VL_ATTR_COLD bool Vps2_keyboard___024root___eval_phase__stl(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_phase__stl\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vps2_keyboard___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vps2_keyboard___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__act(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___dump_triggers__act\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__nba(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___dump_triggers__nba\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vps2_keyboard___024root___ctor_var_reset(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___ctor_var_reset\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->clrn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17263249432293168359ull);
    vlSelf->ps2_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416932302485436191ull);
    vlSelf->ps2_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12987539744063830537ull);
    vlSelf->data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10363016170300574568ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->nextdata_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13405041210472490211ull);
    vlSelf->overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16341344440165733293ull);
    vlSelf->ps2_keyboard__DOT__buffer = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6308690355392688278ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ps2_keyboard__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15985960394594224896ull);
    }
    vlSelf->ps2_keyboard__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 927236275111577967ull);
    vlSelf->ps2_keyboard__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4408994196436339671ull);
    vlSelf->ps2_keyboard__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13580103385036979820ull);
    vlSelf->ps2_keyboard__DOT__ps2_clk_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3788177063792731042ull);
    vlSelf->ps2_keyboard__DOT____Vlvbound_h8d560b66__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4271535816619142259ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

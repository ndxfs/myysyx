// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddsub.h for the primary calling header

#include "Vaddsub__pch.h"
#include "Vaddsub___024root.h"

VL_ATTR_COLD void Vaddsub___024root___eval_static(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_static\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vaddsub___024root___eval_initial(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_initial\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vaddsub___024root___eval_final(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_final\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__stl(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaddsub___024root___eval_phase__stl(Vaddsub___024root* vlSelf);

VL_ATTR_COLD void Vaddsub___024root___eval_settle(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_settle\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vaddsub___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/addsub.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vaddsub___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__stl(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___dump_triggers__stl\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vaddsub___024root___ico_sequent__TOP__0(Vaddsub___024root* vlSelf);

VL_ATTR_COLD void Vaddsub___024root___eval_stl(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_stl\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vaddsub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vaddsub___024root___eval_triggers__stl(Vaddsub___024root* vlSelf);

VL_ATTR_COLD bool Vaddsub___024root___eval_phase__stl(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_phase__stl\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaddsub___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vaddsub___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__ico(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___dump_triggers__ico\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__act(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___dump_triggers__act\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__nba(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___dump_triggers__nba\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaddsub___024root___ctor_var_reset(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___ctor_var_reset\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->A = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 149303876845869574ull);
    vlSelf->Cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6656675172502615453ull);
    vlSelf->Result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9792351497816924968ull);
    vlSelf->Carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2849558243637282727ull);
    vlSelf->Overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5713053768810136753ull);
    vlSelf->addsub__DOT__t_add_Cin = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16165711981178447538ull);
}

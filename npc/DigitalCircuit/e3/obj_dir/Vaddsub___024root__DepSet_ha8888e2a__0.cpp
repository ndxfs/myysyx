// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddsub.h for the primary calling header

#include "Vaddsub__pch.h"
#include "Vaddsub___024root.h"

void Vaddsub___024root___ico_sequent__TOP__0(Vaddsub___024root* vlSelf);

void Vaddsub___024root___eval_ico(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_ico\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vaddsub___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vaddsub___024root___ico_sequent__TOP__0(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___ico_sequent__TOP__0\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.addsub__DOT__t_add_Cin = (0xfU & (((- (IData)((IData)(vlSelfRef.Cin))) 
                                                 ^ (IData)(vlSelfRef.B)) 
                                                + (IData)(vlSelfRef.Cin)));
    vlSelfRef.Carry = (1U & (((IData)(vlSelfRef.A) 
                              + (IData)(vlSelfRef.addsub__DOT__t_add_Cin)) 
                             >> 4U));
    vlSelfRef.Result = (0xfU & ((IData)(vlSelfRef.A) 
                                + (IData)(vlSelfRef.addsub__DOT__t_add_Cin)));
    vlSelfRef.Overflow = (((1U & ((IData)(vlSelfRef.A) 
                                  >> 3U)) == (1U & 
                                              ((IData)(vlSelfRef.addsub__DOT__t_add_Cin) 
                                               >> 3U))) 
                          & ((1U & ((IData)(vlSelfRef.Result) 
                                    >> 3U)) != (1U 
                                                & ((IData)(vlSelfRef.A) 
                                                   >> 3U))));
}

void Vaddsub___024root___eval_triggers__ico(Vaddsub___024root* vlSelf);

bool Vaddsub___024root___eval_phase__ico(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_phase__ico\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vaddsub___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vaddsub___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vaddsub___024root___eval_act(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_act\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vaddsub___024root___eval_nba(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_nba\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vaddsub___024root___eval_triggers__act(Vaddsub___024root* vlSelf);

bool Vaddsub___024root___eval_phase__act(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_phase__act\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaddsub___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaddsub___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vaddsub___024root___eval_phase__nba(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_phase__nba\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaddsub___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__ico(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__nba(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddsub___024root___dump_triggers__act(Vaddsub___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddsub___024root___eval(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vaddsub___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/addsub.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vaddsub___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaddsub___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/addsub.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaddsub___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/addsub.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaddsub___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaddsub___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaddsub___024root___eval_debug_assertions(Vaddsub___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root___eval_debug_assertions\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.A & 0xf0U)))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY(((vlSelfRef.B & 0xf0U)))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY(((vlSelfRef.Cin & 0xfeU)))) {
        Verilated::overWidthError("Cin");}
}
#endif  // VL_DEBUG

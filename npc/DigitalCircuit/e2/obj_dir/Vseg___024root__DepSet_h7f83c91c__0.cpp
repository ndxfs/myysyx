// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vseg.h for the primary calling header

#include "Vseg__pch.h"
#include "Vseg___024root.h"

void Vseg___024root___ico_sequent__TOP__0(Vseg___024root* vlSelf);

void Vseg___024root___eval_ico(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_ico\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vseg___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*6:0*/, 32> Vseg__ConstPool__TABLE_h87ed51ae_0;

VL_INLINE_OPT void Vseg___024root___ico_sequent__TOP__0(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___ico_sequent__TOP__0\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.en) {
        vlSelfRef.seg__DOT__unnamedblk1__DOT__i = 0xffffffffU;
        if ((0x80U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (7U | (IData)(vlSelfRef.led));
        }
        if ((0x40U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (6U | (8U & (IData)(vlSelfRef.led)));
        }
        if ((0x20U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (5U | (8U & (IData)(vlSelfRef.led)));
        }
        if ((0x10U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (4U | (8U & (IData)(vlSelfRef.led)));
        }
        if ((8U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (3U | (8U & (IData)(vlSelfRef.led)));
        }
        if ((4U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (2U | (8U & (IData)(vlSelfRef.led)));
        }
        if ((2U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (1U | (8U & (IData)(vlSelfRef.led)));
        }
        if ((1U & (IData)(vlSelfRef.Switch))) {
            vlSelfRef.led = (8U & (IData)(vlSelfRef.led));
        }
        vlSelfRef.led = ((7U & (IData)(vlSelfRef.led)) 
                         | ((IData)((0U != (7U & (IData)(vlSelfRef.led)))) 
                            << 3U));
    } else {
        vlSelfRef.led = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.led) << 1U) 
                    | (IData)(vlSelfRef.en));
    vlSelfRef.digital_tube = Vseg__ConstPool__TABLE_h87ed51ae_0
        [__Vtableidx1];
}

void Vseg___024root___eval_triggers__ico(Vseg___024root* vlSelf);

bool Vseg___024root___eval_phase__ico(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_phase__ico\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vseg___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vseg___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vseg___024root___eval_act(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_act\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vseg___024root___eval_nba(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_nba\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vseg___024root___eval_triggers__act(Vseg___024root* vlSelf);

bool Vseg___024root___eval_phase__act(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_phase__act\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vseg___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vseg___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vseg___024root___eval_phase__nba(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_phase__nba\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vseg___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vseg___024root___dump_triggers__ico(Vseg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vseg___024root___dump_triggers__nba(Vseg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vseg___024root___dump_triggers__act(Vseg___024root* vlSelf);
#endif  // VL_DEBUG

void Vseg___024root___eval(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vseg___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/seg.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vseg___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vseg___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/seg.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vseg___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/seg.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vseg___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vseg___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vseg___024root___eval_debug_assertions(Vseg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root___eval_debug_assertions\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG

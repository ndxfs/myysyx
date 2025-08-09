// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_keyboard.h for the primary calling header

#include "Vps2_keyboard__pch.h"
#include "Vps2_keyboard___024root.h"

void Vps2_keyboard___024root___eval_act(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_act\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vps2_keyboard___024root___nba_sequent__TOP__0(Vps2_keyboard___024root* vlSelf);

void Vps2_keyboard___024root___eval_nba(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_nba\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vps2_keyboard___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vps2_keyboard___024root___nba_sequent__TOP__0(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___nba_sequent__TOP__0\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__ps2_keyboard__DOT__ps2_clk_sync;
    __Vdly__ps2_keyboard__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__ps2_keyboard__DOT__count;
    __Vdly__ps2_keyboard__DOT__count = 0;
    CData/*2:0*/ __Vdly__ps2_keyboard__DOT__w_ptr;
    __Vdly__ps2_keyboard__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__ps2_keyboard__DOT__r_ptr;
    __Vdly__ps2_keyboard__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__overflow;
    __Vdly__overflow = 0;
    CData/*0:0*/ __Vdly__ready;
    __Vdly__ready = 0;
    CData/*7:0*/ __VdlyVal__ps2_keyboard__DOT__fifo__v0;
    __VdlyVal__ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__ps2_keyboard__DOT__fifo__v0;
    __VdlyDim0__ps2_keyboard__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__ps2_keyboard__DOT__fifo__v0;
    __VdlySet__ps2_keyboard__DOT__fifo__v0 = 0;
    // Body
    __Vdly__ps2_keyboard__DOT__ps2_clk_sync = vlSelfRef.ps2_keyboard__DOT__ps2_clk_sync;
    __Vdly__ps2_keyboard__DOT__count = vlSelfRef.ps2_keyboard__DOT__count;
    __Vdly__ps2_keyboard__DOT__w_ptr = vlSelfRef.ps2_keyboard__DOT__w_ptr;
    __Vdly__overflow = vlSelfRef.overflow;
    __Vdly__ready = vlSelfRef.ready;
    __Vdly__ps2_keyboard__DOT__r_ptr = vlSelfRef.ps2_keyboard__DOT__r_ptr;
    __VdlySet__ps2_keyboard__DOT__fifo__v0 = 0U;
    __Vdly__ps2_keyboard__DOT__ps2_clk_sync = ((6U 
                                                & ((IData)(vlSelfRef.ps2_keyboard__DOT__ps2_clk_sync) 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.ps2_clk));
    if (vlSelfRef.clrn) {
        __Vdly__ps2_keyboard__DOT__count = 0U;
        __Vdly__ps2_keyboard__DOT__w_ptr = 0U;
        __Vdly__ps2_keyboard__DOT__r_ptr = 0U;
        __Vdly__overflow = 0U;
        __Vdly__ready = 0U;
    } else {
        if (vlSelfRef.ready) {
            if ((1U & (~ (IData)(vlSelfRef.nextdata_n)))) {
                __Vdly__ps2_keyboard__DOT__r_ptr = 
                    (7U & ((IData)(1U) + (IData)(vlSelfRef.ps2_keyboard__DOT__r_ptr)));
                if (((IData)(vlSelfRef.ps2_keyboard__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelfRef.ps2_keyboard__DOT__r_ptr))))) {
                    __Vdly__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelfRef.ps2_keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelfRef.ps2_keyboard__DOT__count))) {
                if ((((~ (IData)(vlSelfRef.ps2_keyboard__DOT__buffer)) 
                      & (IData)(vlSelfRef.ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelfRef.ps2_keyboard__DOT__buffer) 
                                               >> 1U))))) {
                    __VdlyVal__ps2_keyboard__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelfRef.ps2_keyboard__DOT__buffer) 
                                    >> 1U));
                    __VdlyDim0__ps2_keyboard__DOT__fifo__v0 
                        = vlSelfRef.ps2_keyboard__DOT__w_ptr;
                    __VdlySet__ps2_keyboard__DOT__fifo__v0 = 1U;
                    __Vdly__ready = 1U;
                    __Vdly__ps2_keyboard__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.ps2_keyboard__DOT__w_ptr)));
                    __Vdly__overflow = ((IData)(vlSelfRef.overflow) 
                                        | ((IData)(vlSelfRef.ps2_keyboard__DOT__r_ptr) 
                                           == (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.ps2_keyboard__DOT__w_ptr)))));
                }
                __Vdly__ps2_keyboard__DOT__count = 0U;
            } else if ((1U & ((0U != (IData)(vlSelfRef.ps2_keyboard__DOT__count)) 
                              | (~ (IData)(vlSelfRef.ps2_data))))) {
                vlSelfRef.ps2_keyboard__DOT____Vlvbound_h8d560b66__0 
                    = vlSelfRef.ps2_data;
                if ((9U >= (IData)(vlSelfRef.ps2_keyboard__DOT__count))) {
                    vlSelfRef.ps2_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.ps2_keyboard__DOT__count))) 
                            & (IData)(vlSelfRef.ps2_keyboard__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelfRef.ps2_keyboard__DOT____Vlvbound_h8d560b66__0) 
                                        << (IData)(vlSelfRef.ps2_keyboard__DOT__count))));
                }
                __Vdly__ps2_keyboard__DOT__count = 
                    (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ps2_keyboard__DOT__count)));
            } else {
                __Vdly__ps2_keyboard__DOT__count = vlSelfRef.ps2_keyboard__DOT__count;
            }
        }
    }
    vlSelfRef.ps2_keyboard__DOT__count = __Vdly__ps2_keyboard__DOT__count;
    vlSelfRef.ps2_keyboard__DOT__w_ptr = __Vdly__ps2_keyboard__DOT__w_ptr;
    vlSelfRef.overflow = __Vdly__overflow;
    vlSelfRef.ready = __Vdly__ready;
    vlSelfRef.ps2_keyboard__DOT__ps2_clk_sync = __Vdly__ps2_keyboard__DOT__ps2_clk_sync;
    vlSelfRef.ps2_keyboard__DOT__r_ptr = __Vdly__ps2_keyboard__DOT__r_ptr;
    if (__VdlySet__ps2_keyboard__DOT__fifo__v0) {
        vlSelfRef.ps2_keyboard__DOT__fifo[__VdlyDim0__ps2_keyboard__DOT__fifo__v0] 
            = __VdlyVal__ps2_keyboard__DOT__fifo__v0;
    }
    vlSelfRef.data = vlSelfRef.ps2_keyboard__DOT__fifo
        [vlSelfRef.ps2_keyboard__DOT__r_ptr];
}

void Vps2_keyboard___024root___eval_triggers__act(Vps2_keyboard___024root* vlSelf);

bool Vps2_keyboard___024root___eval_phase__act(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_phase__act\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vps2_keyboard___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vps2_keyboard___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vps2_keyboard___024root___eval_phase__nba(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_phase__nba\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vps2_keyboard___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__nba(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard___024root___dump_triggers__act(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG

void Vps2_keyboard___024root___eval(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vps2_keyboard___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ps2_keyboard.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vps2_keyboard___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ps2_keyboard.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vps2_keyboard___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vps2_keyboard___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vps2_keyboard___024root___eval_debug_assertions(Vps2_keyboard___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard___024root___eval_debug_assertions\n"); );
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.clrn & 0xfeU)))) {
        Verilated::overWidthError("clrn");}
    if (VL_UNLIKELY(((vlSelfRef.ps2_clk & 0xfeU)))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY(((vlSelfRef.ps2_data & 0xfeU)))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY(((vlSelfRef.nextdata_n & 0xfeU)))) {
        Verilated::overWidthError("nextdata_n");}
}
#endif  // VL_DEBUG

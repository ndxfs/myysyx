// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25100258_cpu.h for the primary calling header

#include "Vysyx_25100258_cpu__pch.h"
#include "Vysyx_25100258_cpu___024root.h"

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_static(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_static\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25100258_cpu__DOT__inst_out__0 
        = vlSelfRef.ysyx_25100258_cpu__DOT__inst_out;
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_initial__TOP(Vysyx_25100258_cpu___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25100258_cpu___024root____Vm_traceActivitySetAll(Vysyx_25100258_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_initial(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_initial\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25100258_cpu___024root___eval_initial__TOP(vlSelf);
    Vysyx_25100258_cpu___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_initial__TOP(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_initial__TOP\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[0U] = 6U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[1U] = 5U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[6U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[0U] = 0x39eU;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[1U] = 0x99U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[0U] = 6U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[0U] = 0x73U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list[0U] = 0x13U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[0U] = 0xcU;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[1U] = 0xbU;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[2U] = 9U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[3U] = 6U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[4U] = 4U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[5U] = 3U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[6U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[0U] = 6U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[1U] = 5U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[6U] = 0U;
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_final(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_final\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__stl(Vysyx_25100258_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25100258_cpu___024root___eval_phase__stl(Vysyx_25100258_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_settle(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_settle\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vysyx_25100258_cpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25100258_cpu.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25100258_cpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__stl(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___dump_triggers__stl\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___stl_sequent__TOP__0(Vysyx_25100258_cpu___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_stl(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_stl\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25100258_cpu___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25100258_cpu___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___stl_sequent__TOP__0(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*69:0*/ __VdfgRegularize_h2dd05df0_0_1;
    VL_ZERO_W(70, __VdfgRegularize_h2dd05df0_0_1);
    VlWide<4>/*104:0*/ __VdfgRegularize_h2dd05df0_0_2;
    VL_ZERO_W(105, __VdfgRegularize_h2dd05df0_0_2);
    VlWide<5>/*139:0*/ __VdfgRegularize_h2dd05df0_0_3;
    VL_ZERO_W(140, __VdfgRegularize_h2dd05df0_0_3);
    SData/*15:0*/ __VdfgRegularize_h2dd05df0_0_6;
    __VdfgRegularize_h2dd05df0_0_6 = 0;
    SData/*15:0*/ __VdfgRegularize_h2dd05df0_0_11;
    __VdfgRegularize_h2dd05df0_0_11 = 0;
    QData/*39:0*/ __VdfgRegularize_h2dd05df0_0_14;
    __VdfgRegularize_h2dd05df0_0_14 = 0;
    QData/*59:0*/ __VdfgRegularize_h2dd05df0_0_15;
    __VdfgRegularize_h2dd05df0_0_15 = 0;
    VlWide<3>/*79:0*/ __VdfgRegularize_h2dd05df0_0_16;
    VL_ZERO_W(80, __VdfgRegularize_h2dd05df0_0_16);
    VlWide<4>/*99:0*/ __VdfgRegularize_h2dd05df0_0_17;
    VL_ZERO_W(100, __VdfgRegularize_h2dd05df0_0_17);
    // Body
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IFU__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.pc);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[0U] 
        = (0x60U | (0x1fU & (vlSelfRef.inst_in >> 0x14U)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[0U] 
        = (0x60U | (0x1fU & (vlSelfRef.inst_in >> 0xfU)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[0U] 
        = (0xa0U | (0x1fU & (vlSelfRef.inst_in >> 7U)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[0U] 
        = (0xc0000U | ((0x100073U == vlSelfRef.inst_in)
                        ? 0x73U : 0U));
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_9 = (0x4060U 
                                                | ((0x1f00U 
                                                    & (vlSelfRef.inst_in 
                                                       >> 0xcU)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.inst_in 
                                                         >> 0x14U))));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0x14U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[1U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0x14U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[2U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0x14U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & (vlSelfRef.inst_in >> 7U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[1U] 
        = (0x1fU & (vlSelfRef.inst_in >> 7U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[2U] 
        = (0x1fU & (vlSelfRef.inst_in >> 7U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[3U] 
        = (0x1fU & (vlSelfRef.inst_in >> 7U));
    __VdfgRegularize_h2dd05df0_0_6 = (0x4060U | ((0x1f00U 
                                                  & (vlSelfRef.inst_in 
                                                     >> 7U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.inst_in 
                                                       >> 0xfU))));
    __VdfgRegularize_h2dd05df0_0_11 = (0x80a0U | ((0x1f00U 
                                                   & (vlSelfRef.inst_in 
                                                      << 1U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.inst_in 
                                                        >> 7U))));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[0U] 
        = ((0x100073U == vlSelfRef.inst_in) ? 0x73U
            : 0U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[1U] 
        = (0x7fU & vlSelfRef.inst_in);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[2U] 
        = (0x7fU & vlSelfRef.inst_in);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0xfU));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[1U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0xfU));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[2U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0xfU));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[3U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0xfU));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[1U] 
        = (0xfffff000U & vlSelfRef.inst_in);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[5U] 
        = (0x1fU & (vlSelfRef.inst_in >> 0x14U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I 
        = (((- (IData)((vlSelfRef.inst_in >> 0x1fU))) 
            << 0xcU) | (vlSelfRef.inst_in >> 0x14U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S 
        = (((- (IData)((vlSelfRef.inst_in >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelfRef.inst_in 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelfRef.inst_in 
                                                    >> 7U))));
    __VdfgRegularize_h2dd05df0_0_14 = (((QData)((IData)(
                                                        (0xa0000U 
                                                         | (0x7fU 
                                                            & vlSelfRef.inst_in)))) 
                                        << 0x14U) | (QData)((IData)(
                                                                    (0xc0000U 
                                                                     | ((0x100073U 
                                                                         == vlSelfRef.inst_in)
                                                                         ? 0x73U
                                                                         : 0U)))));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B 
        = (((- (IData)((vlSelfRef.inst_in >> 0x1fU))) 
            << 0xdU) | (((0x1000U & (vlSelfRef.inst_in 
                                     >> 0x13U)) | (0x800U 
                                                   & (vlSelfRef.inst_in 
                                                      << 4U))) 
                        | ((0x7e0U & (vlSelfRef.inst_in 
                                      >> 0x14U)) | 
                           (0x1eU & (vlSelfRef.inst_in 
                                     >> 7U)))));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J 
        = ((((- (IData)((vlSelfRef.inst_in >> 0x1fU))) 
             << 0x15U) | (0x100000U & (vlSelfRef.inst_in 
                                       >> 0xbU))) | 
           (((0xff000U & vlSelfRef.inst_in) | (0x800U 
                                               & (vlSelfRef.inst_in 
                                                  >> 9U))) 
            | (0x7feU & (vlSelfRef.inst_in >> 0x14U))));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelfRef.inst_in) 
                       == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelfRef.inst_in) == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelfRef.inst_in) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelfRef.inst_in) == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__inst_type = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out)
                                                    : 7U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6 
        = ((0x380U & (vlSelfRef.inst_in >> 5U)) | (0x7fU 
                                                   & vlSelfRef.inst_in));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[1U] 
        = (0xffU & ((IData)(vlSelfRef.__VdfgRegularize_h2dd05df0_0_9) 
                    >> 8U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[2U] 
        = (0xffU & ((0x1fU & (vlSelfRef.inst_in >> 0x14U)) 
                    | ((IData)(vlSelfRef.__VdfgRegularize_h2dd05df0_0_9) 
                       >> 0x10U)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[1U] 
        = (0xffU & ((IData)(__VdfgRegularize_h2dd05df0_0_6) 
                    >> 8U));
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_7 = (0x200000U 
                                                | ((0x1f0000U 
                                                    & (vlSelfRef.inst_in 
                                                       << 1U)) 
                                                   | (IData)(__VdfgRegularize_h2dd05df0_0_6)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[1U] 
        = (0xffU & ((IData)(__VdfgRegularize_h2dd05df0_0_11) 
                    >> 8U));
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_12 = (0x200000U 
                                                 | ((0x1f0000U 
                                                     & (vlSelfRef.inst_in 
                                                        << 9U)) 
                                                    | (IData)(__VdfgRegularize_h2dd05df0_0_11)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[1U] 
        = (0xfffffU & (IData)((__VdfgRegularize_h2dd05df0_0_14 
                               >> 0x14U)));
    __VdfgRegularize_h2dd05df0_0_15 = (0x800000000000000ULL 
                                       | (((QData)((IData)(
                                                           (0x7fU 
                                                            & vlSelfRef.inst_in))) 
                                           << 0x28U) 
                                          | __VdfgRegularize_h2dd05df0_0_14));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J;
    __VdfgRegularize_h2dd05df0_0_1[0U] = (IData)((0x500000000ULL 
                                                  | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J))));
    __VdfgRegularize_h2dd05df0_0_1[1U] = ((0xffff8000U 
                                           & (vlSelfRef.inst_in 
                                              << 3U)) 
                                          | (IData)(
                                                    ((0x500000000ULL 
                                                      | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J))) 
                                                     >> 0x20U)));
    __VdfgRegularize_h2dd05df0_0_1[2U] = (0x20U | (0x7fffU 
                                                   & (vlSelfRef.inst_in 
                                                      >> 0x1dU)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                       == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
           == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__src2_addr = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out)
                                                    : 0U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                       == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
           == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__rd = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit)
                                             ? (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out)
                                             : 0U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
            == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
           == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
               == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
               == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
               == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
               == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
               == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
               == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
               [6U]) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__reg_wen = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit) 
                                                 && (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                       == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
           == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out)
                                                    : 0U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R 
        = ((0x1fc00U & (vlSelfRef.inst_in >> 0xfU)) 
           | (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[2U] 
        = (0xffU & (vlSelfRef.__VdfgRegularize_h2dd05df0_0_7 
                    >> 0x10U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[3U] 
        = (0xffU & ((0x1fU & (vlSelfRef.inst_in >> 0xfU)) 
                    | (vlSelfRef.__VdfgRegularize_h2dd05df0_0_7 
                       >> 0x18U)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[2U] 
        = (0xffU & (vlSelfRef.__VdfgRegularize_h2dd05df0_0_12 
                    >> 0x10U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[3U] 
        = (0xffU & ((0x1fU & (vlSelfRef.inst_in >> 7U)) 
                    | (vlSelfRef.__VdfgRegularize_h2dd05df0_0_12 
                       >> 0x18U)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[2U] 
        = (0xfffffU & (IData)((__VdfgRegularize_h2dd05df0_0_15 
                               >> 0x28U)));
    __VdfgRegularize_h2dd05df0_0_16[0U] = (IData)(__VdfgRegularize_h2dd05df0_0_15);
    __VdfgRegularize_h2dd05df0_0_16[1U] = (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6) 
                                            << 0x1cU) 
                                           | (IData)(
                                                     (__VdfgRegularize_h2dd05df0_0_15 
                                                      >> 0x20U)));
    __VdfgRegularize_h2dd05df0_0_16[2U] = (0x6000U 
                                           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6) 
                                              >> 4U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                       == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
           == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__imm = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit)
                                              ? vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out
                                              : 0U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffffffffULL & (((QData)((IData)(__VdfgRegularize_h2dd05df0_0_1[2U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           __VdfgRegularize_h2dd05df0_0_1[1U])) 
                                           >> 3U)));
    __VdfgRegularize_h2dd05df0_0_2[0U] = __VdfgRegularize_h2dd05df0_0_1[0U];
    __VdfgRegularize_h2dd05df0_0_2[1U] = __VdfgRegularize_h2dd05df0_0_1[1U];
    __VdfgRegularize_h2dd05df0_0_2[2U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B 
                                           << 6U) | 
                                          __VdfgRegularize_h2dd05df0_0_1[2U]);
    __VdfgRegularize_h2dd05df0_0_2[3U] = (0xc0U | (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B 
                                                   >> 0x1aU));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[3U] 
        = (0xfffffU & ((__VdfgRegularize_h2dd05df0_0_16[2U] 
                        << 4U) | (__VdfgRegularize_h2dd05df0_0_16[1U] 
                                  >> 0x1cU)));
    __VdfgRegularize_h2dd05df0_0_17[0U] = __VdfgRegularize_h2dd05df0_0_16[0U];
    __VdfgRegularize_h2dd05df0_0_17[1U] = __VdfgRegularize_h2dd05df0_0_16[1U];
    __VdfgRegularize_h2dd05df0_0_17[2U] = (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6) 
                                            << 0x10U) 
                                           | __VdfgRegularize_h2dd05df0_0_16[2U]);
    __VdfgRegularize_h2dd05df0_0_17[3U] = (4U | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6) 
                                                 >> 0x10U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__imm + 
           ((0U == (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr))
             ? 0U : vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf
            [vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffffffffULL & (((QData)((IData)(__VdfgRegularize_h2dd05df0_0_2[3U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           __VdfgRegularize_h2dd05df0_0_2[2U])) 
                                           >> 6U)));
    __VdfgRegularize_h2dd05df0_0_3[0U] = __VdfgRegularize_h2dd05df0_0_2[0U];
    __VdfgRegularize_h2dd05df0_0_3[1U] = __VdfgRegularize_h2dd05df0_0_2[1U];
    __VdfgRegularize_h2dd05df0_0_3[2U] = __VdfgRegularize_h2dd05df0_0_2[2U];
    __VdfgRegularize_h2dd05df0_0_3[3U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S 
                                           << 9U) | 
                                          __VdfgRegularize_h2dd05df0_0_2[3U]);
    __VdfgRegularize_h2dd05df0_0_3[4U] = (0x400U | 
                                          (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S 
                                           >> 0x17U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                       == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
           == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
                          == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type) 
              == vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__inst_out = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit)
                                                   ? vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out
                                                   : 0U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[4U] 
        = (0xfffffU & ((__VdfgRegularize_h2dd05df0_0_17[3U] 
                        << 0x10U) | (__VdfgRegularize_h2dd05df0_0_17[2U] 
                                     >> 0x10U)));
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[0U] = 
        __VdfgRegularize_h2dd05df0_0_17[0U];
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[1U] = 
        __VdfgRegularize_h2dd05df0_0_17[1U];
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[2U] = 
        __VdfgRegularize_h2dd05df0_0_17[2U];
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[3U] = 
        (0x200000U | (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6) 
                       << 4U) | __VdfgRegularize_h2dd05df0_0_17[3U]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__pair_list[0U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi;
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffffffffULL & (((QData)((IData)(__VdfgRegularize_h2dd05df0_0_3[4U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           __VdfgRegularize_h2dd05df0_0_3[3U])) 
                                           >> 9U)));
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[0U] = 
        __VdfgRegularize_h2dd05df0_0_3[0U];
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[1U] = 
        __VdfgRegularize_h2dd05df0_0_3[1U];
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[2U] = 
        __VdfgRegularize_h2dd05df0_0_3[2U];
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[3U] = 
        __VdfgRegularize_h2dd05df0_0_3[3U];
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[4U] = 
        ((vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I 
          << 0xcU) | __VdfgRegularize_h2dd05df0_0_3[4U]);
    vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[5U] = 
        (0x1000U | (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I 
                    >> 0x14U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[5U] 
        = (0xfffffU & (vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[3U] 
                       >> 4U));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[6U] 
        = (0xfffffU & ((0xffffff00U & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R) 
                       | ((0xffU & vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R) 
                          | (vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[3U] 
                             >> 0x18U))));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelfRef.ysyx_25100258_cpu__DOT__inst_out 
                       == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__hit 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__inst_out 
           == vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_25100258_cpu__DOT__exu_data = ((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__hit)
                                                   ? vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__lut_out
                                                   : 0U);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[5U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[4U])) 
                                           >> 0xcU)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffffffffULL & ((QData)((IData)(((0xf8000U 
                                               & (vlSelfRef.inst_in 
                                                  >> 5U)) 
                                              | vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[5U]))) 
                             >> 0xfU));
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___eval_triggers__stl(Vysyx_25100258_cpu___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25100258_cpu___024root___eval_phase__stl(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_phase__stl\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25100258_cpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25100258_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__ico(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___dump_triggers__ico\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__act(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___dump_triggers__act\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( ysyx_25100258_cpu.inst_out)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__nba(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___dump_triggers__nba\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( ysyx_25100258_cpu.inst_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25100258_cpu___024root____Vm_traceActivitySetAll(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root___ctor_var_reset(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___ctor_var_reset\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->inst_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15544804360470151695ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->ysyx_25100258_cpu__DOT__src1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 107633199299863856ull);
    vlSelf->ysyx_25100258_cpu__DOT__src2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3387726942535091152ull);
    vlSelf->ysyx_25100258_cpu__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10201373911940425935ull);
    vlSelf->ysyx_25100258_cpu__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15929841985613731610ull);
    vlSelf->ysyx_25100258_cpu__DOT__inst_out = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6533362957086897934ull);
    vlSelf->ysyx_25100258_cpu__DOT__inst_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3967095483947285727ull);
    vlSelf->ysyx_25100258_cpu__DOT__reg_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15105085256923491871ull);
    vlSelf->ysyx_25100258_cpu__DOT__exu_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16853569121453945116ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IFU__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17872428737147042821ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5216727528154545607ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9856420919333859343ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10756499084437330870ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15070441168074530516ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6239053572444475178ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3397586816067484222ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15449360650617350605ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2159115846308564372ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4418365843861319060ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16902584718123869075ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13877628382862142000ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 9452410519570144216ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3421650204904400443ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1263862788572049194ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3579456357355825914ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5483305791437616677ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5605083631581525723ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17066140131625446082ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7599309116297449917ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9801923817590057193ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10048163970773039702ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14137693563745273929ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8582473726614180125ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15251619025431328209ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11634334991158186265ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2006980324277914019ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11880400359559301626ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15853056085098205937ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1250975994639500150ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6813745785718060479ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3621409072282340220ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8497641065308592517ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17083344789834423704ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 5467340134831724421ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 17109770985043502448ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7890288194636408585ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 453001386193269005ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9521295228626502388ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 12247724398558738653ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11225255143052292079ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2648428622711489601ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12119456157911586389ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17573473446241354011ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11692678783887938921ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17552470619442550735ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7900377299124481674ull);
    vlSelf->ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1779224281863838153ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9770166447479376979ull);
    }
    vlSelf->ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3785260978397564455ull);
    VL_SCOPED_RAND_RESET_W(175, vlSelf->__VdfgRegularize_h2dd05df0_0_4, __VscopeHash, 12896428460974172309ull);
    vlSelf->__VdfgRegularize_h2dd05df0_0_7 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9609230176621348335ull);
    vlSelf->__VdfgRegularize_h2dd05df0_0_9 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13979464287971978003ull);
    vlSelf->__VdfgRegularize_h2dd05df0_0_12 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14897759835722064013ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->__VdfgRegularize_h2dd05df0_0_18, __VscopeHash, 11707739852698816899ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyx_25100258_cpu__DOT__inst_out__0 = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 11922304985185140650ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

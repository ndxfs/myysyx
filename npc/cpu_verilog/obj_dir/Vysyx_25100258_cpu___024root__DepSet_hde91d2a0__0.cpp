// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25100258_cpu.h for the primary calling header

#include "Vysyx_25100258_cpu__pch.h"
#include "Vysyx_25100258_cpu___024root.h"

void Vysyx_25100258_cpu___024root___ico_sequent__TOP__0(Vysyx_25100258_cpu___024root* vlSelf);

void Vysyx_25100258_cpu___024root___eval_ico(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_ico\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25100258_cpu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_25100258_cpu___024root___ico_sequent__TOP__0(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___ico_sequent__TOP__0\n"); );
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

void Vysyx_25100258_cpu___024root___eval_triggers__ico(Vysyx_25100258_cpu___024root* vlSelf);

bool Vysyx_25100258_cpu___024root___eval_phase__ico(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_phase__ico\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25100258_cpu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25100258_cpu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25100258_cpu___024root___eval_act(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_act\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vysyx_25100258_cpu___024root___nba_sequent__TOP__0(Vysyx_25100258_cpu___024root* vlSelf);
void Vysyx_25100258_cpu___024root___nba_sequent__TOP__1(Vysyx_25100258_cpu___024root* vlSelf);

void Vysyx_25100258_cpu___024root___eval_nba(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_nba\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25100258_cpu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25100258_cpu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_25100258_cpu___024root____Vdpiimwrap_ysyx_25100258_cpu__DOT__u_EXU__DOT__ebreak_call_TOP();

VL_INLINE_OPT void Vysyx_25100258_cpu___024root___nba_sequent__TOP__0(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x73U == vlSelfRef.ysyx_25100258_cpu__DOT__inst_out)) {
        Vysyx_25100258_cpu___024root____Vdpiimwrap_ysyx_25100258_cpu__DOT__u_EXU__DOT__ebreak_call_TOP();
    }
}

VL_INLINE_OPT void Vysyx_25100258_cpu___024root___nba_sequent__TOP__1(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___nba_sequent__TOP__1\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v0;
    __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32;
    __VdlyVal__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32;
    __VdlyDim0__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32;
    __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    // Body
    __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0x20U;
        __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        vlSelfRef.pc = 0x80000000U;
    } else {
        if (((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__reg_wen) 
             & (0U != (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__rd)))) {
            __VdlyVal__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32 
                = vlSelfRef.ysyx_25100258_cpu__DOT__exu_data;
            __VdlyDim0__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32 
                = vlSelfRef.ysyx_25100258_cpu__DOT__rd;
            __VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32 = 1U;
        }
        vlSelfRef.pc = vlSelfRef.ysyx_25100258_cpu__DOT__u_IFU__DOT__pc_next;
    }
    if (__VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x11U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x12U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x13U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x14U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x15U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x16U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x17U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x18U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x19U] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x1aU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x1bU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x1cU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x1dU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x1eU] = 0U;
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0x1fU] = 0U;
    }
    if (__VdlySet__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32) {
        vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[__VdlyDim0__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32] 
            = __VdlyVal__ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf__v32;
    }
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi 
        = (vlSelfRef.ysyx_25100258_cpu__DOT__imm + 
           ((0U == (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr))
             ? 0U : vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf
            [vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr]));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_IFU__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.pc);
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__pair_list[0U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi)));
    vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi;
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
}

void Vysyx_25100258_cpu___024root___eval_triggers__act(Vysyx_25100258_cpu___024root* vlSelf);

bool Vysyx_25100258_cpu___024root___eval_phase__act(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_phase__act\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25100258_cpu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25100258_cpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_25100258_cpu___024root___eval_phase__nba(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_phase__nba\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25100258_cpu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__ico(Vysyx_25100258_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__nba(Vysyx_25100258_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25100258_cpu___024root___dump_triggers__act(Vysyx_25100258_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25100258_cpu___024root___eval(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vysyx_25100258_cpu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25100258_cpu.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25100258_cpu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25100258_cpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25100258_cpu.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25100258_cpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25100258_cpu.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25100258_cpu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vysyx_25100258_cpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25100258_cpu___024root___eval_debug_assertions(Vysyx_25100258_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root___eval_debug_assertions\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

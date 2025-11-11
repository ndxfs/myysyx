// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25100258_cpu__Syms.h"


void Vysyx_25100258_cpu___024root__trace_chg_0_sub_0(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25100258_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25100258_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25100258_cpu___024root*>(voidSelf);
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25100258_cpu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25100258_cpu___024root__trace_chg_0_sub_0(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_4;
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list[0]),17);
        bufp->chgCData(oldp+1,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+2,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+3,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+4,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+5,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+6,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+7,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+8,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[6]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+22,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+23,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+24,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+26,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[6]),3);
        bufp->chgBit(oldp+27,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+29,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+33,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[6]));
        bufp->chgCData(oldp+34,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+35,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+36,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+37,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+38,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+39,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+40,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+41,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+42,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+43,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+44,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+45,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+46,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+47,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+48,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+49,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+50,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+51,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+52,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+53,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+54,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+56,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+57,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgSData(oldp+58,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+59,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgCData(oldp+60,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+62,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+63,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[1]),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+64,(vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr),5);
        bufp->chgCData(oldp+65,(vlSelfRef.ysyx_25100258_cpu__DOT__src2_addr),5);
        bufp->chgCData(oldp+66,(vlSelfRef.ysyx_25100258_cpu__DOT__rd),5);
        bufp->chgIData(oldp+67,(vlSelfRef.ysyx_25100258_cpu__DOT__imm),32);
        bufp->chgIData(oldp+68,(vlSelfRef.ysyx_25100258_cpu__DOT__inst_out),17);
        bufp->chgCData(oldp+69,(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type),3);
        bufp->chgBit(oldp+70,(vlSelfRef.ysyx_25100258_cpu__DOT__reg_wen));
        bufp->chgBit(oldp+71,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+72,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+73,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I),32);
        bufp->chgIData(oldp+74,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S),32);
        bufp->chgIData(oldp+75,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B),32);
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J),32);
        bufp->chgIData(oldp+77,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R),17);
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6),17);
        bufp->chgQData(oldp+79,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+81,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+83,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+85,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+87,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+89,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+98,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit));
        __Vtemp_2[0U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[0U];
        __Vtemp_2[1U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[1U];
        __Vtemp_2[2U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[2U];
        __Vtemp_2[3U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R 
                          << 0x18U) | vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[3U]);
        __Vtemp_2[4U] = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R 
                         >> 8U);
        bufp->chgWData(oldp+99,(__Vtemp_2),140);
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[0]),20);
        bufp->chgIData(oldp+105,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[1]),20);
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[2]),20);
        bufp->chgIData(oldp+107,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[3]),20);
        bufp->chgIData(oldp+108,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[4]),20);
        bufp->chgIData(oldp+109,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[5]),20);
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[6]),20);
        bufp->chgIData(oldp+111,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[0]),17);
        bufp->chgIData(oldp+112,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[1]),17);
        bufp->chgIData(oldp+113,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[2]),17);
        bufp->chgIData(oldp+114,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[3]),17);
        bufp->chgIData(oldp+115,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[4]),17);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[5]),17);
        bufp->chgIData(oldp+117,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[6]),17);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out),17);
        bufp->chgBit(oldp+119,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+120,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+121,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+122,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+123,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[3]),8);
        bufp->chgCData(oldp+124,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+125,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+126,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[2]),5);
        bufp->chgCData(oldp+127,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[3]),5);
        bufp->chgCData(oldp+128,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+130,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+131,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+132,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+133,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[3]),8);
        bufp->chgCData(oldp+134,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+135,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+136,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[2]),5);
        bufp->chgCData(oldp+137,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[3]),5);
        bufp->chgCData(oldp+138,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+139,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+140,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+141,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+142,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+143,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+144,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+145,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[2]),5);
        bufp->chgCData(oldp+146,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+147,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+148,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+149,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_25100258_cpu__DOT__src1),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyx_25100258_cpu__DOT__src2),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyx_25100258_cpu__DOT__exu_data),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__op1),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__op2),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__op_u),32);
        bufp->chgQData(oldp+157,((0x1300000000ULL | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi)))),49);
        bufp->chgQData(oldp+159,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__pair_list[0]),49);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+163,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__hit));
        __Vtemp_4[0U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[0U];
        __Vtemp_4[1U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[1U];
        __Vtemp_4[2U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[2U];
        __Vtemp_4[3U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[3U];
        __Vtemp_4[4U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[4U];
        __Vtemp_4[5U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__src1 
                          << 0xfU) | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[5U]);
        __Vtemp_4[6U] = (vlSelfRef.ysyx_25100258_cpu__DOT__src1 
                         >> 0x11U);
        bufp->chgWData(oldp+164,(__Vtemp_4),210);
        bufp->chgQData(oldp+171,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+173,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+175,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+177,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+179,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+181,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+190,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__hit));
        __Vtemp_6[0U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[0U];
        __Vtemp_6[1U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[1U];
        __Vtemp_6[2U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[2U];
        __Vtemp_6[3U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[3U];
        __Vtemp_6[4U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[4U];
        __Vtemp_6[5U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__src2 
                          << 0xfU) | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[5U]);
        __Vtemp_6[6U] = (vlSelfRef.ysyx_25100258_cpu__DOT__src2 
                         >> 0x11U);
        bufp->chgWData(oldp+191,(__Vtemp_6),210);
        bufp->chgQData(oldp+198,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+200,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+202,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+204,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+206,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+208,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgIData(oldp+210,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+218,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+251,(vlSelfRef.clk));
    bufp->chgBit(oldp+252,(vlSelfRef.rst));
    bufp->chgIData(oldp+253,(vlSelfRef.inst_in),32);
    bufp->chgIData(oldp+254,(vlSelfRef.pc),32);
    bufp->chgIData(oldp+255,((0x1fU & (vlSelfRef.inst_in 
                                       >> 0x14U))),32);
    bufp->chgIData(oldp+256,((0xfffff000U & vlSelfRef.inst_in)),32);
    bufp->chgIData(oldp+257,((0x7fU & vlSelfRef.inst_in)),17);
    bufp->chgIData(oldp+258,(((0x100073U == vlSelfRef.inst_in)
                               ? 0x73U : 0U)),17);
    bufp->chgBit(oldp+259,((0x100073U == vlSelfRef.inst_in)));
    __Vtemp_8[0U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[0U];
    __Vtemp_8[1U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[1U];
    __Vtemp_8[2U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[2U];
    __Vtemp_8[3U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[3U];
    __Vtemp_8[4U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[4U];
    __Vtemp_8[5U] = ((0xf8000U & (vlSelfRef.inst_in 
                                  >> 5U)) | vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[5U]);
    __Vtemp_8[6U] = 0U;
    bufp->chgWData(oldp+260,(__Vtemp_8),210);
    bufp->chgIData(oldp+267,(((0x1f000000U & (vlSelfRef.inst_in 
                                              << 0x11U)) 
                              | vlSelfRef.__VdfgRegularize_h2dd05df0_0_12)),32);
    bufp->chgIData(oldp+268,(((0x1f000000U & (vlSelfRef.inst_in 
                                              << 9U)) 
                              | vlSelfRef.__VdfgRegularize_h2dd05df0_0_7)),32);
    bufp->chgIData(oldp+269,(((0x1f0000U & (vlSelfRef.inst_in 
                                            >> 4U)) 
                              | (IData)(vlSelfRef.__VdfgRegularize_h2dd05df0_0_9))),24);
    bufp->chgCData(oldp+270,((0x7fU & vlSelfRef.inst_in)),7);
    bufp->chgIData(oldp+271,(((IData)(4U) + vlSelfRef.pc)),32);
}

void Vysyx_25100258_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25100258_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25100258_cpu___024root*>(voidSelf);
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbarrel_shifter__Syms.h"


void Vbarrel_shifter___024root__trace_chg_0_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbarrel_shifter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_chg_0\n"); );
    // Init
    Vbarrel_shifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter___024root*>(voidSelf);
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbarrel_shifter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbarrel_shifter___024root__trace_chg_0_sub_0(Vbarrel_shifter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_chg_0_sub_0\n"); );
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.barrel_shifter__DOT__pad));
        bufp->chgCData(oldp+1,(vlSelfRef.barrel_shifter__DOT__stage1_out),8);
        bufp->chgCData(oldp+2,(((0xc0U & ((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT__pad))) 
                                          << 6U)) | 
                                (0x3fU & ((IData)(vlSelfRef.barrel_shifter__DOT__stage1_out) 
                                          >> 2U)))),8);
        bufp->chgCData(oldp+3,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.barrel_shifter__DOT__stage1_out), 2U))),8);
        bufp->chgCData(oldp+4,(vlSelfRef.barrel_shifter__DOT__stage2_out),8);
        bufp->chgCData(oldp+5,(((0xf0U & ((- (IData)((IData)(vlSelfRef.barrel_shifter__DOT__pad))) 
                                          << 4U)) | 
                                (0xfU & ((IData)(vlSelfRef.barrel_shifter__DOT__stage2_out) 
                                         >> 4U)))),8);
        bufp->chgCData(oldp+6,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.barrel_shifter__DOT__stage2_out), 4U))),8);
    }
    bufp->chgCData(oldp+7,(vlSelfRef.din),8);
    bufp->chgCData(oldp+8,(vlSelfRef.shamt),3);
    bufp->chgBit(oldp+9,(vlSelfRef.LR));
    bufp->chgBit(oldp+10,(vlSelfRef.AL));
    bufp->chgCData(oldp+11,(vlSelfRef.dout),8);
    bufp->chgCData(oldp+12,((((IData)(vlSelfRef.barrel_shifter__DOT__pad) 
                              << 7U) | (0x7fU & ((IData)(vlSelfRef.din) 
                                                 >> 1U)))),8);
    bufp->chgCData(oldp+13,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.din), 1U))),8);
    bufp->chgCData(oldp+14,((((IData)(vlSelfRef.LR) 
                              << 1U) | (1U & (IData)(vlSelfRef.shamt)))),2);
    bufp->chgCData(oldp+15,((((IData)(vlSelfRef.LR) 
                              << 1U) | (1U & ((IData)(vlSelfRef.shamt) 
                                              >> 1U)))),2);
    bufp->chgCData(oldp+16,((((IData)(vlSelfRef.LR) 
                              << 1U) | (1U & ((IData)(vlSelfRef.shamt) 
                                              >> 2U)))),2);
}

void Vbarrel_shifter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbarrel_shifter___024root__trace_cleanup\n"); );
    // Init
    Vbarrel_shifter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbarrel_shifter___024root*>(voidSelf);
    Vbarrel_shifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

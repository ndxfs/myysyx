// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencode42_priority__Syms.h"


void Vencode42_priority___024root__trace_chg_0_sub_0(Vencode42_priority___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vencode42_priority___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_chg_0\n"); );
    // Init
    Vencode42_priority___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode42_priority___024root*>(voidSelf);
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vencode42_priority___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vencode42_priority___024root__trace_chg_0_sub_0(Vencode42_priority___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_chg_0_sub_0\n"); );
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.x),4);
    bufp->chgBit(oldp+1,(vlSelfRef.en));
    bufp->chgCData(oldp+2,(vlSelfRef.y),2);
    bufp->chgIData(oldp+3,(vlSelfRef.encode42_priority__DOT__i),32);
}

void Vencode42_priority___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_cleanup\n"); );
    // Init
    Vencode42_priority___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode42_priority___024root*>(voidSelf);
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

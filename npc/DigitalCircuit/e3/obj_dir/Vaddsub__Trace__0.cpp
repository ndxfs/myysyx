// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddsub__Syms.h"


void Vaddsub___024root__trace_chg_0_sub_0(Vaddsub___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaddsub___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_chg_0\n"); );
    // Init
    Vaddsub___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddsub___024root*>(voidSelf);
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaddsub___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaddsub___024root__trace_chg_0_sub_0(Vaddsub___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_chg_0_sub_0\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.A),4);
    bufp->chgCData(oldp+1,(vlSelfRef.B),4);
    bufp->chgBit(oldp+2,(vlSelfRef.Cin));
    bufp->chgCData(oldp+3,(vlSelfRef.Result),4);
    bufp->chgBit(oldp+4,(vlSelfRef.Carry));
    bufp->chgBit(oldp+5,(vlSelfRef.Overflow));
    bufp->chgCData(oldp+6,(vlSelfRef.addsub__DOT__t_add_Cin),4);
}

void Vaddsub___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_cleanup\n"); );
    // Init
    Vaddsub___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddsub___024root*>(voidSelf);
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

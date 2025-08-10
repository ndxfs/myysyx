// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencode42_priority__Syms.h"


VL_ATTR_COLD void Vencode42_priority___024root__trace_init_sub__TOP__0(Vencode42_priority___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_init_sub__TOP__0\n"); );
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("encode42_priority", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vencode42_priority___024root__trace_init_top(Vencode42_priority___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_init_top\n"); );
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vencode42_priority___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vencode42_priority___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vencode42_priority___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencode42_priority___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vencode42_priority___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vencode42_priority___024root__trace_register(Vencode42_priority___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_register\n"); );
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vencode42_priority___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vencode42_priority___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vencode42_priority___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vencode42_priority___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vencode42_priority___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_const_0\n"); );
    // Init
    Vencode42_priority___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode42_priority___024root*>(voidSelf);
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vencode42_priority___024root__trace_full_0_sub_0(Vencode42_priority___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vencode42_priority___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_full_0\n"); );
    // Init
    Vencode42_priority___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencode42_priority___024root*>(voidSelf);
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vencode42_priority___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vencode42_priority___024root__trace_full_0_sub_0(Vencode42_priority___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode42_priority___024root__trace_full_0_sub_0\n"); );
    Vencode42_priority__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.x),4);
    bufp->fullBit(oldp+2,(vlSelfRef.en));
    bufp->fullCData(oldp+3,(vlSelfRef.y),2);
    bufp->fullIData(oldp+4,(vlSelfRef.encode42_priority__DOT__i),32);
}

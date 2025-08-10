// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vseg__Syms.h"


VL_ATTR_COLD void Vseg___024root__trace_init_sub__TOP__0(Vseg___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root__trace_init_sub__TOP__0\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"Switch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"digital_tube",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("seg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"Switch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"digital_tube",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vseg___024root__trace_init_top(Vseg___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root__trace_init_top\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vseg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vseg___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vseg___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vseg___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vseg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vseg___024root__trace_register(Vseg___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root__trace_register\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vseg___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vseg___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vseg___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vseg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vseg___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root__trace_const_0\n"); );
    // Init
    Vseg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vseg___024root*>(voidSelf);
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vseg___024root__trace_full_0_sub_0(Vseg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vseg___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root__trace_full_0\n"); );
    // Init
    Vseg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vseg___024root*>(voidSelf);
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vseg___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vseg___024root__trace_full_0_sub_0(Vseg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseg___024root__trace_full_0_sub_0\n"); );
    Vseg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.en));
    bufp->fullCData(oldp+2,(vlSelfRef.Switch),8);
    bufp->fullCData(oldp+3,(vlSelfRef.digital_tube),7);
    bufp->fullCData(oldp+4,(vlSelfRef.led),4);
    bufp->fullIData(oldp+5,(vlSelfRef.seg__DOT__unnamedblk1__DOT__i),32);
}

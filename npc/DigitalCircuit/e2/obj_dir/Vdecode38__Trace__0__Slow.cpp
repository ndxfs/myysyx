// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode38__Syms.h"


VL_ATTR_COLD void Vdecode38___024root__trace_init_sub__TOP__0(Vdecode38___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode38___024root__trace_init_sub__TOP__0\n"); );
    Vdecode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode38", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+2,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdecode38___024root__trace_init_top(Vdecode38___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode38___024root__trace_init_top\n"); );
    Vdecode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdecode38___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdecode38___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdecode38___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecode38___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecode38___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdecode38___024root__trace_register(Vdecode38___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode38___024root__trace_register\n"); );
    Vdecode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdecode38___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdecode38___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdecode38___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdecode38___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdecode38___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode38___024root__trace_const_0\n"); );
    // Init
    Vdecode38___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode38___024root*>(voidSelf);
    Vdecode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdecode38___024root__trace_full_0_sub_0(Vdecode38___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdecode38___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode38___024root__trace_full_0\n"); );
    // Init
    Vdecode38___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode38___024root*>(voidSelf);
    Vdecode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdecode38___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdecode38___024root__trace_full_0_sub_0(Vdecode38___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode38___024root__trace_full_0_sub_0\n"); );
    Vdecode38__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.x),3);
    bufp->fullBit(oldp+2,(vlSelfRef.en));
    bufp->fullCData(oldp+3,(vlSelfRef.y),8);
    bufp->fullCData(oldp+4,(vlSelfRef.decode38__DOT__i),4);
}

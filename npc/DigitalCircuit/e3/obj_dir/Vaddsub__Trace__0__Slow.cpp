// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaddsub__Syms.h"


VL_ATTR_COLD void Vaddsub___024root__trace_init_sub__TOP__0(Vaddsub___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_init_sub__TOP__0\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"Carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"Overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("addsub", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"Carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"Overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"t_add_Cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaddsub___024root__trace_init_top(Vaddsub___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_init_top\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaddsub___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaddsub___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaddsub___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddsub___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaddsub___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaddsub___024root__trace_register(Vaddsub___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_register\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaddsub___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vaddsub___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vaddsub___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vaddsub___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaddsub___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_const_0\n"); );
    // Init
    Vaddsub___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddsub___024root*>(voidSelf);
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vaddsub___024root__trace_full_0_sub_0(Vaddsub___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaddsub___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_full_0\n"); );
    // Init
    Vaddsub___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddsub___024root*>(voidSelf);
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaddsub___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaddsub___024root__trace_full_0_sub_0(Vaddsub___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddsub___024root__trace_full_0_sub_0\n"); );
    Vaddsub__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.A),4);
    bufp->fullCData(oldp+2,(vlSelfRef.B),4);
    bufp->fullBit(oldp+3,(vlSelfRef.Cin));
    bufp->fullCData(oldp+4,(vlSelfRef.Result),4);
    bufp->fullBit(oldp+5,(vlSelfRef.Carry));
    bufp->fullBit(oldp+6,(vlSelfRef.Overflow));
    bufp->fullCData(oldp+7,(vlSelfRef.addsub__DOT__t_add_Cin),4);
}

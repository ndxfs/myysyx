// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25100258_cpu__Syms.h"


VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_init_sub__TOP__0(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+252,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_25100258_cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+252,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"src1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+151,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"src2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+152,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"inst_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+70,0,"inst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+71,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"exu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+274,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+275,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+277,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+278,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+279,0,"N_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+280,0,"EBREAK_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+255,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"inst_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+70,0,"inst_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"alu_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"data_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"op_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"ADDI_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+282,0,"LUI_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("u_MuxKey_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+158,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+158,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+287,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+160+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 48,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+162+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+163,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+164,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_op1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+165,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+165,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->declBus(c+291,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+172+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 34,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+184+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+190,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+191,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_op2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+192,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+192,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->declBus(c+291,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+199+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 34,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+211+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+217,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+294,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+295,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+294,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+295,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+296,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+14+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+21+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+72,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+73,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"src1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"src2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+70,0,"inst_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+256,0,"imm_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"imm_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"imm_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"imm_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"imm_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"imm_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"inst_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+79,0,"inst_ISB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+258,0,"inst_UJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+259,0,"inst_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+260,0,"is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+274,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+275,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+276,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+277,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+278,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+279,0,"N_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+280,0,"EBREAK_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("u_MuxKey_imm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+261,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+286,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+261,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->declBus(c+291,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+80+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 34,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+35+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+92+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+98,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_inst_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declArray(c+100,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 139,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+298,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declArray(c+100,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 139,0);
    tracep->declBus(c+299,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+105+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 19,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+112+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+119,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+120,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+297,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_rd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+296,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+301,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+268,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+296,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+301,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+268,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+125+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+129,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+130,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_src1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+296,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+301,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+269,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+296,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+301,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+269,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+52+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+135+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+139,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+140,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_src2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+290,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+301,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+270,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+290,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+301,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+270,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+302,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+141+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+56+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+144+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+147,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+148,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_type", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+305,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+271,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+306,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+305,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+271,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+306,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+308,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+59+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+63+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+149,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+150,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+252,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_Reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+252,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+311,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+252,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+71,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+151,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+219+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_init_top(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_init_top\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25100258_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25100258_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25100258_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_register(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_register\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25100258_cpu___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25100258_cpu___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25100258_cpu___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25100258_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_const_0_sub_0(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_const_0\n"); );
    // Init
    Vysyx_25100258_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25100258_cpu___024root*>(voidSelf);
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25100258_cpu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_const_0_sub_0(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_const_0_sub_0\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+273,(0U),3);
    bufp->fullCData(oldp+274,(1U),3);
    bufp->fullCData(oldp+275,(2U),3);
    bufp->fullCData(oldp+276,(3U),3);
    bufp->fullCData(oldp+277,(4U),3);
    bufp->fullCData(oldp+278,(5U),3);
    bufp->fullCData(oldp+279,(6U),3);
    bufp->fullIData(oldp+280,(0x73U),17);
    bufp->fullIData(oldp+281,(0x13U),17);
    bufp->fullIData(oldp+282,(0x33U),17);
    bufp->fullIData(oldp+283,(1U),32);
    bufp->fullIData(oldp+284,(0x11U),32);
    bufp->fullIData(oldp+285,(0x20U),32);
    bufp->fullIData(oldp+286,(0U),32);
    bufp->fullIData(oldp+287,(0x31U),32);
    bufp->fullIData(oldp+288,(1U),32);
    bufp->fullIData(oldp+289,(6U),32);
    bufp->fullIData(oldp+290,(3U),32);
    bufp->fullIData(oldp+291,(0x23U),32);
    bufp->fullIData(oldp+292,(6U),32);
    bufp->fullIData(oldp+293,(7U),32);
    bufp->fullBit(oldp+294,(0U));
    bufp->fullIData(oldp+295,(0x13469bcU),28);
    bufp->fullIData(oldp+296,(4U),32);
    bufp->fullIData(oldp+297,(7U),32);
    bufp->fullIData(oldp+298,(0U),17);
    bufp->fullIData(oldp+299,(0x14U),32);
    bufp->fullIData(oldp+300,(5U),32);
    bufp->fullCData(oldp+301,(0U),5);
    bufp->fullIData(oldp+302,(8U),32);
    bufp->fullIData(oldp+303,(4U),32);
    bufp->fullIData(oldp+304,(3U),32);
    bufp->fullIData(oldp+305,(2U),32);
    bufp->fullCData(oldp+306,(7U),3);
    bufp->fullIData(oldp+307,(0x2679eU),20);
    bufp->fullIData(oldp+308,(0xaU),32);
    bufp->fullIData(oldp+309,(2U),32);
    bufp->fullIData(oldp+310,(0x80000000U),32);
    bufp->fullBit(oldp+311,(1U));
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_full_0_sub_0(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_full_0\n"); );
    // Init
    Vysyx_25100258_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25100258_cpu___024root*>(voidSelf);
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25100258_cpu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25100258_cpu___024root__trace_full_0_sub_0(Vysyx_25100258_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root__trace_full_0_sub_0\n"); );
    Vysyx_25100258_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_4;
    VlWide<7>/*223:0*/ __Vtemp_6;
    VlWide<7>/*223:0*/ __Vtemp_8;
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list[0]),17);
    bufp->fullCData(oldp+2,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+3,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+4,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+5,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+6,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+7,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+8,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+9,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+10,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+11,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+12,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+13,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+14,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+15,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+16,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[6]),4);
    bufp->fullCData(oldp+21,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+22,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+23,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+24,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+25,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+26,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+27,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[6]),3);
    bufp->fullBit(oldp+28,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+29,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+30,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+31,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+32,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+33,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+34,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[6]));
    bufp->fullCData(oldp+35,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+36,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+37,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+38,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+39,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+40,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+41,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+42,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+43,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+44,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+45,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+46,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+47,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+48,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+49,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+50,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+51,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+52,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+53,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+54,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+55,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+56,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+57,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+58,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullSData(oldp+59,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+60,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullCData(oldp+61,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+62,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+63,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+64,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+65,(vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr),5);
    bufp->fullCData(oldp+66,(vlSelfRef.ysyx_25100258_cpu__DOT__src2_addr),5);
    bufp->fullCData(oldp+67,(vlSelfRef.ysyx_25100258_cpu__DOT__rd),5);
    bufp->fullIData(oldp+68,(vlSelfRef.ysyx_25100258_cpu__DOT__imm),32);
    bufp->fullIData(oldp+69,(vlSelfRef.ysyx_25100258_cpu__DOT__inst_out),17);
    bufp->fullCData(oldp+70,(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type),3);
    bufp->fullBit(oldp+71,(vlSelfRef.ysyx_25100258_cpu__DOT__reg_wen));
    bufp->fullBit(oldp+72,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+73,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+74,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I),32);
    bufp->fullIData(oldp+75,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S),32);
    bufp->fullIData(oldp+76,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B),32);
    bufp->fullIData(oldp+77,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J),32);
    bufp->fullIData(oldp+78,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R),17);
    bufp->fullIData(oldp+79,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6),17);
    bufp->fullQData(oldp+80,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+82,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+84,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+86,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+88,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+90,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+92,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+99,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit));
    __Vtemp_2[0U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[0U];
    __Vtemp_2[1U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[1U];
    __Vtemp_2[2U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[2U];
    __Vtemp_2[3U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R 
                      << 0x18U) | vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[3U]);
    __Vtemp_2[4U] = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R 
                     >> 8U);
    bufp->fullWData(oldp+100,(__Vtemp_2),140);
    bufp->fullIData(oldp+105,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[0]),20);
    bufp->fullIData(oldp+106,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[1]),20);
    bufp->fullIData(oldp+107,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[2]),20);
    bufp->fullIData(oldp+108,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[3]),20);
    bufp->fullIData(oldp+109,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[4]),20);
    bufp->fullIData(oldp+110,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[5]),20);
    bufp->fullIData(oldp+111,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[6]),20);
    bufp->fullIData(oldp+112,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[0]),17);
    bufp->fullIData(oldp+113,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[1]),17);
    bufp->fullIData(oldp+114,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[2]),17);
    bufp->fullIData(oldp+115,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[3]),17);
    bufp->fullIData(oldp+116,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[4]),17);
    bufp->fullIData(oldp+117,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[5]),17);
    bufp->fullIData(oldp+118,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[6]),17);
    bufp->fullIData(oldp+119,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out),17);
    bufp->fullBit(oldp+120,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+121,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+122,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+123,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+124,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+125,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+126,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[1]),5);
    bufp->fullCData(oldp+127,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[2]),5);
    bufp->fullCData(oldp+128,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[3]),5);
    bufp->fullCData(oldp+129,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+130,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+131,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+132,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+133,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+134,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+135,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+136,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[1]),5);
    bufp->fullCData(oldp+137,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[2]),5);
    bufp->fullCData(oldp+138,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[3]),5);
    bufp->fullCData(oldp+139,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+140,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+141,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+142,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+143,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+144,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+145,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[1]),5);
    bufp->fullCData(oldp+146,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[2]),5);
    bufp->fullCData(oldp+147,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+148,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+149,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+150,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+151,(vlSelfRef.ysyx_25100258_cpu__DOT__src1),32);
    bufp->fullIData(oldp+152,(vlSelfRef.ysyx_25100258_cpu__DOT__src2),32);
    bufp->fullIData(oldp+153,(vlSelfRef.ysyx_25100258_cpu__DOT__exu_data),32);
    bufp->fullIData(oldp+154,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi),32);
    bufp->fullIData(oldp+155,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__op1),32);
    bufp->fullIData(oldp+156,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__op2),32);
    bufp->fullIData(oldp+157,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__op_u),32);
    bufp->fullQData(oldp+158,((0x1300000000ULL | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi)))),49);
    bufp->fullQData(oldp+160,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__pair_list[0]),49);
    bufp->fullIData(oldp+162,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+164,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__hit));
    __Vtemp_4[0U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[0U];
    __Vtemp_4[1U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[1U];
    __Vtemp_4[2U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[2U];
    __Vtemp_4[3U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[3U];
    __Vtemp_4[4U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[4U];
    __Vtemp_4[5U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__src1 
                      << 0xfU) | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_4[5U]);
    __Vtemp_4[6U] = (vlSelfRef.ysyx_25100258_cpu__DOT__src1 
                     >> 0x11U);
    bufp->fullWData(oldp+165,(__Vtemp_4),210);
    bufp->fullQData(oldp+172,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+174,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+176,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+178,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+180,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+182,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+184,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+191,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__hit));
    __Vtemp_6[0U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[0U];
    __Vtemp_6[1U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[1U];
    __Vtemp_6[2U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[2U];
    __Vtemp_6[3U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[3U];
    __Vtemp_6[4U] = vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[4U];
    __Vtemp_6[5U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__src2 
                      << 0xfU) | vlSelfRef.__VdfgRegularize_h3c5bdd75_0_9[5U]);
    __Vtemp_6[6U] = (vlSelfRef.ysyx_25100258_cpu__DOT__src2 
                     >> 0x11U);
    bufp->fullWData(oldp+192,(__Vtemp_6),210);
    bufp->fullQData(oldp+199,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+201,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+203,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+205,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+207,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+209,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+211,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+218,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+219,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+235,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+236,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+237,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+238,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+239,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+240,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+241,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+242,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+243,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+244,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+245,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+246,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+247,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+248,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+249,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+250,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+251,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+252,(vlSelfRef.clk));
    bufp->fullBit(oldp+253,(vlSelfRef.rst));
    bufp->fullIData(oldp+254,(vlSelfRef.inst_in),32);
    bufp->fullIData(oldp+255,(vlSelfRef.pc),32);
    bufp->fullIData(oldp+256,((0x1fU & (vlSelfRef.inst_in 
                                        >> 0x14U))),32);
    bufp->fullIData(oldp+257,((0xfffff000U & vlSelfRef.inst_in)),32);
    bufp->fullIData(oldp+258,((0x7fU & vlSelfRef.inst_in)),17);
    bufp->fullIData(oldp+259,(((0x100073U == vlSelfRef.inst_in)
                                ? 0x73U : 0U)),17);
    bufp->fullBit(oldp+260,((0x100073U == vlSelfRef.inst_in)));
    __Vtemp_8[0U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[0U];
    __Vtemp_8[1U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[1U];
    __Vtemp_8[2U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[2U];
    __Vtemp_8[3U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[3U];
    __Vtemp_8[4U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[4U];
    __Vtemp_8[5U] = ((0xf8000U & (vlSelfRef.inst_in 
                                  >> 5U)) | vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[5U]);
    __Vtemp_8[6U] = 0U;
    bufp->fullWData(oldp+261,(__Vtemp_8),210);
    bufp->fullIData(oldp+268,(((0x1f000000U & (vlSelfRef.inst_in 
                                               << 0x11U)) 
                               | vlSelfRef.__VdfgRegularize_h2dd05df0_0_12)),32);
    bufp->fullIData(oldp+269,(((0x1f000000U & (vlSelfRef.inst_in 
                                               << 9U)) 
                               | vlSelfRef.__VdfgRegularize_h2dd05df0_0_7)),32);
    bufp->fullIData(oldp+270,(((0x1f0000U & (vlSelfRef.inst_in 
                                             >> 4U)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h2dd05df0_0_9))),24);
    bufp->fullCData(oldp+271,((0x7fU & vlSelfRef.inst_in)),7);
    bufp->fullIData(oldp+272,(((IData)(4U) + vlSelfRef.pc)),32);
}

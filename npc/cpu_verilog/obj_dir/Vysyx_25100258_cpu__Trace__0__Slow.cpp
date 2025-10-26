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
    tracep->declBit(c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_25100258_cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"src1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+139,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"src2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+140,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"inst_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+58,0,"inst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+59,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"exu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+204,0,"R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+205,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+206,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+207,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+208,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+209,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+210,0,"N_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+211,0,"EBREAK_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+57,0,"inst_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+58,0,"inst_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+139,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"alu_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"data_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"ADDI_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("u_MuxKey_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+216,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+143,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+216,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+143,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+217,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+145+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 48,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+147+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+148,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+221,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+222,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+221,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+222,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+223,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+60,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+61,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+185,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"src1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"src2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+58,0,"inst_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+187,0,"imm_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"imm_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"imm_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"imm_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"imm_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"imm_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"inst_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+67,0,"inst_ISB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+189,0,"inst_UJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+190,0,"inst_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+191,0,"is_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"R_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+205,0,"I_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+206,0,"S_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+207,0,"B_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+208,0,"U_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+209,0,"J_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+210,0,"N_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+211,0,"EBREAK_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("u_MuxKey_imm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+225,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+216,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+192,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+225,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+216,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+192,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 209,0);
    tracep->declBus(c+226,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+68+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 34,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+86,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_inst_out", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declArray(c+88,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 139,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+228,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declArray(c+88,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 139,0);
    tracep->declBus(c+229,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 19,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+100+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+107,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+108,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_rd", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+109+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+113+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+117,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+118,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_src1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+200,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+223,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+200,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+119+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+123+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+127,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+128,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_src2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+201,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+231,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+201,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+232,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+132+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+135,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+136,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_MuxKey_type", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+236,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+237,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+236,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+237,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+238,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+51+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+137,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+138,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_Reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+241,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+183,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+59,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+54,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+139,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+150+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
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
    bufp->fullCData(oldp+204,(0U),3);
    bufp->fullCData(oldp+205,(1U),3);
    bufp->fullCData(oldp+206,(2U),3);
    bufp->fullCData(oldp+207,(3U),3);
    bufp->fullCData(oldp+208,(4U),3);
    bufp->fullCData(oldp+209,(5U),3);
    bufp->fullCData(oldp+210,(6U),3);
    bufp->fullIData(oldp+211,(0x73U),17);
    bufp->fullIData(oldp+212,(0x13U),17);
    bufp->fullIData(oldp+213,(1U),32);
    bufp->fullIData(oldp+214,(0x11U),32);
    bufp->fullIData(oldp+215,(0x20U),32);
    bufp->fullIData(oldp+216,(0U),32);
    bufp->fullIData(oldp+217,(0x31U),32);
    bufp->fullIData(oldp+218,(1U),32);
    bufp->fullIData(oldp+219,(7U),32);
    bufp->fullIData(oldp+220,(3U),32);
    bufp->fullBit(oldp+221,(0U));
    bufp->fullIData(oldp+222,(0x13469bcU),28);
    bufp->fullIData(oldp+223,(4U),32);
    bufp->fullIData(oldp+224,(7U),32);
    bufp->fullIData(oldp+225,(6U),32);
    bufp->fullIData(oldp+226,(0x23U),32);
    bufp->fullIData(oldp+227,(6U),32);
    bufp->fullIData(oldp+228,(0U),17);
    bufp->fullIData(oldp+229,(0x14U),32);
    bufp->fullIData(oldp+230,(5U),32);
    bufp->fullCData(oldp+231,(0U),5);
    bufp->fullIData(oldp+232,(8U),32);
    bufp->fullIData(oldp+233,(4U),32);
    bufp->fullIData(oldp+234,(3U),32);
    bufp->fullIData(oldp+235,(2U),32);
    bufp->fullCData(oldp+236,(7U),3);
    bufp->fullIData(oldp+237,(0x2679eU),20);
    bufp->fullIData(oldp+238,(0xaU),32);
    bufp->fullIData(oldp+239,(2U),32);
    bufp->fullIData(oldp+240,(0x80000000U),32);
    bufp->fullBit(oldp+241,(1U));
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
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list[0]),17);
    bufp->fullCData(oldp+2,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+3,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+4,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+5,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+6,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+7,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+8,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list[6]),4);
    bufp->fullCData(oldp+9,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+10,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+11,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+12,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+13,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+14,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+15,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list[6]),3);
    bufp->fullBit(oldp+16,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+17,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+18,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+19,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+20,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+21,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+22,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list[6]));
    bufp->fullCData(oldp+23,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+24,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+25,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+26,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+27,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+28,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+29,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+30,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+31,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+32,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+33,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+34,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+35,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+36,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+37,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+38,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+39,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+40,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+41,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+42,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+43,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+44,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+45,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+46,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullSData(oldp+47,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+48,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullCData(oldp+49,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+50,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+51,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+52,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+53,(vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr),5);
    bufp->fullCData(oldp+54,(vlSelfRef.ysyx_25100258_cpu__DOT__src2_addr),5);
    bufp->fullCData(oldp+55,(vlSelfRef.ysyx_25100258_cpu__DOT__rd),5);
    bufp->fullIData(oldp+56,(vlSelfRef.ysyx_25100258_cpu__DOT__imm),32);
    bufp->fullIData(oldp+57,(vlSelfRef.ysyx_25100258_cpu__DOT__inst_out),17);
    bufp->fullCData(oldp+58,(vlSelfRef.ysyx_25100258_cpu__DOT__inst_type),3);
    bufp->fullBit(oldp+59,(vlSelfRef.ysyx_25100258_cpu__DOT__reg_wen));
    bufp->fullBit(oldp+60,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+61,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+62,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I),32);
    bufp->fullIData(oldp+63,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S),32);
    bufp->fullIData(oldp+64,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B),32);
    bufp->fullIData(oldp+65,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J),32);
    bufp->fullIData(oldp+66,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R),17);
    bufp->fullIData(oldp+67,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6),17);
    bufp->fullQData(oldp+68,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+70,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+72,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+74,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+76,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+78,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+80,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+87,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit));
    __Vtemp_2[0U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[0U];
    __Vtemp_2[1U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[1U];
    __Vtemp_2[2U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[2U];
    __Vtemp_2[3U] = ((vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R 
                      << 0x18U) | vlSelfRef.__VdfgRegularize_h2dd05df0_0_18[3U]);
    __Vtemp_2[4U] = (vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R 
                     >> 8U);
    bufp->fullWData(oldp+88,(__Vtemp_2),140);
    bufp->fullIData(oldp+93,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[0]),20);
    bufp->fullIData(oldp+94,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[1]),20);
    bufp->fullIData(oldp+95,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[2]),20);
    bufp->fullIData(oldp+96,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[3]),20);
    bufp->fullIData(oldp+97,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[4]),20);
    bufp->fullIData(oldp+98,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[5]),20);
    bufp->fullIData(oldp+99,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list[6]),20);
    bufp->fullIData(oldp+100,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[0]),17);
    bufp->fullIData(oldp+101,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[1]),17);
    bufp->fullIData(oldp+102,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[2]),17);
    bufp->fullIData(oldp+103,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[3]),17);
    bufp->fullIData(oldp+104,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[4]),17);
    bufp->fullIData(oldp+105,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[5]),17);
    bufp->fullIData(oldp+106,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list[6]),17);
    bufp->fullIData(oldp+107,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out),17);
    bufp->fullBit(oldp+108,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+109,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+110,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+111,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+112,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+113,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+114,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[1]),5);
    bufp->fullCData(oldp+115,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[2]),5);
    bufp->fullCData(oldp+116,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list[3]),5);
    bufp->fullCData(oldp+117,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+118,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+119,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+120,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+121,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+122,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+123,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+124,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[1]),5);
    bufp->fullCData(oldp+125,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[2]),5);
    bufp->fullCData(oldp+126,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list[3]),5);
    bufp->fullCData(oldp+127,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+128,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+129,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+130,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+131,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+132,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+133,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[1]),5);
    bufp->fullCData(oldp+134,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list[2]),5);
    bufp->fullCData(oldp+135,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+136,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+137,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+138,(vlSelfRef.ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+139,(((0U == (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr))
                                ? 0U : vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf
                               [vlSelfRef.ysyx_25100258_cpu__DOT__src1_addr])),32);
    bufp->fullIData(oldp+140,(((0U == (IData)(vlSelfRef.ysyx_25100258_cpu__DOT__src2_addr))
                                ? 0U : vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf
                               [vlSelfRef.ysyx_25100258_cpu__DOT__src2_addr])),32);
    bufp->fullIData(oldp+141,(vlSelfRef.ysyx_25100258_cpu__DOT__exu_data),32);
    bufp->fullIData(oldp+142,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi),32);
    bufp->fullQData(oldp+143,((0x1300000000ULL | (QData)((IData)(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi)))),49);
    bufp->fullQData(oldp+145,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__pair_list[0]),49);
    bufp->fullIData(oldp+147,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+149,(vlSelfRef.ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+150,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+169,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+170,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+171,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+172,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+183,(vlSelfRef.clk));
    bufp->fullBit(oldp+184,(vlSelfRef.rst));
    bufp->fullIData(oldp+185,(vlSelfRef.inst_in),32);
    bufp->fullIData(oldp+186,(vlSelfRef.pc),32);
    bufp->fullIData(oldp+187,((0x1fU & (vlSelfRef.inst_in 
                                        >> 0x14U))),32);
    bufp->fullIData(oldp+188,((0xfffff000U & vlSelfRef.inst_in)),32);
    bufp->fullIData(oldp+189,((0x7fU & vlSelfRef.inst_in)),17);
    bufp->fullIData(oldp+190,(((0x100073U == vlSelfRef.inst_in)
                                ? 0x73U : 0U)),17);
    bufp->fullBit(oldp+191,((0x100073U == vlSelfRef.inst_in)));
    __Vtemp_4[0U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[0U];
    __Vtemp_4[1U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[1U];
    __Vtemp_4[2U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[2U];
    __Vtemp_4[3U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[3U];
    __Vtemp_4[4U] = vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[4U];
    __Vtemp_4[5U] = ((0xf8000U & (vlSelfRef.inst_in 
                                  >> 5U)) | vlSelfRef.__VdfgRegularize_h2dd05df0_0_4[5U]);
    __Vtemp_4[6U] = 0U;
    bufp->fullWData(oldp+192,(__Vtemp_4),210);
    bufp->fullIData(oldp+199,(((0x1f000000U & (vlSelfRef.inst_in 
                                               << 0x11U)) 
                               | vlSelfRef.__VdfgRegularize_h2dd05df0_0_12)),32);
    bufp->fullIData(oldp+200,(((0x1f000000U & (vlSelfRef.inst_in 
                                               << 9U)) 
                               | vlSelfRef.__VdfgRegularize_h2dd05df0_0_7)),32);
    bufp->fullIData(oldp+201,(((0x1f0000U & (vlSelfRef.inst_in 
                                             >> 4U)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h2dd05df0_0_9))),24);
    bufp->fullCData(oldp+202,((0x7fU & vlSelfRef.inst_in)),7);
    bufp->fullIData(oldp+203,(((IData)(4U) + vlSelfRef.pc)),32);
}

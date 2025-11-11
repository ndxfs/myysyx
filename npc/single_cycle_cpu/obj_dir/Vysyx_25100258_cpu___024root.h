// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25100258_cpu.h for the primary calling header

#ifndef VERILATED_VYSYX_25100258_CPU___024ROOT_H_
#define VERILATED_VYSYX_25100258_CPU___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_25100258_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25100258_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*4:0*/ ysyx_25100258_cpu__DOT__src1_addr;
        CData/*4:0*/ ysyx_25100258_cpu__DOT__src2_addr;
        CData/*4:0*/ ysyx_25100258_cpu__DOT__rd;
        CData/*2:0*/ ysyx_25100258_cpu__DOT__inst_type;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__reg_wen;
        CData/*2:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__hit;
        CData/*4:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__hit;
        CData/*4:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__hit;
        CData/*4:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__hit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT____VdfgRegularize_h5ef8b7c9_0_6;
        SData/*15:0*/ __VdfgRegularize_h2dd05df0_0_9;
        VL_IN(inst_in,31,0);
        VL_OUT(pc,31,0);
        IData/*31:0*/ ysyx_25100258_cpu__DOT__src1;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__src2;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__imm;
        IData/*16:0*/ ysyx_25100258_cpu__DOT__inst_out;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__exu_data;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_IFU__DOT__pc_next;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_I;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_S;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_B;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__imm_J;
        IData/*16:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__inst_R;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__lut_out;
        IData/*16:0*/ ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__data_addi;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__op1;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__op2;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__op_u;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i;
        VlWide<6>/*174:0*/ __VdfgRegularize_h3c5bdd75_0_4;
        VlWide<3>/*69:0*/ __VdfgRegularize_h3c5bdd75_0_6;
        VlWide<6>/*174:0*/ __VdfgRegularize_h3c5bdd75_0_9;
        VlWide<6>/*174:0*/ __VdfgRegularize_h2dd05df0_0_4;
        IData/*23:0*/ __VdfgRegularize_h2dd05df0_0_7;
        IData/*23:0*/ __VdfgRegularize_h2dd05df0_0_12;
        VlWide<4>/*119:0*/ __VdfgRegularize_h2dd05df0_0_18;
        IData/*16:0*/ __Vtrigprevexpr___TOP__ysyx_25100258_cpu__DOT__inst_out__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*9:0*/, 2> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 2> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_type__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<QData/*34:0*/, 6> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_imm__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 4> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 4> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 3> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 3> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_src2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 4> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 4> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_rd__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*19:0*/, 7> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*16:0*/, 7> ysyx_25100258_cpu__DOT__u_IDU__DOT__u_MuxKey_inst_out__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 6> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 6> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_op2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*48:0*/, 1> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*16:0*/, 1> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 1> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_alu__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 7> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 7> ysyx_25100258_cpu__DOT__u_EXU__DOT__u_MuxKey_reg__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__rf;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25100258_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25100258_cpu___024root(Vysyx_25100258_cpu__Syms* symsp, const char* v__name);
    ~Vysyx_25100258_cpu___024root();
    VL_UNCOPYABLE(Vysyx_25100258_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

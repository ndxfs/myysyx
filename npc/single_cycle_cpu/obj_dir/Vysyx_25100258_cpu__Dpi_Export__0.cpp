// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_25100258_cpu.h"
#include "Vysyx_25100258_cpu__Syms.h"
#include "verilated_dpi.h"


void Vysyx_25100258_cpu::read_register(int reg_addr, int* reg_num) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25100258_cpu___024root::read_register\n"); );
    // Init
    IData/*31:0*/ reg_addr__Vcvt;
    reg_addr__Vcvt = 0;
    IData/*31:0*/ reg_num__Vcvt;
    reg_num__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("read_register");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vysyx_25100258_cpu__Vcb_read_register_t __Vcb = (Vysyx_25100258_cpu__Vcb_read_register_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    reg_addr__Vcvt = reg_addr;
    (*__Vcb)((Vysyx_25100258_cpu__Syms*)(__Vscopep->symsp()), reg_addr__Vcvt, reg_num__Vcvt);
    *reg_num = reg_num__Vcvt;
}

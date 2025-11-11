// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25100258_cpu__pch.h"
#include "Vysyx_25100258_cpu.h"
#include "Vysyx_25100258_cpu___024root.h"

void Vysyx_25100258_cpu___024root____Vdpiexp_ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__read_register_TOP(Vysyx_25100258_cpu__Syms* __restrict vlSymsp, IData/*31:0*/ reg_addr, IData/*31:0*/ &reg_num);

// FUNCTIONS
Vysyx_25100258_cpu__Syms::~Vysyx_25100258_cpu__Syms()
{
}

Vysyx_25100258_cpu__Syms::Vysyx_25100258_cpu__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25100258_cpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(951);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyx_25100258_cpu__u_RegisterFile.configure(this, name(), "ysyx_25100258_cpu.u_RegisterFile", "u_RegisterFile", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_25100258_cpu__u_RegisterFile.exportInsert(__Vfinal, "read_register", (void*)(&Vysyx_25100258_cpu___024root____Vdpiexp_ysyx_25100258_cpu__DOT__u_RegisterFile__DOT__read_register_TOP));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmux21_behavior__Syms.h"
#include "Vmux21_behavior.h"
#include "Vmux21_behavior___024root.h"

// FUNCTIONS
Vmux21_behavior__Syms::~Vmux21_behavior__Syms()
{
}

Vmux21_behavior__Syms::Vmux21_behavior__Syms(VerilatedContext* contextp, const char* namep, Vmux21_behavior* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

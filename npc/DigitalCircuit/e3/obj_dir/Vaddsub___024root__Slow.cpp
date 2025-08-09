// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddsub.h for the primary calling header

#include "Vaddsub__pch.h"
#include "Vaddsub__Syms.h"
#include "Vaddsub___024root.h"

void Vaddsub___024root___ctor_var_reset(Vaddsub___024root* vlSelf);

Vaddsub___024root::Vaddsub___024root(Vaddsub__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaddsub___024root___ctor_var_reset(this);
}

void Vaddsub___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaddsub___024root::~Vaddsub___024root() {
}

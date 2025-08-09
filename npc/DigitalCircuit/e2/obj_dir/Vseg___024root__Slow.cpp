// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vseg.h for the primary calling header

#include "Vseg__pch.h"
#include "Vseg__Syms.h"
#include "Vseg___024root.h"

void Vseg___024root___ctor_var_reset(Vseg___024root* vlSelf);

Vseg___024root::Vseg___024root(Vseg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vseg___024root___ctor_var_reset(this);
}

void Vseg___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vseg___024root::~Vseg___024root() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top___024root.h"

void Vriscv_top___024root___ctor_var_reset(Vriscv_top___024root* vlSelf);

Vriscv_top___024root::Vriscv_top___024root(Vriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_top___024root___ctor_var_reset(this);
}

void Vriscv_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vriscv_top___024root::~Vriscv_top___024root() {
}

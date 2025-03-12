// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_top__pch.h"
#include "Vriscv_top.h"
#include "Vriscv_top___024root.h"

// FUNCTIONS
Vriscv_top__Syms::~Vriscv_top__Syms()
{
}

Vriscv_top__Syms::Vriscv_top__Syms(VerilatedContext* contextp, const char* namep, Vriscv_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(64);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP___024ROOT_H_
#define VERILATED_VRISCV_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*2:0*/ riscv_top__DOT__RW_type;
    CData/*6:0*/ riscv_top__DOT__riscv_inst__DOT__opcode;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__U_type;
    CData/*3:0*/ riscv_top__DOT__riscv_inst__DOT__ALUctl;
    CData/*3:0*/ riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT__RIop;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3;
    CData/*4:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1;
    CData/*4:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2;
    CData/*4:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SLT_M;
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2;
    CData/*7:0*/ riscv_top__DOT__data_memory_inst__DOT__Rd_data_B;
    CData/*1:0*/ riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ riscv_top__DOT__data_memory_inst__DOT__Rd_data_H;
    SData/*15:0*/ riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1;
    SData/*15:0*/ riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2;
    SData/*15:0*/ riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3;
    VL_OUT(rom_addr,31,0);
    IData/*31:0*/ riscv_top__DOT__ram_addr;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump_order;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__i;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M;
    IData/*31:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result;
    IData/*31:0*/ riscv_top__DOT__data_memory_inst__DOT__Rd_data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> riscv_top__DOT__instr_memory_inst__DOT__rom;
    VlUnpacked<IData/*31:0*/, 32> riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs;
    VlUnpacked<IData/*31:0*/, 256> riscv_top__DOT__data_memory_inst__DOT__ram;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top___024root(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top___024root();
    VL_UNCOPYABLE(Vriscv_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

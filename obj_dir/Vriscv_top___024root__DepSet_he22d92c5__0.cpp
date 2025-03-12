// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top___024root.h"

void Vriscv_top___024root___eval_act(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_act\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vriscv_top___024root___nba_sequent__TOP__0(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___nba_sequent__TOP__1(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___nba_comb__TOP__0(Vriscv_top___024root* vlSelf);

void Vriscv_top___024root___eval_nba(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_nba\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vriscv_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vriscv_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vriscv_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vriscv_top___024root___nba_sequent__TOP__0(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___nba_sequent__TOP__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0;
    __VdlyVal__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0;
    __VdlyDim0__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0;
    __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v1;
    __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v1 = 0;
    IData/*31:0*/ __VdlyVal__riscv_top__DOT__data_memory_inst__DOT__ram__v0;
    __VdlyVal__riscv_top__DOT__data_memory_inst__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__riscv_top__DOT__data_memory_inst__DOT__ram__v0;
    __VdlyDim0__riscv_top__DOT__data_memory_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__riscv_top__DOT__data_memory_inst__DOT__ram__v0;
    __VdlySet__riscv_top__DOT__data_memory_inst__DOT__ram__v0 = 0;
    // Body
    __VdlySet__riscv_top__DOT__data_memory_inst__DOT__ram__v0 = 0U;
    __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0 = 0U;
    __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__i = 0x20U;
    }
    if ((0x23U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))) {
        __VdlyVal__riscv_top__DOT__data_memory_inst__DOT__ram__v0 
            = ((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                ? ((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                    ? ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                        ? ((vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                            << 0x18U) | (0xffffffU 
                                         & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data))
                        : ((0xff000000U & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                           | ((0xff0000U & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                            << 0x10U)) 
                              | (0xffffU & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data))))
                    : ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                        ? ((0xffff0000U & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                           | ((0xff00U & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                          << 8U)) | 
                              (0xffU & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data)))
                        : ((0xffffff00U & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                           | (0xffU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2))))
                : ((1U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                    ? ((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                        ? (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1) 
                            << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2))
                        : (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3) 
                            << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1)))
                    : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2));
        __VdlyDim0__riscv_top__DOT__data_memory_inst__DOT__ram__v0 
            = (0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                        >> 2U));
        __VdlySet__riscv_top__DOT__data_memory_inst__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.rst_n) {
        if ((((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                 | ((0x33U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                    | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type)))) 
             & (0U != (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd)))) {
            __VdlyVal__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0 
                = ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type)
                    ? ((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                        ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme
                        : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump)
                    : ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel)
                        ? ((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)
                        : ((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                            ? ((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                    ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)
                                    : (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B) 
                                                       >> 7U)))) 
                                        << 8U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)))
                                : ((1U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                    ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                        ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)
                                        : (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)))
                                    : vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                                   [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                                              >> 2U))]))
                            : vlSelfRef.riscv_top__DOT__ram_addr)));
            __VdlyDim0__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0 
                = vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd;
            __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0 = 1U;
        }
    } else {
        __VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v1 = 1U;
    }
    if (__VdlySet__riscv_top__DOT__data_memory_inst__DOT__ram__v0) {
        vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram[__VdlyDim0__riscv_top__DOT__data_memory_inst__DOT__ram__v0] 
            = __VdlyVal__riscv_top__DOT__data_memory_inst__DOT__ram__v0;
    }
    if (__VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0) {
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[__VdlyDim0__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0] 
            = __VdlyVal__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v0;
    }
    if (__VdlySet__riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs__v1) {
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[1U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[2U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[3U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[4U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[5U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[6U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[7U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[8U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[9U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0xaU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0xbU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0xcU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0xdU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0xeU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0xfU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x10U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x11U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x12U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x13U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x14U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x15U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x16U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x17U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x18U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x19U] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x1aU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x1bU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x1cU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x1dU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x1eU] = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0x1fU] = 0U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> Vriscv_top__ConstPool__TABLE_h4602fc21_0;

VL_INLINE_OPT void Vriscv_top___024root___nba_sequent__TOP__1(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___nba_sequent__TOP__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
        = ((IData)(vlSelfRef.rst_n) ? ((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                        ? (0xfffffffeU 
                                           & vlSelfRef.riscv_top__DOT__ram_addr)
                                        : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump_order)
            : 0U);
    vlSelfRef.rom_addr = vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out;
    vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4 
        = (3U & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                 [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                            >> 2U))] >> 0xcU));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1 
        = (0x1fU & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                    [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                               >> 2U))] >> 0xfU));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2 
        = (0x1fU & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                    [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                               >> 2U))] >> 0x14U));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd 
        = (0x1fU & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                    [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                               >> 2U))] >> 7U));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0 
        = (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
           [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                      >> 2U))] >> 0x1fU);
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0 
        = (1U & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                 [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                            >> 2U))] >> 0xeU));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1 
        = (1U & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                 [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                            >> 2U))] >> 0xdU));
    vlSelfRef.riscv_top__DOT__RW_type = (7U & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                               [(0xffU 
                                                 & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                    >> 2U))] 
                                               >> 0xcU));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode 
        = (0x7fU & vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
           [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                      >> 2U))]);
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel 
        = ((0x6fU == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
           | (0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type 
        = ((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
           | (0x17U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((3U 
                                                 == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                                | (0x13U 
                                                   == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2 
        = ((0x33U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
           | (0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3 
        = ((0x13U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
           | (0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme 
        = (((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))
            ? (((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                << 0xcU) | (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                            [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                       >> 2U))] >> 0x14U))
            : ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type)
                ? (0xfffff000U & vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                   [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                              >> 2U))]) : ((0x6fU == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                            ? (((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                                << 0x14U) 
                                               | (((0xff000U 
                                                    & vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                    [
                                                    (0xffU 
                                                     & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                        >> 2U))]) 
                                                   | (0x800U 
                                                      & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                         [
                                                         (0xffU 
                                                          & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                             >> 2U))] 
                                                         >> 9U))) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                        [
                                                        (0xffU 
                                                         & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                            >> 2U))] 
                                                        >> 0x14U))))
                                            : ((0x63U 
                                                == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                                ? (
                                                   ((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                          [
                                                          (0xffU 
                                                           & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                              >> 2U))] 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                             [
                                                             (0xffU 
                                                              & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                                 >> 2U))] 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                               [
                                                               (0xffU 
                                                                & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                                   >> 2U))] 
                                                               >> 7U)))))
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                           [
                                                           (0xffU 
                                                            & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                               >> 2U))] 
                                                           >> 0x14U)) 
                                                       | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd)))
                                                    : 0U)))));
    __Vtableidx1 = (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2) 
                     << 5U) | (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3) 
                                << 4U) | ((8U & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                 [(0xffU 
                                                   & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                      >> 2U))] 
                                                 >> 0x1bU)) 
                                          | (IData)(vlSelfRef.riscv_top__DOT__RW_type))));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT__RIop 
        = Vriscv_top__ConstPool__TABLE_h4602fc21_0[__Vtableidx1];
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump 
        = (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme 
           + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out);
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl 
        = (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2) 
            ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3))
            ? (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT__RIop)
            : (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2) 
                & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3))
                ? (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0) 
                    & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1))
                    ? 8U : (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0) 
                             ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1))
                             ? 9U : 3U)) : 1U));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump_order 
        = ((((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
             & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
            | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
               | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                   & (1U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                  | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                      & (5U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                     | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                         & (6U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                        | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            & (7U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                           | (0x6fU == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))))))))
            ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump
            : ((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2 
        = (IData)((0U == (0xcU & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr 
        = (1U & (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2) 
                  & ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl) 
                     >> 1U)) | (IData)((8U == (0xcU 
                                               & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))))));
}

VL_INLINE_OPT void Vriscv_top___024root___nba_comb__TOP__0(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___nba_comb__TOP__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1;
    riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1 = 0;
    // Body
    riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1 
        = ((0U != (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1)) 
           & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs
              [vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1] 
              >> 0x1fU));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
        = ((0U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1))
            ? 0U : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs
           [vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1]);
    if ((0U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2))) {
        vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1 = 0U;
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 = 0U;
    } else {
        vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1 
            = (0xffffU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs
               [vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2]);
        vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
            = vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs
            [vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2];
    }
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB 
        = (((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
            | ((0x23U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
               | ((0x13U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                  | (0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)))))
            ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme
            : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2);
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M 
        = ((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr))) 
           ^ vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB);
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
        = (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
           + (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M 
              + (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)));
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow 
        = (((~ (IData)(riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1)) 
            & ((1U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)) 
               & ((~ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M 
                      >> 0x1fU)) & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                    >> 0x1fU)))) | 
           (((1U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)) 
             & ((IData)(riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1) 
                & ((~ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                       >> 0x1fU)) & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M 
                                     >> 0x1fU)))) | 
            (((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)) 
              & ((IData)(riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1) 
                 & ((~ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M 
                        >> 0x1fU)) & (~ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                         >> 0x1fU))))) 
             | ((~ (IData)(riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1)) 
                & ((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)) 
                   & ((vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M 
                       & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result) 
                      >> 0x1fU))))));
    vlSelfRef.riscv_top__DOT__ram_addr = ((8U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                           ? ((4U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                                                   ? 
                                                  (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                                                    ? 
                                                   (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                                                     ? 
                                                    (VL_SHIFTL_III(32,32,6, 
                                                                   (- (IData)(
                                                                              (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                                               >> 0x1fU))), 
                                                                   (0x3fU 
                                                                    & ((IData)(0x20U) 
                                                                       - 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))))) 
                                                     | (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)))
                                                     : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)))
                                               : ((1U 
                                                   & ((1U 
                                                       & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                                       ? 
                                                      ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                                                       ^ 
                                                       (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                                        >> 0x1fU))
                                                       : 
                                                      ((IData)(
                                                               (1ULL 
                                                                & (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                                                    + 
                                                                    ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                                     + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                                                   >> 0x20U))) 
                                                       ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr))))
                                                   ? 1U
                                                   : 0U))
                                           : ((4U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                                    ? 
                                                   (~ 
                                                    (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                     | vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                                    : 
                                                   (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                    ^ vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                                    ? 
                                                   (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                    | vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)
                                                    : 
                                                   (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                                    & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)))
                                               : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result));
    vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data 
        = vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
        [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                   >> 2U))];
    vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2 
        = (0xffffU & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
           [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                      >> 2U))]);
    vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3 
        = (vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
           [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                      >> 2U))] >> 0x10U);
    if ((2U & vlSelfRef.riscv_top__DOT__ram_addr)) {
        vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B 
            = (0xffU & ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                         ? (vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                            [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                                       >> 2U))] >> 0x18U)
                         : (vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                            [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                                       >> 2U))] >> 0x10U)));
        vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H 
            = vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3;
    } else {
        vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B 
            = (0xffU & ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                         ? (vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                            [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                                       >> 2U))] >> 8U)
                         : vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                        [(0xffU & (vlSelfRef.riscv_top__DOT__ram_addr 
                                   >> 2U))]));
        vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H 
            = vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2;
    }
}

void Vriscv_top___024root___eval_triggers__act(Vriscv_top___024root* vlSelf);

bool Vriscv_top___024root___eval_phase__act(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_phase__act\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vriscv_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vriscv_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vriscv_top___024root___eval_phase__nba(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_phase__nba\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vriscv_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__nba(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__act(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_top___024root___eval(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vriscv_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("riscv_top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vriscv_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("riscv_top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vriscv_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vriscv_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vriscv_top___024root___eval_debug_assertions(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_debug_assertions\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG

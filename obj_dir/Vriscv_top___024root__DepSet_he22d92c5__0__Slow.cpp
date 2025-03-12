// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top___024root.h"

VL_ATTR_COLD void Vriscv_top___024root___eval_static(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_static\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vriscv_top___024root___eval_initial__TOP(Vriscv_top___024root* vlSelf);
VL_ATTR_COLD void Vriscv_top___024root____Vm_traceActivitySetAll(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top___024root___eval_initial(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_initial\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_top___024root___eval_initial__TOP(vlSelf);
    Vriscv_top___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vriscv_top___024root___eval_initial__TOP(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_initial__TOP\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x4e535452U;
    __Vtemp_1[2U] = 0x2e2f49U;
    VL_READMEM_N(false, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vriscv_top___024root___eval_final(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_final\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__stl(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vriscv_top___024root___eval_phase__stl(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top___024root___eval_settle(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_settle\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vriscv_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("riscv_top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vriscv_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__stl(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___dump_triggers__stl\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_top___024root___stl_sequent__TOP__0(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top___024root___eval_stl(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_stl\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vriscv_top___024root___stl_sequent__TOP__0(vlSelf);
        Vriscv_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> Vriscv_top__ConstPool__TABLE_h4602fc21_0;

VL_ATTR_COLD void Vriscv_top___024root___stl_sequent__TOP__0(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___stl_sequent__TOP__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1;
    riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__Adder__DOT____VdfgRegularize_h86ce9ae1_0_1 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB 
        = (((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
            | ((0x23U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
               | ((0x13U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                  | (0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)))))
            ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme
            : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2);
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

VL_ATTR_COLD void Vriscv_top___024root___eval_triggers__stl(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD bool Vriscv_top___024root___eval_phase__stl(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_phase__stl\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vriscv_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vriscv_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__act(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___dump_triggers__act\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__nba(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___dump_triggers__nba\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_top___024root____Vm_traceActivitySetAll(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root____Vm_traceActivitySetAll\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vriscv_top___024root___ctor_var_reset(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->rom_addr = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__ram_addr = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__RW_type = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->riscv_top__DOT__instr_memory_inst__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_top__DOT__riscv_inst__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__U_type = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__ALUctl = VL_RAND_RESET_I(4);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT__RIop = VL_RAND_RESET_I(4);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1 = VL_RAND_RESET_I(5);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2 = VL_RAND_RESET_I(5);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd = VL_RAND_RESET_I(5);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump_order = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SLT_M = VL_RAND_RESET_I(1);
    vlSelf->riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->riscv_top__DOT__data_memory_inst__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_top__DOT__data_memory_inst__DOT__Rd_data = VL_RAND_RESET_I(32);
    vlSelf->riscv_top__DOT__data_memory_inst__DOT__Rd_data_B = VL_RAND_RESET_I(8);
    vlSelf->riscv_top__DOT__data_memory_inst__DOT__Rd_data_H = VL_RAND_RESET_I(16);
    vlSelf->riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1 = VL_RAND_RESET_I(16);
    vlSelf->riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2 = VL_RAND_RESET_I(16);
    vlSelf->riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3 = VL_RAND_RESET_I(16);
    vlSelf->riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

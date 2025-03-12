// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


void Vriscv_top___024root__trace_chg_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_chg_0\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv_top___024root__trace_chg_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_chg_0_sub_0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+33,(vlSelfRef.riscv_top__DOT__ram_addr),32);
        bufp->chgIData(oldp+34,(vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                           >> 2U))]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2),32);
        bufp->chgBit(oldp+36,((0x23U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgBit(oldp+37,((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgCData(oldp+38,(vlSelfRef.riscv_top__DOT__RW_type),3);
        bufp->chgIData(oldp+39,(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data),32);
        bufp->chgIData(oldp+40,(((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                                  ? ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                                      ? ((vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                          << 0x18U) 
                                         | (0xffffffU 
                                            & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data))
                                      : ((0xff000000U 
                                          & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                                         | ((0xff0000U 
                                             & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data))))
                                  : ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                                      ? ((0xffff0000U 
                                          & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                                         | ((0xff00U 
                                             & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                                << 8U)) 
                                            | (0xffU 
                                               & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data)))
                                      : ((0xffffff00U 
                                          & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                                         | (0xffU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2))))),32);
        bufp->chgIData(oldp+41,(((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                                  ? (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1) 
                                      << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2))
                                  : (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3) 
                                      << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1)))),32);
        bufp->chgIData(oldp+42,(((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                  ? ((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                                      ? ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                                          ? ((vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                              << 0x18U) 
                                             | (0xffffffU 
                                                & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data))
                                          : ((0xff000000U 
                                              & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                                             | ((0xff0000U 
                                                 & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data))))
                                      : ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                                          ? ((0xffff0000U 
                                              & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                                             | ((0xff00U 
                                                 & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data)))
                                          : ((0xffffff00U 
                                              & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                                             | (0xffU 
                                                & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2))))
                                  : ((1U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                      ? ((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                                          ? (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2))
                                          : (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1)))
                                      : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2))),32);
        bufp->chgCData(oldp+43,(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B),8);
        bufp->chgSData(oldp+44,(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H),16);
        bufp->chgIData(oldp+45,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                  ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)
                                  : (((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B) 
                                                     >> 7U)))) 
                                      << 8U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)))),32);
        bufp->chgIData(oldp+46,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                  ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)
                                  : (((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H) 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)))),32);
        bufp->chgIData(oldp+47,((0x3ffffffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                               >> 2U))),32);
        bufp->chgCData(oldp+48,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode),7);
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                     [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                >> 2U))] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+50,(((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               | ((0x23U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                  | ((0x13U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                     | (0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)))))));
        bufp->chgBit(oldp+51,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel) 
                               | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                  | ((0x33U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                     | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type))))));
        bufp->chgBit(oldp+52,((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgBit(oldp+53,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type));
        bufp->chgBit(oldp+54,((0x6fU == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgBit(oldp+55,((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgBit(oldp+56,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
        bufp->chgBit(oldp+57,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               & (1U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
        bufp->chgBit(oldp+58,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
        bufp->chgBit(oldp+59,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               & (5U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
        bufp->chgBit(oldp+60,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               & (6U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
        bufp->chgBit(oldp+61,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               & (7U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
        bufp->chgCData(oldp+62,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl),4);
        bufp->chgCData(oldp+63,((((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2) 
                                  << 1U) | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3))),2);
        bufp->chgCData(oldp+64,((((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0) 
                                  & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1))
                                  ? 8U : (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0) 
                                           ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1))
                                           ? 9U : 3U))),4);
        bufp->chgCData(oldp+65,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT__RIop),4);
        bufp->chgBit(oldp+66,((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgBit(oldp+67,((0x33U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgBit(oldp+68,((0x13U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgBit(oldp+69,((0x17U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
        bufp->chgCData(oldp+70,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1),5);
        bufp->chgCData(oldp+71,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2),5);
        bufp->chgCData(oldp+72,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd),5);
        bufp->chgIData(oldp+73,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme),32);
        bufp->chgIData(oldp+74,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1),32);
        bufp->chgBit(oldp+75,((1U & (~ (IData)((0U 
                                                != vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result))))));
        bufp->chgIData(oldp+76,(((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)),32);
        bufp->chgIData(oldp+77,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump),32);
        bufp->chgIData(oldp+78,(((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                  ? (0xfffffffeU & vlSelfRef.riscv_top__DOT__ram_addr)
                                  : ((((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                       & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                      | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                          & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                         | (((0x63U 
                                              == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                            | (((0x63U 
                                                 == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                                & (5U 
                                                   == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                               | (((0x63U 
                                                    == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                                  | (((0x63U 
                                                       == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                                      & (7U 
                                                         == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                                     | (0x6fU 
                                                        == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))))))))
                                      ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump
                                      : ((IData)(4U) 
                                         + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)))),32);
        bufp->chgIData(oldp+79,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out),32);
        bufp->chgBit(oldp+80,((((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                               | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                   & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                  | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                      & (1U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                     | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                         & (5U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                        | (((0x63U 
                                             == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                            & (6U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                           | (((0x63U 
                                                == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                               & (7U 
                                                  == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                              | (0x6fU 
                                                 == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))))))))));
        bufp->chgIData(oldp+81,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB),32);
        bufp->chgBit(oldp+82,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel));
        bufp->chgIData(oldp+83,(((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                  ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme
                                  : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump)),32);
        bufp->chgIData(oldp+84,(((((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                   & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                  | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                      & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                     | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                         & (1U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                        | (((0x63U 
                                             == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                            & (5U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                           | (((0x63U 
                                                == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                               & (6U 
                                                  == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                              | (((0x63U 
                                                   == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                                  & (7U 
                                                     == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                                 | (0x6fU 
                                                    == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))))))))
                                  ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump
                                  : ((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out))),32);
        bufp->chgIData(oldp+85,((0xfffffffeU & vlSelfRef.riscv_top__DOT__ram_addr)),32);
        bufp->chgBit(oldp+86,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                               & ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl) 
                                  & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2)))));
        bufp->chgBit(oldp+87,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr));
        bufp->chgBit(oldp+88,((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))));
        bufp->chgBit(oldp+89,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl) 
                               & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2))));
        bufp->chgCData(oldp+90,((3U & ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl) 
                                       >> 2U))),2);
        bufp->chgCData(oldp+91,((3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))),2);
        bufp->chgIData(oldp+92,(((2U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                  ? ((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                      ? (~ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                            | vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                      : (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                         ^ vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                  : ((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                      ? (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                         | vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)
                                      : (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                         & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)))),32);
        bufp->chgCData(oldp+93,((0x1fU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)),5);
        bufp->chgIData(oldp+94,(((0U == (3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                                  ? (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                     << (0x1fU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                  : ((1U == (3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                                      ? (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                         >> (0x1fU 
                                             & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                      : ((2U == (3U 
                                                 & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                                          ? (VL_SHIFTL_III(32,32,6, 
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
                                          : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)))),32);
        bufp->chgIData(oldp+95,((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))),32);
        bufp->chgIData(oldp+96,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M),32);
        bufp->chgBit(oldp+97,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                               + ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                  + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                              >> 0x20U))))));
        bufp->chgBit(oldp+98,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow));
        bufp->chgIData(oldp+99,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result),32);
        bufp->chgIData(oldp+100,(((1U & ((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                          ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                                             ^ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                                >> 0x1fU))
                                          : ((IData)(
                                                     (1ULL 
                                                      & (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                                          + 
                                                          ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                           + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr))))
                                   ? 1U : 0U)),32);
        bufp->chgBit(oldp+101,((1U & ((IData)((1ULL 
                                               & (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                                   + 
                                                   ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                    + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                                  >> 0x20U))) 
                                      ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))));
        bufp->chgBit(oldp+102,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                                ^ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                   >> 0x1fU))));
        bufp->chgBit(oldp+103,((1U & ((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                       ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                                          ^ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                             >> 0x1fU))
                                       : ((IData)((1ULL 
                                                   & (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                                       + 
                                                       ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                        + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                                      >> 0x20U))) 
                                          ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr))))));
        bufp->chgCData(oldp+104,((0x3fU & ((IData)(0x20U) 
                                           - (3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))))),6);
        bufp->chgBit(oldp+105,(((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
        bufp->chgIData(oldp+106,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                   << 0xcU) | (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                               [(0xffU 
                                                 & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                    >> 2U))] 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+107,((0xfffff000U & vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                  [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                             >> 2U))])),32);
        bufp->chgIData(oldp+108,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                   << 0x14U) | (((0xff000U 
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
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+109,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                   << 0xcU) | ((0x800U 
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
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+110,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                       >> 2U))] 
                                                   >> 0x14U)) 
                                               | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd)))),32);
        bufp->chgBit(oldp+111,((0x100073U == vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                           >> 2U))])));
    }
    bufp->chgBit(oldp+112,(vlSelfRef.clk));
    bufp->chgBit(oldp+113,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+114,(vlSelfRef.rom_addr),32);
    bufp->chgIData(oldp+115,(((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                               ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                   ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)
                                   : (((- (IData)((1U 
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
                                             >> 2U))]))),32);
    bufp->chgIData(oldp+116,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type)
                               ? ((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                   ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme
                                   : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump)
                               : ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel)
                                   ? ((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)
                                   : ((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                       ? ((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                           ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                               ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B) 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)))
                                           : ((1U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                               ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                                   ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)))
                                               : vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                                              [(0xffU 
                                                & (vlSelfRef.riscv_top__DOT__ram_addr 
                                                   >> 2U))]))
                                       : vlSelfRef.riscv_top__DOT__ram_addr)))),32);
    bufp->chgIData(oldp+117,(((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
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
                               : vlSelfRef.riscv_top__DOT__ram_addr)),32);
    bufp->chgIData(oldp+118,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel)
                               ? ((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)
                               : ((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                   ? ((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                       ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                           ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)
                                           : (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)))
                                       : ((1U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                           ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                               ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)))
                                           : vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                                          [(0xffU & 
                                            (vlSelfRef.riscv_top__DOT__ram_addr 
                                             >> 2U))]))
                                   : vlSelfRef.riscv_top__DOT__ram_addr))),32);
}

void Vriscv_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_cleanup\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

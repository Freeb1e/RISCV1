// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"rom_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("riscv_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"rom_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"ram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"Rd_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"Wr_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"W_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"R_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"RW_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("data_memory_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"W_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"R_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"RW_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"Rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"addr_ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"Wr_data_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"Wr_data_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"Wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"Rd_data_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"Rd_data_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"Rd_data_B_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"Rd_data_H_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_memory_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+115,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"addrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("riscv_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"Rd_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"rom_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"Wr_mem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+37,0,"W_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"R_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"ram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"RW_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"U_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"ALUctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"U_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"bltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"bgeu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"RW_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"ALUctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"ALUop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alu_control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"ALUop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"ALUctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+65,0,"branchop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"RIop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("main_control_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+38,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"ALUop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+37,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"U_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"bltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"bgeu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"RW_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+67,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"R_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("datapath_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"MemtoReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"U_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"ALUctl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"Rd_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"rom_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"Wr_mem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"ALU_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"func7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"Rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"Rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"imme",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"Wr_reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"Rd_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"Rd_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"pc_order",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"pc_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"pc_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"pc_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"ALU_DB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"WB_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"reg_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"Wr_reg_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"Wr_reg_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"pc_jump_order",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"pc_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ALU_data_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WB_data_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Wr_reg_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"ALU_DA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"ALU_DB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"ALU_CTL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+76,0,"ALU_ZERO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"ALU_OverFlow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"ALU_DC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"SUBctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"SIGctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"Ovctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"Opctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"Logicctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"Shiftctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"logic_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"ALU_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+95,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"BIT_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"XOR_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"ADD_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"ADD_OverFlow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"ADD_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"SLT_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"LESS_M1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"LESS_M2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"LESS_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"SLT_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"ALU_CTL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+98,0,"ADD_carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"ADD_OverFlow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"ADD_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"ADD_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Shifter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"ALU_DA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"ALU_SHIFT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+92,0,"Shiftctr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"shift_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"shift_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instr_decode_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"func7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"Rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"Rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"Rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+74,0,"imme",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"I_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"U_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"J_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"B_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"S_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"I_imme",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"U_imme",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"J_imme",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"B_imme",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"S_imme",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("jalr_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+77,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("lui_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_jalr_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+78,0,"data1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"data2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_reg_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"pc_new",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("registers_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"W_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"Rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"Rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"Rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"Wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"Rd_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"Rd_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+33,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_top(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_top\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vriscv_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv_top___024root__trace_register(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_register\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vriscv_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vriscv_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vriscv_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vriscv_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_const_0\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_const_0_sub_0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+120,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SLT_M));
}

VL_ATTR_COLD void Vriscv_top___024root__trace_full_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_full_0\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_full_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_full_0_sub_0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__registers_inst__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelfRef.riscv_top__DOT__ram_addr),32);
    bufp->fullIData(oldp+35,(vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                             [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2),32);
    bufp->fullBit(oldp+37,((0x23U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullBit(oldp+38,((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullCData(oldp+39,(vlSelfRef.riscv_top__DOT__RW_type),3);
    bufp->fullIData(oldp+40,(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data),32);
    bufp->fullIData(oldp+41,(((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                               ? ((1U & vlSelfRef.riscv_top__DOT__ram_addr)
                                   ? ((vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                       << 0x18U) | 
                                      (0xffffffU & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data))
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
                                      | ((0xff00U & 
                                          (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2 
                                           << 8U)) 
                                         | (0xffU & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data)))
                                   : ((0xffffff00U 
                                       & vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data) 
                                      | (0xffU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data2))))),32);
    bufp->fullIData(oldp+42,(((2U & vlSelfRef.riscv_top__DOT__ram_addr)
                               ? (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1) 
                                   << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_2))
                               : (((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_3) 
                                   << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_1)))),32);
    bufp->fullIData(oldp+43,(((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
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
    bufp->fullCData(oldp+44,(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B),8);
    bufp->fullSData(oldp+45,(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H),16);
    bufp->fullIData(oldp+46,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                               ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)
                               : (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B) 
                                                >> 7U)))) 
                                   << 8U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)))),32);
    bufp->fullIData(oldp+47,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                               ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)
                               : (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H) 
                                                >> 0xfU)))) 
                                   << 0x10U) | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)))),32);
    bufp->fullIData(oldp+48,((0x3ffffffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                            >> 2U))),32);
    bufp->fullCData(oldp+49,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode),7);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                  [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                             >> 2U))] 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+51,(((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            | ((0x23U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                               | ((0x13U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                  | (0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)))))));
    bufp->fullBit(oldp+52,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel) 
                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                               | ((0x33U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                  | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type))))));
    bufp->fullBit(oldp+53,((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullBit(oldp+54,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type));
    bufp->fullBit(oldp+55,((0x6fU == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullBit(oldp+56,((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullBit(oldp+57,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
    bufp->fullBit(oldp+58,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            & (1U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
    bufp->fullBit(oldp+59,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
    bufp->fullBit(oldp+60,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            & (5U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
    bufp->fullBit(oldp+61,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            & (6U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
    bufp->fullBit(oldp+62,(((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                            & (7U == (IData)(vlSelfRef.riscv_top__DOT__RW_type)))));
    bufp->fullCData(oldp+63,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl),4);
    bufp->fullCData(oldp+64,((((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_2) 
                               << 1U) | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_3))),2);
    bufp->fullCData(oldp+65,((((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0) 
                               & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1))
                               ? 8U : (((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0) 
                                        ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_1))
                                        ? 9U : 3U))),4);
    bufp->fullCData(oldp+66,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT__RIop),4);
    bufp->fullBit(oldp+67,((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullBit(oldp+68,((0x33U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullBit(oldp+69,((0x13U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullBit(oldp+70,((0x17U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))));
    bufp->fullCData(oldp+71,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs1),5);
    bufp->fullCData(oldp+72,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rs2),5);
    bufp->fullCData(oldp+73,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd),5);
    bufp->fullIData(oldp+74,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme),32);
    bufp->fullIData(oldp+75,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1),32);
    bufp->fullBit(oldp+76,((1U & (~ (IData)((0U != vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result))))));
    bufp->fullIData(oldp+77,(((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)),32);
    bufp->fullIData(oldp+78,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump),32);
    bufp->fullIData(oldp+79,(((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                               ? (0xfffffffeU & vlSelfRef.riscv_top__DOT__ram_addr)
                               : ((((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                    & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                   | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                       & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                      | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                          & (1U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
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
                                   : ((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)))),32);
    bufp->fullIData(oldp+80,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out),32);
    bufp->fullBit(oldp+81,((((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                             & (0U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                            | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                & (4U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                               | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                   & (1U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                  | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                      & (5U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                     | (((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                         & (6U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                        | (((0x63U 
                                             == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                                            & (7U == (IData)(vlSelfRef.riscv_top__DOT__RW_type))) 
                                           | (0x6fU 
                                              == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))))))))));
    bufp->fullIData(oldp+82,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB),32);
    bufp->fullBit(oldp+83,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel));
    bufp->fullIData(oldp+84,(((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                               ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme
                               : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump)),32);
    bufp->fullIData(oldp+85,(((((0x63U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
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
                                                 == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))))))))
                               ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump
                               : ((IData)(4U) + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out))),32);
    bufp->fullIData(oldp+86,((0xfffffffeU & vlSelfRef.riscv_top__DOT__ram_addr)),32);
    bufp->fullBit(oldp+87,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                            & ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl) 
                               & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2)))));
    bufp->fullBit(oldp+88,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr));
    bufp->fullBit(oldp+89,((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))));
    bufp->fullBit(oldp+90,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl) 
                            & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT____VdfgRegularize_h5f12ffbc_0_2))));
    bufp->fullCData(oldp+91,((3U & ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+92,((3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))),2);
    bufp->fullIData(oldp+93,(((2U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
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
    bufp->fullCData(oldp+94,((0x1fU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)),5);
    bufp->fullIData(oldp+95,(((0U == (3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                               ? (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                  << (0x1fU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                               : ((1U == (3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
                                   ? (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1 
                                      >> (0x1fU & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB))
                                   : ((2U == (3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl)))
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
                                             >> (0x1fU 
                                                 & vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__ALU_DB)))
                                       : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)))),32);
    bufp->fullIData(oldp+96,((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))),32);
    bufp->fullIData(oldp+97,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M),32);
    bufp->fullBit(oldp+98,((1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                                   + 
                                                   ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                    + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                                  >> 0x20U))))));
    bufp->fullBit(oldp+99,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow));
    bufp->fullIData(oldp+100,(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result),32);
    bufp->fullIData(oldp+101,(((1U & ((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
                                       ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                                          ^ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                             >> 0x1fU))
                                       : ((IData)((1ULL 
                                                   & (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                                       + 
                                                       ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                        + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                                      >> 0x20U))) 
                                          ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr))))
                                ? 1U : 0U)),32);
    bufp->fullBit(oldp+102,((1U & ((IData)((1ULL & 
                                            (((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd_data1)) 
                                              + ((QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__XOR_M)) 
                                                 + (QData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))) 
                                             >> 0x20U))) 
                                   ^ (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__SUBctr)))));
    bufp->fullBit(oldp+103,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_OverFlow) 
                             ^ (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__alu_inst__DOT__ADD_result 
                                >> 0x1fU))));
    bufp->fullBit(oldp+104,((1U & ((1U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))
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
    bufp->fullCData(oldp+105,((0x3fU & ((IData)(0x20U) 
                                        - (3U & (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__ALUctl))))),6);
    bufp->fullBit(oldp+106,(((0x67U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode)) 
                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))));
    bufp->fullIData(oldp+107,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                << 0xcU) | (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                            [(0xffU 
                                              & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                 >> 2U))] 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+108,((0xfffff000U & vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                               [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                          >> 2U))])),32);
    bufp->fullIData(oldp+109,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                               [(0xffU 
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
    bufp->fullIData(oldp+110,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                [(0xffU 
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
    bufp->fullIData(oldp+111,((((- (IData)((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__instr_decode_inst__DOT____VdfgRegularize_h0a5aaa2c_0_0))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                                                [(0xffU 
                                                  & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                                     >> 2U))] 
                                                >> 0x14U)) 
                                            | (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__Rd)))),32);
    bufp->fullBit(oldp+112,((0x100073U == vlSelfRef.riscv_top__DOT__instr_memory_inst__DOT__rom
                             [(0xffU & (vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out 
                                        >> 2U))])));
    bufp->fullBit(oldp+113,(vlSelfRef.clk));
    bufp->fullBit(oldp+114,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+115,(vlSelfRef.rom_addr),32);
    bufp->fullIData(oldp+116,(((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
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
                                              >> 2U))]))),32);
    bufp->fullIData(oldp+117,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__U_type)
                                ? ((0x37U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                    ? vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__imme
                                    : vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_jump)
                                : ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel)
                                    ? ((IData)(4U) 
                                       + vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__pc_out)
                                    : ((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
                                        ? ((0U == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
                                            ? ((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__control_inst__DOT__alu_control_inst__DOT____VdfgRegularize_h06006692_0_0)
                                                ? (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_B)))
                                            : ((1U 
                                                == (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT____VdfgRegularize_h69f107be_0_4))
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
    bufp->fullIData(oldp+118,(((3U == (IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__opcode))
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
    bufp->fullIData(oldp+119,(((IData)(vlSelfRef.riscv_top__DOT__riscv_inst__DOT__datapath_inst__DOT__reg_sel)
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
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__Rd_data_H)))
                                            : vlSelfRef.riscv_top__DOT__data_memory_inst__DOT__ram
                                           [(0xffU 
                                             & (vlSelfRef.riscv_top__DOT__ram_addr 
                                                >> 2U))]))
                                    : vlSelfRef.riscv_top__DOT__ram_addr))),32);
}

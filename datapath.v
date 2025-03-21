`timescale 1ns / 1ps
module datapath(
	input 	clk,
	input   rst_n,
	input   [31:0]instr,


	input   MemtoReg,
	input   ALUSrc,
	input   RegWrite,
	input   lui,
	input   U_type,
	input   jal,
	input   jalr,
	input   beq,
	input   bne,
	input   blt,
	input   bge,
	input   bltu,
	input   bgeu,
	input   [3:0]ALUctl,
	
	input [31:0]Rd_mem_data,
	output  [31:0]rom_addr,
	output [31:0]Wr_mem_data,
	output [31:0]ALU_result,
	output [6:0]opcode,
	output [2:0]func3,
	output func7
	
	
    );
	
	
	
	
	
	
	wire [4:0]Rs1;
	wire [4:0]Rs2;
	wire [4:0]Rd;
	wire [31:0]imme;
	
	wire [31:0] Wr_reg_data;
	wire [31:0] Rd_data1;
	wire [31:0] Rd_data2;
	
	wire zero;
	
	wire [31:0]pc_order;
	wire [31:0]pc_jump;
	
	wire   [31:0]pc_new;
	wire [31:0]pc_out;
	
	wire jump_flag;
	assign jump_flag=beq | bne | blt | bge | bltu | bgeu | jal;
	wire [31:0]ALU_DB;
	wire [31:0]WB_data;
	
	wire reg_sel;
	wire [31:0]Wr_reg_data1;
	wire [31:0]Wr_reg_data2;
	wire [31:0]pc_jump_order;
	wire [31:0]pc_jalr;
	
	
	assign reg_sel=jal | jalr ;
	assign Wr_mem_data=Rd_data2;
	assign rom_addr=pc_out[31:0];
	assign pc_jalr={ALU_result[31:1],1'b0};
	
	pc_reg pc_reg_inst (
    .clk(clk), 
    .rst_n(rst_n), 
    .pc_new(pc_new), 
    .pc_out(pc_out)
    );

	
	instr_decode instr_decode_inst (
    .instr(instr), 
    .opcode(opcode), 
    .func3(func3), 
    .func7(func7), 
    .Rs1(Rs1), 
    .Rs2(Rs2), 
    .Rd(Rd), 
    .imme(imme)
    );
	
    registers registers_inst (
    .clk(clk), 
    .W_en(RegWrite), 
    .Rs1(Rs1), 
    .Rs2(Rs2), 
    .Rd(Rd), 
    .Wr_data(Wr_reg_data), 
    .Rd_data1(Rd_data1), 
    .Rd_data2(Rd_data2),
    .rst_n(rst_n)
    );

	
	alu alu_inst (
    .ALU_DA(Rd_data1), 
    .ALU_DB(ALU_DB), 
    .ALU_CTL(ALUctl), 
    .ALU_ZERO(zero), 
    .ALU_OverFlow(), 
    .ALU_DC(ALU_result)
    );
/*
	branch_judge branch_judge_inst (
    .beq(beq), 
    .bne(bne), 
    .blt(blt), 
    .bge(bge), 
    .bltu(bltu), 
    .bgeu(bgeu), 
    .jal(jal), 
    .jalr(jalr), 
    .zero(zero), 
    .ALU_result(ALU_result), 
    .jump_flag(jump_flag)
    );
*/
	

	
//pc+4	
	/*cla_adder32 pc_adder_4 (
    .A(pc_out), 
    .B(32'd4), 
    .cin(1'd0), 
    .result(pc_order), 
    .cout()
    );*/
	
assign pc_order=pc_out+32'd4;
/*	cla_adder32 pc_adder_imme (
    .A(pc_out), 
    .B(imme), 
    .cin(1'd0), 
    .result(pc_jump), 
    .cout()
    );*/
	
assign pc_jump=pc_out+imme;

	mux pc_mux (
    .data1(pc_jump), 
    .data2(pc_order), 
    .sel(jump_flag), 
    .dout(pc_jump_order)
    );

	mux pc_jalr_mux (
    .data1(pc_jalr), 
    .data2(pc_jump_order), 
    .sel(jalr), 
    .dout(pc_new)
    );

	
	

	mux ALU_data_mux (
    .data1(imme), 
    .data2(Rd_data2), 
    .sel(ALUSrc), 
    .dout(ALU_DB)
    );
	
	

	mux WB_data_mux (
    .data1(Rd_mem_data), 
    .data2(ALU_result), 
    .sel(MemtoReg), 
    .dout(WB_data)
    );
	
	

	mux jalr_mux (
    .data1(pc_order), 
    .data2(WB_data), 
    .sel(reg_sel), 
    .dout(Wr_reg_data2)
    );
	
	mux lui_mux (
    .data1(imme), 
    .data2(pc_jump), 
    .sel(lui), 
    .dout(Wr_reg_data1)
    );
	
	mux Wr_reg_mux (
    .data1(Wr_reg_data1), 
    .data2(Wr_reg_data2), 
    .sel(U_type), 
    .dout(Wr_reg_data)
    );

endmodule


module mux (
    input [31:0] data1,
    input [31:0] data2,
    input sel,
    output [31:0] dout
);
    assign dout = sel ? data1 : data2;
endmodule

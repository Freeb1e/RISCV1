`include "define.v"
module data_memory(
	clk,
	rst_n,
	W_en,
	R_en,
	addr,
	RW_type,
	din,
	dout
    );
	
	
	input clk;
	input rst_n;
	
	input W_en;
	input R_en;
	
	input [31:0]addr;
	input [2:0]RW_type;

	input [31:0]din;
	output [31:0]dout;


	reg [31:0]ram[255:0];
	
	wire [31:0]Rd_data;
	wire [31:0]addr_ram;
	assign addr_ram=addr;
//
	
	
	reg [31:0] Wr_data_B;//字节拼接
	wire [31:0] Wr_data_H;//半字拼接
	
	wire [31:0]Wr_data;
	
	
	assign Rd_data=ram[addr_ram[9:2]];

always@(*)
	begin
		case(addr_ram[1:0])
			2'b00:Wr_data_B={Rd_data[31:8],din[7:0]};
			2'b01:Wr_data_B={Rd_data[31:16],din[7:0],Rd_data[7:0]};
			2'b10:Wr_data_B={Rd_data[31:24],din[7:0],Rd_data[15:0]};
			2'b11:Wr_data_B={din[7:0],Rd_data[23:0]};
		endcase
	end

assign Wr_data_H=(addr_ram[1]) ? {din[15:0],Rd_data[15:0]} : {Rd_data[31:16],din[15:0]} ;
	
///根据写类型，选择写入的数捿

assign Wr_data=(RW_type[1:0]==2'b00) ? Wr_data_B :( (RW_type[1:0]==2'b01) ? Wr_data_H : din   );

///上升沿写入数捿

always@(posedge clk)
begin
	if(W_en)
		ram[addr_ram[9:2]]<=Wr_data;
end

 
//读部刿


reg [7:0]Rd_data_B;
wire [15:0]Rd_data_H;

wire [31:0] Rd_data_B_ext;
wire [31:0] Rd_data_H_ext;


always@(*)
begin
	case(addr_ram[1:0])
		2'b00:Rd_data_B=Rd_data[7:0];
		2'b01:Rd_data_B=Rd_data[15:8];
		2'b10:Rd_data_B=Rd_data[23:16];
		2'b11:Rd_data_B=Rd_data[31:24];
	endcase
end
		
assign Rd_data_H=(addr_ram[1])? Rd_data[31:16]:Rd_data[15:0];

///扩展丿32使
assign Rd_data_B_ext=(RW_type[2]) ? {24'd0,Rd_data_B} : {{24{Rd_data_B[7]}},Rd_data_B};

assign Rd_data_H_ext=(RW_type[2]) ? {16'd0,Rd_data_H} : {{16{Rd_data_H[15]}},Rd_data_H};



assign dout=(RW_type[1:0]==2'b00) ? Rd_data_B_ext : ((RW_type[1:0]==2'b01) ? Rd_data_H_ext : Rd_data );


endmodule

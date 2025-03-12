`timescale 1ns / 1ps
module instr_memory(
	addr,
	instr
    );
	input [31:0]addr;
	output [31:0]instr;
	wire [31:0] addrs;
    
	reg[31:0] rom[255:0];
	assign addrs = {6'h80, addr[27:2]};
    //rom进行初始化
    initial begin
        //$readmemb("./rom_binary_file.txt", rom);
        //$readmemh("rom_hex_file.txt", rom);
        $readmemb("./INSTR.txt", rom);
    end
	
    assign instr = rom[addrs];

endmodule

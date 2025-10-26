module ysyx_25100258_IFU(
	input			clk,
	input			rst,
	input	[31:0]	inst_in,
	output	[31:0]	inst,
	output	[31:0]	pc

);

wire	[31:0]	pc_next;
assign	pc_next = pc + 32'd4;
assign	inst	= inst_in;
ysyx_25100258_Reg #(.WIDTH(32), .RESET_VAL(32'h80000000)) u_Reg(
	.clk(clk),
	.rst(rst),
	.din(pc_next),
	.dout(pc),
	.wen(1'b1)
);

endmodule

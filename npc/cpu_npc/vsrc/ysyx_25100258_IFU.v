module ysyx_25100258_IFU(
	input			clk,
	input			rst,
	input	[31:0]	inst_in,
	input	[31:0]	nextpc,
	output	[31:0]	inst,
	output	[31:0]	pc

);

assign	inst	= inst_in;
ysyx_25100258_Reg #(.WIDTH(32), .RESET_VAL(32'h80000000)) u_Reg(
	.clk(clk),
	.rst(rst),
	.din(nextpc),
	.dout(pc),
	.wen(1'b1)
);

endmodule

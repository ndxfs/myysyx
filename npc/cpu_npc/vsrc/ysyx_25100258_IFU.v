module ysyx_25100258_IFU(
	input			clk,
	input			rst,
	input	[31:0]	nextpc,
	output	reg [31:0]	inst,
	output	reg [31:0]	pc

);

import "DPI-C" function int cpu_inst_fetch(input int pc);

always @(posedge clk)
begin
	if(rst)
	begin
		inst <= cpu_inst_fetch(32'h80000000);
		pc <= 32'h80000000;
	end
	else
	begin
		inst <= cpu_inst_fetch(nextpc);
		pc <= nextpc;
	end
end



/*ysyx_25100258_Reg #(.WIDTH(32), .RESET_VAL(32'h80000000)) u_Reg(
	.clk(clk),
	.rst(rst),
	.din(nextpc),
	.dout(pc),
	.wen(1'b1)
);*/

endmodule

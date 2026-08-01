module ysyx_25100258_RegisterFile  (
  input clk,
  input rst,
  input [31:0] wdata,
  input [4:0] waddr,//riscv32 32个寄存器
  input wen,
  input [4:0] raddr1,
  input [4:0] raddr2,
  output [31:0] rdata1,
  output [31:0] rdata2
);
  reg [31:0] rf [31:0];

`ifndef SYNTHESIS
  export "DPI-C" function read_register;

  function void read_register;
		input int reg_addr;
		output int reg_num;
		reg_num = rf[reg_addr];
  endfunction
`endif    
  //写入
  always @(posedge clk) begin
	if (rst)
	begin
		integer i;
		for(i = 0; i < 32; i = i+1 )
		   rf[i] <= 32'd0;
	end
	else
	begin
		if (wen && waddr != 5'b0) rf[waddr] <= wdata;
	end
  end
  //读出
  assign rdata1 = (raddr1 == 5'b0) ? 32'd0 : rf[raddr1]; 
  assign rdata2 = (raddr2 == 5'b0) ? 32'd0 : rf[raddr2];
endmodule

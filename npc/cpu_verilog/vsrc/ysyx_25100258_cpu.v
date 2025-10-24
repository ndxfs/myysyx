module ysyx_25100258_cpu(
	input			clk,
	input			rst,
	input	[31:0]	inst,
	output	[31:0]	pc,
	//output	[31:0]	data_out,
	//output	[31:0]	addr
);

	ysyx_25100258_IFU u_IFU(
		.clk(clk),
		.rst(rst),
		.inst(inst),
		.pc(pc)
	);

	wire	[4:0]	src1_addr;
	wire	[31:0]	src1;
	wire	[4:0]	src2_addr;
	wire	[31:0]	src2;
	wire	[4:0]	rd;
	wire	[31:0]	imm;
	wire	[31:0]	inst_out;
	wire	[2:0]	type;
	ysyx_25100258_IDU u_IDU(
		.inst(inst),
		.src1_addr(src1_addr),
		.src2_addr(src2_addr),
		.rd(rd),
		.imm(imm),
		.inst_out(inst_out),
		.type(type)
	);

	wire			reg_wen;
	wire	[31:0]	exu_data;
	ysyx_25100258_EXU u_EXU(
		.inst_out(inst_out),	
		.type(type),
		.src1(src1),
		.src2(src2),
		.rd(rd),
		.imm(imm),
		.reg_wen(reg_wen),
		.alu_data(exu_data)

	);
	
	ysyx_25100258_RegisterFile #(5, 32) u_RegisterFile(
		.clk(clk),
		.rst(rst),
		.wdata(exu_data),
		.waddr(rd),
		.wen(reg_wen),
		.raddr1(src1_addr),
		.rdata1(src1),
		.raddr2(src2_addr),
		.rdata2(src2)
	);





endmodule

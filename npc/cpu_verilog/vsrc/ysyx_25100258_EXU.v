module ysyx_25100258_EXU(
	input	[16:0]	inst_out,
	input	[2:0]	type,
	input	[31:0]	src1,
	input	[31:0]	src2,
	input	[4:0]	rd,
	input	[31:0]	imm,
	output			reg_wen,
	//output	[3:0]	mem_op,
	output	[31:0]	alu_data
);
	`include "ysyx_25100258_riscv_param.vh"
	wire [31:0] data_addi;


	assign	data_addi	=	src1 + imm; 
	
	//根据指令选择结果
	ysyx_25100258_MuxKeyWithDefault #(1, 17, 32) u_MuxKey_alu(
		.out(alu_data),
		.key(inst_out),
		.default_out(32'b0),
		.lut({
			ADDI_OP, data_addi,
		})
	);
	
	//控制是否写寄存器
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 1) u_MuxKey_reg(
		.out(reg_wen),
		.key(type),
		.default_out(1'b0),
		.lut({
			R_TYPE, 1'b1,
			I_TYPE, 1'b1,
			S_TYPE, 1'b0,
			B_TYPE, 1'b0,
			U_TYPE, 1'b1,
			J_TYPE, 1'b1,
		})
	);

	//TODO：控制是否写内存
	/*
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 1) u_MuxKey_reg(
		.out(reg_wen),
		.key(type),
		.default_out(1'b0),
		.lut({
			R_TYPE, 1'b1,
			I_TYPE, 1'b1,
			S_TYPE, 1'b0,
			B_TYPE, 1'b0,
			U_TYPE, 1'b1,
			J_TYPE, 1'b1,
		})
	)

	//控制是否操作内存
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 1) u_MuxKey_reg(
		.out(reg_wen),
		.key(type),
		.default_out(1'b0),
		.lut({
			R_TYPE, 1'b1,
			I_TYPE, 1'b1,
			S_TYPE, 1'b0,
			B_TYPE, 1'b0,
			U_TYPE, 1'b1,
			J_TYPE, 1'b1,
		})
	)*/
endmodule

module ysyx_25100258_EXU(
	input	[31:0]	pc,
	input	[16:0]	inst_out,
	input	[2:0]	inst_type,
	input	[31:0]	src1,
	/* verilator lint_off UNUSEDSIGNAL */
	input	[31:0]	src2,
	input	[4:0]	rd,
	/* verilator lint_off UNUSEDSIGNAL */
	input	[31:0]	imm,
	output			reg_wen,
	//output	[3:0]	mem_op,
	output	[31:0]	alu_data
);
	`include "ysyx_25100258_riscv_param.vh"
	`include "ysyx_25100258_riscv_param_exu.vh"
	import "DPI-C" function void ebreak_call();

	always @ (inst_out)
	begin
		if(inst_out == EBREAK_OP) ebreak_call();
	end
	wire [31:0] data_addi;
	wire [31:0]	op1;
	wire [31:0] op2;


	wire [31:0] op_u = ((inst_out == LUI_OP) ? 32'd0 : pc);

	//两个操作数选择器
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 32) u_MuxKey_op1(
		.out(op1),
		.key(inst_type),
		.default_out(32'b0),
		.lut({
			R_TYPE, src1,
			I_TYPE, src1,	
			S_TYPE, src1,
			B_TYPE, src1,
			U_TYPE, op_u,
			J_TYPE, pc
		})
	);

	ysyx_25100258_MuxKeyWithDefault #(6, 3, 32) u_MuxKey_op2(
		.out(op2),
		.key(inst_type),
		.default_out(32'b0),
		.lut({
			R_TYPE, src2,
			I_TYPE, imm,
			S_TYPE, src2,
			B_TYPE, src2,
			U_TYPE, imm,
			J_TYPE, imm
		})
	);
	//assign op1 =	(inst_type == R_TYPE) ? src1 :
	//				(inst_type == I_TYPE) ? src1 :
	//				(inst_type == U_TYPE) ? (inst_out == LUI_OP ? 32'd0 : pc) : 32'd0;

	//assign op2 =	(inst_type == R_TYPE) ? src2 :
	//				(inst_type == I_TYPE) ? imm :
	//				(inst_type == U_TYPE) ? imm : 32'd0;



	assign	data_addi	=	op1 + op2; 
	
	//根据指令选择结果
	ysyx_25100258_MuxKeyWithDefault #(1, 17, 32) u_MuxKey_alu(
		.out(alu_data),
		.key(inst_out),
		.default_out(32'b0),
		.lut({
			ADDI_OP, data_addi
		})
	);
	
	//控制是否写寄存器
	ysyx_25100258_MuxKeyWithDefault #(7, 3, 1) u_MuxKey_reg(
		.out(reg_wen),
		.key(inst_type),
		.default_out(1'b0),
		.lut({
			R_TYPE, 1'b1,
			I_TYPE, 1'b1,
			S_TYPE, 1'b0,
			B_TYPE, 1'b0,
			U_TYPE, 1'b1,
			J_TYPE, 1'b1,
			N_TYPE, 1'b0
		})
	);

	//TODO：控制是否写内存
	/*
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 1) u_MuxKey_reg(
		.out(reg_wen),
		.key(inst_type),
		.default_out(1'b0),
		.lut({
			R_TYPE, 1'b1,
			I_TYPE, 1'b1,
			S_TYPE, 1'b0,
			B_TYPE, 1'b0,
			U_TYPE, 1'b1,
			J_TYPE, 1'b1
		})
	)

	//控制是否操作内存
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 1) u_MuxKey_reg(
		.out(reg_wen),
		.key(inst_type),
		.default_out(1'b0),
		.lut({
			R_TYPE, 1'b1,
			I_TYPE, 1'b1,
			S_TYPE, 1'b0,
			B_TYPE, 1'b0,
			U_TYPE, 1'b1,
			J_TYPE, 1'b1
		})
	)*/
endmodule

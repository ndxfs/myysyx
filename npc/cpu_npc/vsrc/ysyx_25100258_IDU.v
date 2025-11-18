module ysyx_25100258_IDU(
	//input			clk,
	//input			rst,
	input	[31:0]	inst,
	//input	[31:0]	next_pc,
	output	[4:0]	src1_addr,
	output	[4:0]	src2_addr,
	output	[4:0]	rd,
	//output	[31:0]	uimm,
	output	[31:0]	imm,
	output	[16:0]	inst_out,
	output	[2:0]	inst_type//type RISBUJ		
);

	`include "ysyx_25100258_riscv_param.vh"

	import "DPI-C" function int cpu_inst_fetch(input int pc);

	//wire [6:0]	opcode;
	wire [31:0]	imm_R;
	wire [31:0]	imm_I;
	wire [31:0]	imm_S;
	wire [31:0]	imm_B;
	wire [31:0]	imm_U;
	wire [31:0]	imm_J;



	/*
	wire [31:0]	uimm_R;
	wire [31:0]	uimm_I;
	wire [31:0]	uimm_S;
	wire [31:0]	uimm_B;
	wire [31:0]	uimm_U;
	wire [31:0]	uimm_J;
	*/

	//assign	opcode = inst[6:0];
	//查找表数量，switch宽度，输出宽度
	//类型查找，R:000 I:001 S:010 B:011 U:100 J:101 N:110
	//以opcode判断类型
	ysyx_25100258_MuxKeyWithDefault #(11, 7, 3) u_MuxKey_type(
		inst_type,
		inst[6:0],
		3'b111,
		{
			7'b0010011, I_TYPE,
			7'b1110011, N_TYPE,
			7'b0110111, U_TYPE,
			7'b0010111, U_TYPE,
			7'b1101111, J_TYPE,
			7'b1100111, I_TYPE,
			7'b0100011, S_TYPE,
			7'b1100011, B_TYPE,
			7'b0000011, I_TYPE,
			7'b0100011, S_TYPE,
			7'b0110011, R_TYPE
		}
	);

	assign imm_R = {27'b0, inst[24:20]};//R型shamt,无符号
	assign imm_I = {{20{inst[31]}}, inst[31:20]};
	assign imm_S = {{20{inst[31]}}, inst[31:25], inst[11:7]};
	assign imm_B = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
	assign imm_U = {inst[31:12], 12'b0};
	assign imm_J = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};

	//以类型判断立即数
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 32) u_MuxKey_imm(
		imm,
		inst_type,
		32'b0,
		{
			R_TYPE, imm_R,
			I_TYPE, imm_I,
			S_TYPE, imm_S,
			B_TYPE, imm_B,
			U_TYPE, imm_U,
			J_TYPE, imm_J
		}
	);


	/*assign uimm_R = {27'b0, inst[24:20]};//R型shamt,无符号
	assign uimm_I = {20'b0, inst[31:20]};
	assign uimm_S = {20'b0, inst[31:25], inst[11:7]};
	assign uimm_B = {19'b0, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
	assign uimm_U = {inst[31:12], 12'b0};
	assign uimm_J = {11'b0, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
	//以类型判断立即数
	ysyx_25100258_MuxKeyWithDefault #(6, 3, 32) u_MuxKey_uimm(
		uimm,
		inst_type,
		32'b0,
		{
			R_TYPE, uimm_R,
			I_TYPE, uimm_I,
			S_TYPE, uimm_S,
			B_TYPE, uimm_B,
			U_TYPE, uimm_U,
			J_TYPE, uimm_J
		}
	);*/

	//src12addr提取
	//assign src1_addr =  inst[19:15];
	//assign src2_addr =  inst[24:20];	
	//用选择器实现避免因控制逻辑失误导致的寄存器数据随机
	ysyx_25100258_MuxKeyWithDefault #(4, 3, 5) u_MuxKey_src1(
		src1_addr,
		inst_type,
		5'b0,
		{
			R_TYPE, inst[19:15],
			I_TYPE, inst[19:15],
			S_TYPE, inst[19:15],
			B_TYPE, inst[19:15]
		}
	);

	ysyx_25100258_MuxKeyWithDefault #(3, 3, 5) u_MuxKey_src2(
		src2_addr,
		inst_type,
		5'b0,
		{
			R_TYPE, inst[24:20],
			S_TYPE, inst[24:20],
			B_TYPE, inst[24:20]
		}
	);
	//rd提取

	//assign rd = inst[11:7];
	//用选择器实现避免因控制逻辑失误导致的寄存器数据污染
	ysyx_25100258_MuxKeyWithDefault #(4, 3, 5) u_MuxKey_rd(
		rd,
		inst_type,
		5'b0,//默认x0寄存器
		{
			R_TYPE, inst[11:7],
			I_TYPE, inst[11:7],
			U_TYPE, inst[11:7],
			J_TYPE, inst[11:7]
		}
	);

	//具体指令判断
	wire [16:0] inst_out_tmp;
	wire [16:0] inst_R;
	wire [16:0] inst_ISB;
	wire [16:0] inst_UJ;
	wire [16:0] inst_N;

	//N_TYPE特殊处理编码
	wire is_ebreak = (inst == 32'h00100073);
	
	assign inst_R	= {inst[31:25], inst[14:12], inst[6:0]};
	assign inst_ISB	= {7'b0, inst[14:12], inst[6:0]};
	assign inst_UJ	= {10'b0, inst[6:0]};
	assign inst_N	= is_ebreak ? EBREAK_OP : 17'b0;
	assign inst_out = ({inst[14:12], inst[6:0]} == 10'b1010010011) ? inst_R : inst_out_tmp;
	ysyx_25100258_MuxKeyWithDefault #(7, 3, 17) u_MuxKey_inst_out(
		inst_out_tmp,
		inst_type,
		17'b0,
		{
			R_TYPE, inst_R,
			I_TYPE, inst_ISB,
			S_TYPE, inst_ISB,
			B_TYPE, inst_ISB,
			U_TYPE, inst_UJ,
			J_TYPE, inst_UJ,
			N_TYPE, inst_N
		}
	);
	
endmodule

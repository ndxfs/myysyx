module ysyx_25100258_EXU(
	//input			clk,
	input			rst,
	input	[31:0]	pc,
	input	[16:0]	inst_out,
	input	[2:0]	inst_type,
	input	[31:0]	src1,
	input	[31:0]	src2,
	//input	[4:0]	shamt,
	//input	[4:0]	rd,
	input	[31:0]	imm,
	output			reg_wen,
	output	[31:0]	alu_data,
	output	[31:0]	nextpc

);
	`include "ysyx_25100258_riscv_param.vh"
	`include "ysyx_25100258_riscv_param_exu.vh"

	reg [31:0] rdata;
	`ifndef SYNTHESIS
	import "DPI-C" function int cpu_pmem_read(input int raddr);
	import "DPI-C" function void cpu_pmem_write(input int waddr, input int wdata, input byte wmask);

	import "DPI-C" function void ebreak_call();

	always @ (inst_out)
	begin
		if(inst_out == EBREAK_OP) ebreak_call();
	end
	
	import "DPI-C" function void err_call();


	wire	unknow_flag;
	import "DPI-C" function void unknow_inst();
	always @ (unknow_flag)
	begin
		if(unknow_flag == 1)
		begin	
			$display("this inst_out is not equal to inst");	
			$display("unknow inst_out:%016x", inst_out);	
			unknow_inst();
		end
	end

	export "DPI-C" function read_s;

	function void read_s;
		output int s_pc;
		output int s_snpc;
		output int s_dnpc;
		s_pc = pc;
		s_snpc = snpc;
		s_dnpc = nextpc;
	endfunction
	`endif

	wire [31:0] data_add;
	wire [31:0] data_and;
	wire [31:0] data_or;
	wire [31:0] data_xor;
	wire [31:0]	op1;
	wire [31:0] op2;
	//wire		op2_e;//operator2_extend
	wire		carry;
	wire		true_carry;//it is a debug if src is 0
	wire		overflow;
	wire [31:0] pcop1;
	wire [31:0] pcop2;
	wire [31:0] dnpc;
	wire [31:0] snpc;
	wire		jflag;
	wire [31:0] ne_src2;
	wire [5:0]	bjflag;//B type jump flag
	//wire		op2_ei;
	//wire		op2_er;
	//wire		op2_eb;
	wire [31:0] op1_u = ((inst_out == LUI_OP) ? 32'd0 : pc);
	wire [31:0] op2_r = (inst_out == SUB_OP || inst_out == SLT_OP || inst_out == SLTU_OP) ? ne_src2 : src2;
	wire [31:0] op2_i = (inst_out == SLTI_OP || inst_out == SLTIU_OP) ? ((imm ^ 32'hFFFFFFFF) + 1) : imm;
	wire less;
	wire greater;
	wire uless;
	wire ugreater;
	wire [63:0] shift_num;
	/* verilator lint_off UNUSEDSIGNAL */
	wire [63:0] shift_i;
	wire [63:0] shift_r;
	/* verilator lint_off UNUSEDSIGNAL */
	
	//assign {op2_er, op2_r} = (inst_out == SUB_OP || inst_out == SLT_OP || inst_out == SLTU_OP) ? ne_src2 : {src2[31], src2};
	//assign {op2_ei, op2_i} = (inst_out == SLTI_OP || inst_out == SLTIU_OP) ? (imm ^ 32'hFFFF + 1) : {imm[31], imm};
	//assign op2_eb = ne_src2[32];
	assign true_carry = (|op2) ? carry : 1'b1;
	assign less = (((data_add[31] ^ overflow) || ((op1[31:0] == 32'h80000000) && (op2[31:0] != 32'h80000000))) && ~((op2[31:0] == 32'h80000000)));//0表示为0x80000000会出错
	//assign less = data_add[31] ^ overflow;//0表示为0x80000000会出错
	assign greater = less ^ 1'b1;
	assign uless = ugreater ^ 1'b1;
	assign ugreater = true_carry;
	assign jflag = (inst_out == JAL_OP) | (inst_out == JALR_OP) | (|bjflag);
	assign bjflag[0] = (inst_out == BEQ_OP) & (~(|data_add));
	assign bjflag[1] = (inst_out == BNE_OP) & (|data_add);
	assign bjflag[2] = (inst_out == BLT_OP) & less;
	assign bjflag[3] = (inst_out == BGE_OP) & greater;
	assign bjflag[4] = (inst_out == BLTU_OP) & uless;
	assign bjflag[5] = (inst_out == BGEU_OP) & ugreater;
	assign nextpc = jflag ? dnpc : snpc;
	assign unknow_flag = ~(
		inst_out == EBREAK_OP	||
		inst_out == ADDI_OP		||
		inst_out == LUI_OP		||
		inst_out == AUIPC_OP	||
		inst_out == JAL_OP		||
		inst_out == JALR_OP		||
		inst_out == BEQ_OP		|| inst_out == BNE_OP	|| inst_out == BLT_OP	|| inst_out == BGE_OP	|| inst_out == BLTU_OP	|| inst_out == BGEU_OP	|| 
		inst_out == LB_OP		|| inst_out == LH_OP	|| inst_out == LW_OP	|| inst_out == LBU_OP	|| inst_out == LHU_OP	||
		inst_out == SB_OP		|| inst_out == SH_OP	|| inst_out == SW_OP	||
		inst_out == SLTI_OP		|| inst_out == SLTIU_OP	|| inst_out == XORI_OP	|| inst_out == ORI_OP	|| inst_out == ANDI_OP	||
		inst_out == SLLI_OP		|| inst_out == SRLI_OP	|| inst_out == SRAI_OP	|| inst_out == ADD_OP	|| inst_out == SUB_OP	|| inst_out == SLL_OP	|| inst_out == SLT_OP	|| inst_out == SLTU_OP	|| inst_out == XOR_OP	|| inst_out == SRL_OP	|| inst_out == SRA_OP	|| inst_out == OR_OP	|| inst_out == AND_OP	||
		rst		
	);
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
			U_TYPE, op1_u,
			J_TYPE, pc
		})
	);

	ysyx_25100258_MuxKeyWithDefault #(6, 3, 32) u_MuxKey_op2(
		.out(op2),
		.key(inst_type),
		.default_out(32'b0),
		.lut({
			R_TYPE, op2_r,
			I_TYPE, op2_i,
			S_TYPE, imm,
			B_TYPE, ne_src2,
			U_TYPE, imm,
			J_TYPE, imm
		})
	);

	/*ysyx_25100258_MuxKeyWithDefault #(3, 3, 1) u_MuxKey_op2_e(
		.out(op2_e),
		.key(inst_type),
		.default_out(1'b0),
		.lut({
			R_TYPE, op2_er,
			I_TYPE, op2_ei,
			B_TYPE, op2_eb
		})
	);*/

	ysyx_25100258_MuxKeyWithDefault #(3, 3, 32) u_MuxKey_pcop1(
		.out(pcop1),
		.key(inst_type),
		.default_out(32'b0),
		.lut({
			J_TYPE, pc,
			I_TYPE, src1,
			B_TYPE, pc
		})
	);

	ysyx_25100258_MuxKeyWithDefault #(3, 3, 32) u_MuxKey_pcop2(
		.out(pcop2),
		.key(inst_type),
		.default_out(32'b0),
		.lut({
			J_TYPE, imm,
			I_TYPE, imm,
			B_TYPE, imm
		})
	);


	assign	ne_src2				=	~src2	+ 1'b1;
	assign	overflow			=	(op1[31] == op2[31]) && (data_add[31] != op1[31]);
	assign	{carry,data_add}	=	op1		+ op2;//需要用加法器实现 
	assign	data_and			=	op1		& op2;
	assign	data_or				=	op1		| op2;
	assign	data_xor			=	op1		^ op2;
	assign	snpc				=	pc		+ 32'd4;
	assign	dnpc				=	pcop1	+ pcop2;
	assign	shift_num			=	(inst_out[15]) ? {{32{src1[31]}}, src1} : {32'b0, src1};
	assign	shift_i				=	shift_num >> imm[4:0];
	assign	shift_r				=	shift_num >> src2[4:0];

	//根据指令选择结果
	ysyx_25100258_MuxKeyWithDefault #(28, 17, 32) u_MuxKey_alu(
		.out(alu_data),
		.key(inst_out),
		.default_out(32'b0),
		.lut({
			ADDI_OP,	data_add,
			LUI_OP,		data_add,
			AUIPC_OP,	data_add,
			JALR_OP,	snpc,
			JAL_OP,		snpc,
			LB_OP,		{{24{rdata[7]}}, rdata[7:0]},
			LH_OP,		{{16{rdata[15]}}, rdata[15:0]},
			LW_OP,		rdata,
			LBU_OP,		{24'b0, rdata[7:0]},
			LHU_OP,		{16'b0, rdata[15:0]},
			SLTI_OP,	{31'b0, less},
			SLTIU_OP,	{31'b0, uless},
			XORI_OP,	data_xor,
			ORI_OP,		data_or,
			ANDI_OP,	data_and,
			SLLI_OP,	src1 << imm[4:0],
			SRLI_OP,	shift_i[31:0],
			SRAI_OP,	shift_i[31:0],
			ADD_OP,		data_add,
			SUB_OP,		data_add,
			SLL_OP,		src1 << src2[4:0],
			SLT_OP,		{31'b0, less},
			SLTU_OP,	{31'b0,	uless},
			XOR_OP,		data_xor,
			SRL_OP,		src1 >> src2[4:0],
			SRA_OP,		shift_r[31:0],
			OR_OP,		data_or,
			AND_OP,		data_and
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

	reg [7:0] wmask;
	reg ren;
	reg wen;
	reg [31:0] wdata;
	always @(*)
	begin
		ren		= 1'b0;
		wen		= 1'b0;
		wmask	= 8'b0;
		wdata	= 32'b0;
		case(inst_out)
			LB_OP, LH_OP, LW_OP, LBU_OP, LHU_OP: begin
				ren		= 1'b1;
				wen		= 1'b0;
			end
			SB_OP: begin
				ren		= 1'b0;
				wen		= 1'b1;
				//$display("SB called");
				case(data_add[1:0])
					2'b00: begin wmask=8'h01; wdata = {24'b0, src2[7:0]} << 0; end
					2'b01: begin wmask=8'h02; wdata = {24'b0, src2[7:0]} << 8; end
					2'b10: begin wmask=8'h04; wdata = {24'b0, src2[7:0]} << 16; end
					2'b11: begin wmask=8'h08; wdata = {24'b0, src2[7:0]} << 24; end
				endcase
			end
			SH_OP: begin
				ren		= 1'b0;
				wen		= 1'b1;	
				//$display("SH called");
				case(data_add[1:0])
					2'b00: begin wmask=8'h03; wdata = {16'b0, src2[15:0]} << 0; end
					2'b01: err_call();
					2'b10: begin wmask=8'h0C; wdata = {16'b0, src2[15:0]} << 16; end
					2'b11: err_call();
				endcase
			end
			SW_OP: begin
				ren		= 1'b0;
				wen		= 1'b1;
				//$display("SW called");
				case(data_add[1:0])
					2'b00: begin wmask=8'h0F; wdata = src2; end
					2'b01: err_call();
					2'b10: err_call();
					2'b11: err_call();
				endcase
			end
			default: begin
				ren		= 1'b0;
				wen		= 1'b0;
			end
		endcase
	end

/*	
	always @(*)
	begin


		//$display("  alu_data：%016x", alu_data);	
		$display("  imm：%016x", imm);	
		$display("  op2：%016x", op2);	
		$display("  op2_i：%016x", op2_i);	
		//$display("  imm：%016x", imm[4:0]);	
		//$display("  src：%016x", src2[4:0]);	
		//$display("  shift_num：%016x", shift_num);	
		//$display("  shift_r：%016x", shift_r);	
		//$display("	shift_i：%016x", shift_i);	
	end
*/	

	//reg last_wen;
	wire [31:0] rdata_raw;
	assign rdata_raw = (ren && ~rst) ? cpu_pmem_read(data_add) : 32'b0;	


	always @(*) begin
		rdata		= 32'b0;
		//rdata_raw	= 32'b0;
		//$display("DEBUG: rst=%b, ren=%b, data_add=%h", rst, ren, data_add);
  		if (~rst) begin // 有读写请求时
			//$display("ren,:%b  rst:%b", ren, rst);
			//err_call();
			/* verilator lint_off IGNOREDRETURN */
    		//cpu_pmem_read(data_add);
			/* verilator lint_off IGNOREDRETURN */
    		if (wen) begin // 有写请求时
      			cpu_pmem_write(data_add, wdata, wmask);
    		end
			else if (ren) begin
				case(inst_out)
					LB_OP, LBU_OP: begin
						case(data_add[1:0])
							2'b00: rdata = {24'b0,  rdata_raw[7:0]};
							2'b01: rdata = {24'b0, rdata_raw[15:8]};
							2'b10: rdata = {24'b0, rdata_raw[23:16]};
							2'b11: rdata = {24'b0, rdata_raw[31:24]};
						endcase
					end
					LH_OP, LHU_OP: begin
						case(data_add[1:0])
							2'b00: rdata = {16'b0,  rdata_raw[15:0]};
							2'b01: err_call();
							2'b10: rdata = {16'b0, rdata_raw[31:16]};
							2'b11: err_call();
						endcase
					end
					LW_OP: begin
						case(data_add[1:0])
							2'b00: rdata = rdata_raw;
							2'b01: err_call();
							2'b10: err_call();
							2'b11: err_call();
						endcase
					end
					default:;
				endcase

			end
		end
		else begin
			rdata = 0;
		end
	end

endmodule

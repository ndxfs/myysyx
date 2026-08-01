	localparam R_TYPE = 3'b000;
	localparam I_TYPE = 3'b001;
	localparam S_TYPE = 3'b010;
	localparam B_TYPE = 3'b011;
	localparam U_TYPE = 3'b100;
	localparam J_TYPE = 3'b101;
	localparam N_TYPE = 3'b110;

	//单独为N_TYPE创造17位编码，idu，exu都需使用
	//{11位独立编码,opcode}
	localparam EBREAK_OP	= 17'b0_1110011;

module top_keyboard(
	input					clk,
	input					rst,
	input					ps2_clk,
	input					ps2_data,
	output	[6:0]	seg0,
	output	[6:0]	seg1,
	output	[6:0] seg2,
	output	[6:0]	seg3,
	output	[6:0] seg4,
	output	[6:0]	seg5,
	output	reg		com,
	output				ready,
	output	[7:0]	get_data,
	output	reg	[31:0] cycle
//	output	reg	[1:0]	state
);

localparam	IDLE		=	3'b000;//空状态
localparam	SINGLE	=	3'b001;//单个按键
localparam	COMIDLE	=	3'b010;//组合按键等待状态
localparam	COM			=	3'b011;//组合按键
localparam	BK			= 3'b100;//断码状态
localparam	BKIDLE	=	3'b101;//断码出现后等待释放的按键
localparam	BK2			=	3'b110;//断码后的通码
//wire ready;
wire rst_n;
wire overflow;
//wire [7:0] get_data;
wire [7:0] ascii_code;

reg	[9:0] data;
reg	[9:0] true_data;
reg [7:0]	press_count;
reg nextdata_n;
reg [2:0]	state;
reg [2:0]	next_state;
reg [1:0] state_code;//shift,ctrl判断

assign rst_n = ~rst;

ps2_keyboard u_ps2_keyboard(
	.clk(clk),
	.clrn(rst_n),
	.ps2_clk(ps2_clk),
	.ps2_data(ps2_data),
	.ready(ready),
	.nextdata_n(nextdata_n),
	.overflow(overflow),
	.data(get_data)
);

seg u_seg0(
	 .in(true_data[5:2]),
	 .digital_tube(seg0)
);


seg u_seg1(
	 .in(true_data[9:6]),
	 .digital_tube(seg1)
);


seg u_seg2(
	 .in(press_count[3:0]),
	 .digital_tube(seg2)
);


seg u_seg3(
	 .in(press_count[7:4]),
	 .digital_tube(seg3)
);


seg u_seg4(
	 .in(ascii_code[3:0]),
	 .digital_tube(seg4)
);


seg u_seg5(
	 .in(ascii_code[7:4]),
	 .digital_tube(seg5)
);

MuxKeyWithDefault#(94, 10, 8) ascii_mux (  // 90个条目（示例，需补充完整）
  .out(ascii_code),
  .key(true_data),
  .default_out(8'h00),  // 未知按键输出0
  .lut({
	// 数字键区（修正后）
	{10'h068, 8'h31}, {10'h06A, 8'h21},  // 1/'!'（扫描码0x16 + 状态00/10）
	{10'h078, 8'h32}, {10'h07A, 8'h40},  // 2/'@'（0x1E + 00/10）
	{10'h098, 8'h33}, {10'h09A, 8'h23},  // 3/'#'（0x26 + 00/10）
	{10'h094, 8'h34}, {10'h096, 8'h24},  // 4/'$'（0x25 + 00/10）
	{10'h0B8, 8'h35}, {10'h0BA, 8'h25},  // 5/'%'（0x2E + 00/10）
	{10'h0D8, 8'h36}, {10'h0DA, 8'h5E},  // 6/'^'（0x36 + 00/10）
	{10'h0EC, 8'h37}, {10'h0EE, 8'h26},  // 7/'&'（0x3D + 00/10）
	{10'h0F8, 8'h38}, {10'h0FA, 8'h2A},  // 8/'*'（0x3E + 00/10）
	{10'h118, 8'h39}, {10'h11A, 8'h28},  // 9/'('（0x46 + 00/10）
	{10'h104, 8'h30}, {10'h106, 8'h29},  // 0/')'（0x45 + 00/10）
	{10'h138, 8'h2D}, {10'h13A, 8'h5F},  // -/'_'（0x4E + 00/10）
	{10'h14C, 8'h3D}, {10'h14E, 8'h2B},  // =/'+',（0x55 + 00/10）
	{10'h174, 8'h5C}, {10'h176, 8'h7C},  // \/'|'（0x5D + 00/10）

	// 字母区（Q~P）
	{10'h054, 8'h71}, {10'h056, 8'h51},  // Q/'Q'（0x15 + 00/10）
	{10'h074, 8'h77}, {10'h076, 8'h57},  // W/'W'（0x1D + 00/10）
	{10'h090, 8'h65}, {10'h092, 8'h45},  // E/'E'（0x24 + 00/10）
	{10'h0B4, 8'h72}, {10'h0B6, 8'h52},  // R/'R'（0x2D + 00/10）
	{10'h0B0, 8'h74}, {10'h0B2, 8'h54},  // T/'T'（0x2C + 00/10）
	{10'h0D4, 8'h79}, {10'h0D6, 8'h59},  // Y/'Y'（0x35 + 00/10）
	{10'h0F0, 8'h75}, {10'h0F2, 8'h55},  // U/'U'（0x3C + 00/10）
	{10'h10C, 8'h69}, {10'h10E, 8'h49},  // I/'I'（0x43 + 00/10）
	{10'h110, 8'h6F}, {10'h112, 8'h4F},  // O/'O'（0x44 + 00/10）
	{10'h134, 8'h70}, {10'h136, 8'h50},  // P/'P'（0x4D + 00/10）
	{10'h150, 8'h5B}, {10'h152, 8'h7B},  // [/'{'（0x54 + 00/10）
	{10'h16C, 8'h5D}, {10'h16E, 8'h7D},  // ]/'}',（0x5B + 00/10）

	// 字母区（A~L）
	{10'h070, 8'h61}, {10'h072, 8'h41},  // A/'A'（0x1C + 00/10）
	{10'h06C, 8'h73}, {10'h06E, 8'h53},  // S/'S'（0x1B + 00/10）
	{10'h08C, 8'h64}, {10'h08E, 8'h44},  // D/'D'（0x23 + 00/10）
	{10'h0AC, 8'h66}, {10'h0AE, 8'h46},  // F/'F'（0x2B + 00/10）
	{10'h0D0, 8'h67}, {10'h0D2, 8'h47},  // G/'G'（0x34 + 00/10）
	{10'h0CC, 8'h68}, {10'h0CE, 8'h48},  // H/'H'（0x33 + 00/10）
	{10'h0EC, 8'h6A}, {10'h0EE, 8'h4A},  // J/'J'（0x3B + 00/10）
	{10'h108, 8'h6B}, {10'h10A, 8'h4B},  // K/'K'（0x42 + 00/10）
	{10'h124, 8'h6C}, {10'h126, 8'h4C},  // L/'L'（0x4B + 00/10）
	{10'h130, 8'h3B}, {10'h132, 8'h3A},  // ;/':'（0x4C + 00/10）
	{10'h148, 8'h27}, {10'h14A, 8'h22},  // '/'"',（0x52 + 00/10）

	// 字母区（Z~M + 符号）
	{10'h068, 8'h7A}, {10'h06A, 8'h5A},  // Z/'Z'（0x1A + 00/10）
	{10'h088, 8'h78}, {10'h08A, 8'h58},  // X/'X'（0x22 + 00/10）
	{10'h084, 8'h63}, {10'h086, 8'h43},  // C/'C'（0x21 + 00/10）
	{10'h0A8, 8'h76}, {10'h0AA, 8'h56},  // V/'V'（0x2A + 00/10）
	{10'h0C8, 8'h62}, {10'h0CA, 8'h42},  // B/'B'（0x32 + 00/10）
	{10'h0C4, 8'h6E}, {10'h0C6, 8'h4E},  // N/'N'（0x31 + 00/10）
	{10'h0E8, 8'h6D}, {10'h0EA, 8'h4D},  // M/'M'（0x3A + 00/10）
	{10'h104, 8'h2C}, {10'h106, 8'h3C},  // ,/'<'（0x41 + 00/10）
	{10'h124, 8'h2E}, {10'h126, 8'h3E},  // ./'>'（0x49 + 00/10）
	{10'h130, 8'h2F}, {10'h132, 8'h3F},  // /'?'（0x4A + 00/10）

	// 特殊键
	{10'h0A4, 8'h20}, {10'h0A6, 8'h20}   // Space（0x29 + 00/10）
  })
);

always @(posedge clk or negedge rst_n)
begin
	if(!rst_n)
		cycle <= 0;
	else
		cycle <= cycle + 1;
end

always @(posedge clk or negedge rst_n)
begin
	if(!rst_n)
		state <= IDLE;
	else
		state <= next_state;
end

always @(*) 
begin
	case(state)
		IDLE: 
		begin
			if(ready) next_state = SINGLE;
			else next_state = IDLE;
		end
		SINGLE: 
		begin
			if(data[9:2] == 8'h12 || data[9:2] == 8'h14) next_state = COMIDLE;
			else	if(data[9:2] == 8'hF0)	next_state = BK;
			else	next_state = IDLE;
		end
		COMIDLE: 
		begin
			if(ready) next_state = COM;
			else next_state = COMIDLE;
		end
		COM:
		begin	
			if(data[9:2] == 8'h12 || data[9:2] == 8'h14) next_state = COMIDLE;
			else	if(data[9:2] == 8'hF0)	next_state = BK;
			else	next_state = IDLE;
		end
		BK:	next_state = BKIDLE;
		BKIDLE:
		begin
			if(ready)	next_state = BK2;
			else next_state = BKIDLE;
		end
		BK2:next_state = IDLE;
		default: next_state = IDLE;
	endcase
end

always @(posedge clk or negedge rst_n) 
begin
	if(!rst_n) 
	begin
		data <= 10'h0;
		press_count <= 8'h00;
		nextdata_n <= 1'b1;
		state_code <= 2'b00;
		com <= 1'b0;
	end 
	else 
	begin
		case(state)
			IDLE: 
			begin
				nextdata_n <= 1'b1;
				if(ready)
				begin
					nextdata_n <= 1'b0;
					data <= {get_data, 2'b00};
				end
				if(ready && (get_data == 8'hF0))
					press_count <= press_count + 1'b1;
			end
			SINGLE:
				begin
					nextdata_n <= 1'b0;
					com <= 1'b0;
					if(data[9:2] == 8'h12) state_code <= 2'b10;
					else	if(data[9:2] == 8'h14) state_code <= 2'b01;
					else	state_code <= 2'b00;
				end
			COMIDLE: 
			begin
				nextdata_n <= 1'b1;
				if(ready) 
				begin
					nextdata_n <= 1'b0;
					data <= {get_data, state_code};
				end
			end
			COM:
			begin
				com <= 1'b1;	
				nextdata_n <= 1'b0;
			end
			BK:		nextdata_n <= 1'b0;
			BKIDLE:
			begin
				nextdata_n <= 1'b1;
				if(ready)
					nextdata_n <= 1'b0;//没有实际数据输出
			end
			BK2:	nextdata_n <= 1'b0;
			default:;
		endcase
	end
end

always @(posedge clk or negedge rst_n)//不显示断码
begin
	if(!rst_n)
		true_data <= 0;
	else	if(data[9:2] != 8'hF0)
		true_data <= data;
end

endmodule

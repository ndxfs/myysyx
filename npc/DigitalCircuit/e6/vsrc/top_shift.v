module top_shift(
	input					clk,
	input					rst_n,
	input		[7:0]	in,
	input					operation,
	output	[7:0]	data,
	output	[6:0]	seg0,	
	output	[6:0]	seg1
);
wire [2:0] op;
wire [7:0] true_in;
wire feedback;
reg is_zero_r;
reg [24:0] count;
reg clk_1s;//如果时钟是50MHz
//assign op = operation ? 3'b001 : 3'b101;
assign op = (operation || is_zero_r) ? 3'b001 : 3'b101;//全0检查
assign true_in = (|in) ? in : 8'b00000001;
assign feedback = data[4]^data[3]^data[2]^data[0];
shift u_shift(
	.clk(clk_1s),
	.rst_n(rst_n),
	.s_in(feedback),
	.p_in(true_in),
	.operation(op),
	.data(data)
);

seg u_seg0(
	.in(data[3:0]),
	.digital_tube(seg0)
);
seg u_seg1(
	.in(data[7:4]),
	.digital_tube(seg1)
);

always @(posedge clk_1s or negedge rst_n) 
begin
	if(!rst_n)
		is_zero_r <= 1'b0;
	else
	begin
		if (operation)
			is_zero_r <= 1'b0;
		else 
			is_zero_r <= ~|data;
	end
end

always @(posedge clk or negedge rst_n)
begin
	if(!rst_n)
	begin
		count <= 0;
		clk_1s <= 0;
	end
	else
	begin
		if(count <= 25'd2500000) count <= count + 1;
		else
		begin
			count <= 25'b0;
			clk_1s <= ~clk_1s;
		end
	end
end

endmodule

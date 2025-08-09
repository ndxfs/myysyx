module seg(
	input							en,
	input				[7:0]	Switch,
	output	reg	[6:0]	digital_tube,//七段数码管
	output	reg	[3:0]	led
);
//reg [3:0] i;
always @(*)//83优先编码器
begin
	if (en)
	begin
		led[2:0] = 0;

		for(int i = 0; i <= 7; i = i + 1)
		begin
			if(Switch[i[2:0]] == 1)
				led[2:0] = i[2:0];
		end
		if(Switch == 0)	led[3] = 0;
		else						led[3] = 1;
	end
		else
			led = 0; 
end

always @(*)//数码管输出模块
begin
	if(en)
	begin
		case(led[2:0])
			3'h0: digital_tube = ~7'b1111110;
			3'h1: digital_tube = ~7'b0110000;
			3'h2: digital_tube = ~7'b1101101;
			3'h3: digital_tube = ~7'b1111001;
			3'h4: digital_tube = ~7'b0110011;
			3'h5: digital_tube = ~7'b1011011;
			3'h6: digital_tube = ~7'b1011111;
			3'h7: digital_tube = ~7'b1110000;
			default: digital_tube = ~7'b0000000;
    endcase
	end
	else
	begin
		digital_tube = 7'b1111110;
	end
end
endmodule


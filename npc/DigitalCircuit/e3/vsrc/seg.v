module seg(
	input				[2:0]	led,
	output	reg	[6:0]	digital_tube//七段数码管
);



always @(*)//数码管输出模块
begin

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

end
endmodule


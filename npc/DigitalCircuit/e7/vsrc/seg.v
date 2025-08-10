module seg(
	input				[3:0]	in,
	output	reg	[6:0]	digital_tube//七段数码管
);



always @(*)//数码管输出模块
begin
    case(in[3:0])
        4'h0: digital_tube = ~7'b1111110; 
        4'h1: digital_tube = ~7'b0110000; 
        4'h2: digital_tube = ~7'b1101101; 
        4'h3: digital_tube = ~7'b1111001; 
        4'h4: digital_tube = ~7'b0110011; 
        4'h5: digital_tube = ~7'b1011011; 
        4'h6: digital_tube = ~7'b1011111; 
        4'h7: digital_tube = ~7'b1110000; 
        4'h8: digital_tube = ~7'b1111111; 
        4'h9: digital_tube = ~7'b1111011; 
        4'ha: digital_tube = ~7'b1110111; 
        4'hb: digital_tube = ~7'b0011111; 
        4'hc: digital_tube = ~7'b1001110; 
        4'hd: digital_tube = ~7'b0111101; 
        4'he: digital_tube = ~7'b1001111; 
        4'hf: digital_tube = ~7'b1000111; 
        default: digital_tube = ~7'b0000000;
    endcase
end
endmodule


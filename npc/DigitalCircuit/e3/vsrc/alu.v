module alu(
	input				[2:0]	operation,
	input				[3:0]	A,
	input				[3:0]	B,
	output	reg	[3:0]	result
);
wire	[3:0] t_add_Cin, addsub;
wire				Carry, Overflow;

assign      t_add_Cin =( {4{operation[0]|operation[1]}}^B )+ {3'b000,operation[0]|operation[1]};//第二位操作数的引入为了便于大小判断以及相等判断的减法
assign      {Carry, addsub} = A + t_add_Cin;
assign      Overflow = (A[3] == t_add_Cin[3]) && (addsub [3] != A[3]);

always @(*)
begin

	casez(operation)
		3'b00?:result = addsub;
		3'b010:result = A ^ 4'b1111;
		3'b011:result = A & B;
		3'b100:result = A | B;
		3'b101:result = A ^ B;
		3'b110:result = {3'b000, addsub[3]} ^ {3'b000, Overflow};
		3'b111:result = (({3'b000, Overflow} | {3'b000, (|addsub[2:0])}) ^ 4'b0001);
		default:result = 4'b0000;
	endcase

end
endmodule

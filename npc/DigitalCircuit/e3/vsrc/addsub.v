//4位加减法器
module addsub(
input				[3:0]		A,
input				[3:0]		B,
input								Cin,
output			[3:0]		Result,
output							Carry,
output							Overflow
);

wire [3:0]	t_add_Cin;
assign			t_add_Cin =({4{Cin}} ^ B)+ {3'b000, Cin};
assign			{ Carry, Result } = A + t_add_Cin;
assign			Overflow = (A[3] == t_add_Cin[3]) && (Result [3] != A[3]);



endmodule

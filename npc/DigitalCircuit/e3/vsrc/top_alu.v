module top_alu(
	input       [2:0] operation,
  input       [3:0] A,
  input       [3:0] B,
  output			[3:0] result,
	output			[6:0]	segA,
	output						segAA,
	output			[6:0]	segB,
	output						segBB,
	output			[6:0]	segC,
	output						segCC,
	output						vcc
);
wire [2:0] AA, BB, CC;
assign vcc = 1;
assign segAA = ~A[3];
assign segBB = ~B[3];
assign segCC = ~result[3];
assign AA = ({3{A[3]}}^A[2:0])+ {2'b00,A[3]};//补码的补码为原码
assign BB = ({3{B[3]}}^B[2:0])+ {2'b00,B[3]};
assign CC = ({3{result[3]}}^result[2:0])+ {2'b00,result[3]};
alu u_alu(
	.operation(operation),
	.A(A),
	.B(B),
	.result(result)
);

seg u_segA(
	.led(AA),
	.digital_tube(segA)
);
seg u_segB(
	.led(BB),
	.digital_tube(segB)
);
seg u_segC(
	.led(CC),
	.digital_tube(segC)
);

endmodule

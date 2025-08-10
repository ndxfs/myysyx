module shift(
	input								clk,
	input								rst_n,
	input								s_in,
	input					[7:0]	p_in,
	input					[2:0]	operation,
	output	reg		[7:0]	data
);

always @(posedge clk or negedge rst_n)
begin
	if(!rst_n)
		data <= 8'b0;
	else
	begin
		case(operation)
			3'b000:data <= 8'b0;
			3'b001:data <= p_in;
			3'b010:data <= {1'b0, data[7:1]};
			3'b011:data <= {data[6:0], 1'b0};
			3'b100:data <= {data[7], data[7:1]};
			3'b101:data <= {s_in, data[7:1]};
			3'b110:data <= {data[0], data[7:1]};
			3'b111:data <= {data[6:0],data[7]};
	endcase
	end
end


endmodule

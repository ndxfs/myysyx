module decode38(x,en,y);
  input  [2:0] x;
  input  en;
  output reg [7:0]y;
  reg		 [3:0] i;

  always @(x or en)
    if (en) begin
      for( i = 0; i <= 7; i = i+1)
          if(x == i[2:0])
                y[i[2:0]] = 1;
          else
                y[i[2:0]] = 0;
    end
    else
      y = 8'b00000000;

endmodule

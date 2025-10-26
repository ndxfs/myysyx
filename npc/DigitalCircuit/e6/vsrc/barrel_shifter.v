module barrel_shifter(
    input  [7:0] din,    
    input  [2:0] shamt,  //位移量
    input        LR,     //方向1=左，0=右
    input        AL,     //类型1=算术，0=逻辑
    output [7:0] dout    
);


wire pad = AL ? din[7] : 1'b0;  //右移补


wire [7:0] stage1_in0 = din;                                
wire [7:0] stage1_in1 = {pad, din[7:1]};            
wire [7:0] stage1_in2 = din;                      
wire [7:0] stage1_in3 = {din[6:0], 1'b0};               
wire [7:0] stage1_out;                                      

mux4_1 stage1_mux (
    .in0(stage1_in0), .in1(stage1_in1), .in2(stage1_in2), .in3(stage1_in3),
    .sel({LR, shamt[0]}),
    .out(stage1_out)
);


wire [7:0] stage2_in0 = stage1_out;                         
wire [7:0] stage2_in1 = {{2{pad}}, stage1_out[7:2]};         
wire [7:0] stage2_in2 = stage1_out;                       
wire [7:0] stage2_in3 = {stage1_out[5:0], 2'b00};             
wire [7:0] stage2_out;                                       


mux4_1 stage2_mux (
    .in0(stage2_in0), .in1(stage2_in1), .in2(stage2_in2), .in3(stage2_in3),
    .sel({LR, shamt[1]}),  
    .out(stage2_out)
);



wire [7:0] stage3_in0 = stage2_out;                           
wire [7:0] stage3_in1 = {{4{pad}}, stage2_out[7:4]};         
wire [7:0] stage3_in2 = stage2_out;                           
wire [7:0] stage3_in3 = {stage2_out[3:0], 4'b0000};           


mux4_1 stage3_mux (
    .in0(stage3_in0), .in1(stage3_in1), .in2(stage3_in2), .in3(stage3_in3),
    .sel({LR, shamt[2]}),  
    .out(dout)
);

endmodule


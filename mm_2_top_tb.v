`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/03/2025 10:24:49 AM
// Design Name: 
// Module Name: mm_2_top_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module mm_2_top_tb(

    );
  reg [17:0]A;
  reg [17:0]B;
  reg BYPASS;
  wire [35:0]Q;
  mm_2_accum uut
       (.A(A),
        .B(B),
        .BYPASS(BYPASS),
        .Q(Q));
        
           
  initial begin
  // for checking 2*1+3*7+2*1+3*7
    A = 8'd2;B = 8'd1;BYPASS= 1'b1;
    #10;
    A = 8'd3;B = 8'd7;
    #5;
    BYPASS= 1'b0;
    A = 8'd2;B = 8'd1;
    #10;
    A = 8'd3;B = 8'd7;
    #10;
    A = 8'd0;B = 8'd0;    
    #20;
    $finish;

  
  
  end
endmodule

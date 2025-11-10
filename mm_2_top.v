//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
//Date        : Mon Nov  3 10:18:09 2025
//Host        : JHXPS running 64-bit major release  (build 9200)
//Command     : generate_target mm_2_accum_wrapper.bd
//Design      : mm_2_accum_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module mm_2_top
   (A,
    B,
    BYPASS,
    Q);
  input [17:0]A;
  input [17:0]B;
  input BYPASS;
  output [35:0]Q;

  wire [17:0]A;
  wire [17:0]B;
  wire BYPASS;
  wire [35:0]Q;

  mm_2_accum uut
       (.A(A),
        .B(B),
        .BYPASS(BYPASS),
        .Q(Q));
endmodule
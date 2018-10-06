`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:45 10/06/2018 
// Design Name: 
// Module Name:    Adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Adder(a,b,sum,control);
	input [3:0] a,b;
	input control; // 0 for add, 1 for sub
	output [3:0]sum;
	reg [3:0]sum;
	
	always @(a or b or control)
		if(control)
			sum =a+b;
		else 
		   sum =a-b;
endmodule

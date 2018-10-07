`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:17:58 10/07/2018
// Design Name:   ALU
// Module Name:   /media/ritik/Ritik/cse_work/verilog/calculator/ALU_tb.v
// Project Name:  calculator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [3:0] i1;
	reg [3:0] i2;
	reg [1:0] ctrl;

	// Outputs
	wire [6:0] o;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.i1(i1), 
		.i2(i2), 
		.ctrl(ctrl), 
		.o(o)
	);

	initial begin
		// Initialize Inputs
		i1 = 4'b0110;
		i2 = 4'b0010;
		ctrl = 2'b00;

		// Wait 10 ns for global reset to finish
		#10;
		
		i1 = 4'b0110;
		i2 = 4'b0010;
		ctrl = 2'b01;

		// Wait 10 ns for global reset to finish
		#10;
		i1 = 4'b0110;
		i2 = 4'b0010;
		ctrl = 2'b10;

		// Wait 10 ns for global reset to finish
		#10;
		i1 = 4'b0110;
		i2 = 4'b0010;
		ctrl = 2'b11;

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
      
endmodule

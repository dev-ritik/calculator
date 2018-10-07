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

	reg [9:0] mem[1:0];
	integer outputFile;
	initial begin
		
		
		// Initialize Inputs
		/*i1 = 4'b0110;
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
*/
		// default values
		i1 = 4'b1111;
		i2 = 4'b1111;
		ctrl = 2'b11;
		#100;

		//read values from file
		$readmemb("input.txt",mem);
		#10;

		//assign
		{ctrl,i1,i2}=mem[0];
		
		#100;
		
		outputFile = $fopen("output.txt","w");


		begin
			#100;
			//write to external file
			$fwrite(outputFile,"%b\n",o);
		end

		$fclose(outputFile);  

		//$finish;
  end
      
endmodule

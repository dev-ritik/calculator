`timescale 1ns / 1ps

// GroupID-12 (17114063_17114059) - Ritik kumar & Prateek mali
// GroupID-2 (17114049_17114037) - Harshit maurya & Mularam choudhary
// Date: Oct 8, 2018
// ALU_tb.v - This is a testbench file which sits on the top of ALU.v file and it receives the user input via an 'input.txt' file
//						 and writes the corresponding output in to the 'output.txt' file.


module ALU_tb;

	// Inputs
	reg [3:0] i1; 	  //input 1
	reg [3:0] i2;    //input 2
	reg [1:0] ctrl;  //OP code

	// Outputs
	wire [6:0] o;    //output in seven segment code

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.i1(i1), 
		.i2(i2), 
		.ctrl(ctrl), 
		.o(o)
	);

	reg [9:0] mem[1:0];
	integer outputFile;
	initial
		begin
		
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

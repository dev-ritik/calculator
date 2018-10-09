`timescale 1ns / 1ps

// GroupID-12 (17114063_17114059) - Ritik kumar & Prateek mali
// GroupID-2 (17114049_17114037) - Harshit maurya & Mularam choudhary
// Date: Oct 8, 2018
// Add.v - This is the verilog file which executes all the tasks required by ALU.v file.

task Add; //addition
    input [3:0] a,b;
	 output [3:0] sum;
    begin
		sum = a + b;
    end
endtask


task Sub; //substraction
    input [3:0] a,b;
	 output [3:0] sum;
    begin
		sum = a - b;
    end
endtask
  
task Or; //Or
	input [3:0] a,b;
   output [3:0] c;
  
	begin
		c = a | b;
   end
	
endtask

task twoscomp; //2's compliment
   input [3:0] X;
   output [3:0] Y;

	begin
		 Y[0] = X[0];
		 Y[1] = X[1] & ~X[0] | ~X[1] & X[0];
		 Y[2] = X[2] & ~ X[1] &  ~ X[0] | ~X[2] & X[0] | ~X[2] & X[1];
		 Y[3] = ~X[3] & X[0] | ~X[3] & X[1] | ~X[3] & X[2] | X[3] & ~X[2] & ~X[1] & ~X[0];
	end

endtask

task SevenSegmentEncoder;
     //Declare inputs,outputs and internal variables.
     input [3:0] bcd;
     output [6:0] seg;
     reg [6:0] seg;

	//always block for converting bcd digit into 7 segment format
    begin
        case (bcd) //case statement
            0 : seg = 7'b0000001;
            1 : seg = 7'b1001111;
            2 : seg = 7'b0010010;
            3 : seg = 7'b0000110;
            4 : seg = 7'b1001100;
            5 : seg = 7'b0100100;
            6 : seg = 7'b0100000;
            7 : seg = 7'b0001111;
            8 : seg = 7'b0000000;
            9 : seg = 7'b0000100;
            //switch off 7 segment character when the bcd digit is not a decimal number.
            default : seg = 7'b1111111; 
        endcase
    end
    
endtask


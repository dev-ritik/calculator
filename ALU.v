// GroupID-12 (17114063_17114059) - Ritik kumar & Prateek mali
// GroupID-2 (17114049_17114037) - Harshit maurya & Mularam choudhary
// Date: Oct 8, 2018
// ALU.v - This is the central verilog file which receives the user input, and processes a task based upon the control (OPcode) received.
//			  It also have a SevenSegmentEncoder task to convert the bcd output to the required 7-segment code.



module ALU (i1,i2,ctrl,o);
  input[3:0] i1,i2;  //input 1 & input 2
  input[1:0] ctrl; 	//OP code
  output[6:0] o; 		//output in seven segment code
  reg[6:0] o;        //output reg
  reg[3:0] r;			//temp reg holding output in bcd
  `include "Add.v"

  always @(i1 or i2 or ctrl or o)
    begin
        case (ctrl) //case statement
				2'b00: Add(i1,i2,r);
				2'b01: Sub(i1,i2,r);
				2'b10: Or(i1,i2,r);
				2'b11: twoscomp(i1,r);
        endcase
		  // encode output
		  SevenSegmentEncoder(r,o);
		  
    end   
  
endmodule

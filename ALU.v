module ALU (s,c,ctrl,k);
  input[3:0] s,c;
  input[1:0] ctrl;
  output[3:0] k;
  reg[3:0] k;
  `include "Add.v"

    always @(s or c or ctrl or k)
    begin
        case (ctrl) //case statement
        2'b00: Sub(s,c,k);
		  2'b01: Add(s,c,k);
		  2'b10: Or(s,c,k);
		  2'b11: twoscomp(s,k);
        endcase
    end   
	
endmodule

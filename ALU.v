module ALU (i1,i2,ctrl,o);
  input[3:0] i1,i2;
  input[1:0] ctrl;
  output[3:0] o;
  reg[3:0] o;
  `include "Add.v"

    always @(i1 or i2 or ctrl or o)
    begin
        case (ctrl) //case statement
        2'b00: Sub(i1,i2,o);
      2'b01: Add(i1,i2,o);
      2'b10: Or(i1,i2,o);
      2'b11: twoscomp(i1,o);
        endcase
    end   
  
endmodule

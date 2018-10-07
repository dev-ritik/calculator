`timescale 1ns / 1ps

task Add;
    input [3:0] a,b;
	 output [3:0] sum;
    begin
     sum = a + b;
    end
  endtask


task Sub;
    input [3:0] a,b;
	 output [3:0] sum;
    begin
     sum = a - b;
    end
endtask
  
task Or;
	input [3:0] a,b;
   output [3:0] c;
  
	begin
    c = a | b;
   end
	
endtask

task twoscomp;
    input [3:0] X;
    output [3:0] Y;

begin
 Y[0] = X[0];
 Y[1] = X[1] & ~X[0] | ~X[1] & X[0];
 Y[2] = X[2] & ~ X[1] &  ~ X[0] | ~X[2] & X[0] | ~X[2] & X[1];
 Y[3] = ~X[3] & X[0] | ~X[3] & X[1] | ~X[3] & X[2] | X[3] & ~X[2] & ~X[1] & ~X[0];
end

endtask




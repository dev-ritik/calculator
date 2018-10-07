`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:43 10/07/2018 
// Design Name: 
// Module Name:    ReadInput 
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
module ReadInput(
    );
	 
	 reg[777:0] mem[15:0];
	 integer i;
	 
	 initial 
		begin
			#10
			$readmemh("input.dat",mem);
			
			#10
			
			for(i=0;i<16;i=i+1)
			begin
				$display("%b",mem[i]);
			end
			
			#10
			$finish;
		end


endmodule

# calculator
Xilinx college project

**A calculator using Verilog (modular programming in hardware description language or HDL) with GUI.**

<img src="/images/denotation.JPG" align="right">
<img src="/images/sevenSegmentDisplay.gif" align="left">

The image on the right indicates the order in which the panels are accessed normally. This is done using a 7 bit vector.

Here 1 denote indicators that are 'off' while 0 denotes their 'on' states.

<br>
<br>

The verilog code have been designed using Xilinx ISE design suit and simulated in ISim simulator.


There are 3 main verilog files, which are used to process the input and give the desired output.Along with them, there are files required for executing and rendering the GUI interface. The 3 verilog files are:
* [__ALU.v__](https://github.com/dev-ritik/calculator/blob/master/ALU.v)
This is the central verilog file which receives the user input via a testbench, and the ctrl. It also have a _SevenSegmentEncoder_ task to convert the bcd output to the required 7- segment code. After this the output is returned via an _o_ variable.

* [__ALU_tb.v__](https://github.com/dev-ritik/calculator/blob/master/ALU_tb.v)
This is a testbench file which sits on the top of _ALU.v_ file and it receives the user input via an ‘_input.txt_’ file and writes the corresponding output in to the ‘_output.txt_’ file.

* [__Add.v__](https://github.com/dev-ritik/calculator/blob/master/Add.v)
This is the verilog file which executes all the tasks required by ALU.v file. This consists of 5 tasks:
    * Add
    * Sub
    * Or
    * Two’scomp
    * Seven Segment Encoder
    
Apart from this [__CalcDemoButtons.java__](https://github.com/dev-ritik/calculator/blob/master/CalcDemoButtons.java) contains the code to render [__Applet.html__](https://github.com/dev-ritik/calculator/blob/master/Applet.html) file which is the GUI part of the project. It takes the user input and converts it into 10 bit OPcode and saves it in '_input.txt_' file. It then takes the processed '_output.txt_' file to render the final output.

## Contribution
* [Ritik Kumar](https://github.com/dev-ritik)
* [Prateek Mali](https://github.com/prateekmali)
* [Harshit Maurya](https://github.com/hacksdump)

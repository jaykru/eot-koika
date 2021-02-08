module testbench;

 reg reset = 1;
 initial
  begin
     $dumpfile("icarus_test.vcd");
     $dumpvars(0,testbench);
  end
 
 reg clk = 0;
 always #1 clk = !clk;

 evenoddtranspose test_eot (clk, reset);

 initial
	$monitor("hello world");
endmodule

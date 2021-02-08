module testbench;

 reg reset = 0;
 initial
  begin
     $dumpfile("test.vcd");
     $dumpvars(0,test);
  end
 
 reg clk = 0;
 always #1 clk = !clk;

 evenoddtranspose test_eot (clk, reset)
 
 initial
  $monitor("at time %t", $time);
endmodule

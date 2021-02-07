#include <cstddef>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vevenoddtranspose.h"
    
// pyverilator defined values
// first declare variables as extern
extern const char* _pyverilator_module_name;
extern const uint32_t _pyverilator_num_inputs;
extern const char* _pyverilator_inputs[];
extern const uint32_t _pyverilator_input_widths[];
extern const uint32_t _pyverilator_num_outputs;
extern const char* _pyverilator_outputs[];
extern const uint32_t _pyverilator_output_widths[];
extern const uint32_t _pyverilator_num_internal_signals;
extern const char* _pyverilator_internal_signals[];
extern const uint32_t _pyverilator_internal_signal_widths[];
extern const uint32_t _pyverilator_num_rules;
extern const char* _pyverilator_rules[];
extern const char* _pyverilator_json_data;
// now initialize the variables
const char* _pyverilator_module_name = "Vevenoddtranspose";
const uint32_t _pyverilator_num_inputs = 2;
const char* _pyverilator_inputs[] = {"CLK","RST_N"};
const uint32_t _pyverilator_input_widths[] = {1,1};

const uint32_t _pyverilator_num_outputs = 0;
const char* _pyverilator_outputs[] = {};
const uint32_t _pyverilator_output_widths[] = {};

const uint32_t _pyverilator_num_internal_signals = 0;
const char* _pyverilator_internal_signals[] = {};
const uint32_t _pyverilator_internal_signal_widths[] = {};

const char* _pyverilator_json_data = "null";

// this is required by verilator for verilog designs using $time
// main_time is incremented in eval
double main_time = 0;
    
double sc_time_stamp() {
return main_time;
}
// function definitions
// helper functions for basic verilator tasks
extern "C" { //Open an extern C closed in the footer
Vevenoddtranspose* construct() {
    Verilated::commandArgs(0, (const char**) nullptr);
    Verilated::traceEverOn(true);
    Vevenoddtranspose* top = new Vevenoddtranspose();
    return top;
}
int eval(Vevenoddtranspose* top) {
    top->eval();
    main_time++;
    return 0;
}
int destruct(Vevenoddtranspose* top) {
    if (top != nullptr) {
        delete top;
        top = nullptr;
    }
    return 0;
}
VerilatedVcdC* start_vcd_trace(Vevenoddtranspose* top, const char* filename) {
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open(filename);
    return tfp;
}
int add_to_vcd_trace(VerilatedVcdC* tfp, int time) {
    tfp->dump(time);
    return 0;
}
int flush_vcd_trace(VerilatedVcdC* tfp) {
    tfp->flush();
    return 0;
}
int stop_vcd_trace(VerilatedVcdC* tfp) {
    tfp->close();
    return 0;
}
uint32_t get_CLK(Vevenoddtranspose* top){return top->CLK;}
uint32_t get_RST_N(Vevenoddtranspose* top){return top->RST_N;}
int set_CLK(Vevenoddtranspose* top, uint32_t new_value){ top->CLK = new_value; return 0;}
int set_RST_N(Vevenoddtranspose* top, uint32_t new_value){ top->RST_N = new_value; return 0;}
}
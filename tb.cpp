#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vriscv_top.h"
#include "Vriscv_top___024root.h"

#define MAX_SIM_TIME 20
uint64_t sim_time = 0;
VerilatedVcdC *m_trace = new VerilatedVcdC;
Vriscv_top *dut = new Vriscv_top;

void cycle(){
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}

void reset(){
    dut->rst_n = 0;
    cycle();
    dut->rst_n = 1;
}

int main(int argc, char** argv, char** env) {


    Verilated::traceEverOn(true);
    
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    reset();
    while (sim_time < MAX_SIM_TIME) {
        dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
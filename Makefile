VSRC = $(wildcard *.v)
CSRC = $(wildcard *.cpp)

all: $(VSRC)
	verilator --trace --cc $(VSRC) --top-module riscv_top --exe $(abspath ./tbrv32.cpp)

	$(MAKE) -C obj_dir -f Vriscv_top.mk Vriscv_top
	./obj_dir/Vriscv_top
	gtkwave waveform.vcd

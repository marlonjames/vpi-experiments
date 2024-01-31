#! /usr/bin/env bash

run_iverilog() {
    gcc -shared -fPIC int_param_check.c -Wall -Werror -o int_param_check.vpi
    iverilog -g2012 -o int_param_check int_param_check.sv
    vvp -M . -m int_param_check int_param_check
}

run_questa() {
    gcc -shared -fPIC int_param_check.c -Wall -Werror -o int_param_check.so
    vlib int_param_check_lib
    vlog -work int_param_check_lib -sv int_param_check.sv
    vsim -c +access -onfinish exit -pli int_param_check.so -lib int_param_check_lib t -do "run -all; quit"
}

run_riviera() {
    gcc -shared -fPIC int_param_check.c -Wall -Werror -o int_param_check.so
    vlib int_param_check_lib
    vlog -work int_param_check_lib -pli int_param_check.so -sv int_param_check.sv
    vsim -c +access -interceptcoutput -pli int_param_check.so -lib int_param_check_lib t -do "run -all; endsim; quit"
}

run_verilator() {
    gcc -shared -fPIC int_param_check.c -Wall -Werror -o libvpi.so -DVERILATOR
    verilator -cc --exe -Mdir verilator_build --top-module t --timing --vpi --public-flat-rw --prefix Vtop -o Vtop -LDFLAGS "-Wl,-rpath,$(pwd) -L$(pwd) -lvpi" int_param_check.sv verilator.cpp
    make -C verilator_build -f Vtop.mk
    verilator_build/Vtop
}

run_xcelium() {
    mkdir -p build/xrun_snapshot
    gcc -shared -fPIC int_param_check.c -Wall -Werror -o int_param_check.so
    xrun -64bit -licqueue -clean -access +rwc -loadvpi "$(pwd)/int_param_check.so:vlog_startup_routines_bootstrap" -messages -status -gverbose -pliverbose -plidebug -plierr_verbose -work int_param_check_lib -top t int_param_check.sv
}

set -e

SIM=$1

case "$SIM" in
    "iverilog") run_iverilog;;
    "questa") run_questa;;
    "riviera") run_riviera;;
    "verilator") run_verilator;;
    "xcelium") run_xcelium;;
    "") echo "Supported simulators: iverilog questa riviera verilator xcelium"; exit 0;;
    *) echo "Invalid simulator '$SIM'. Supported simulators: iverilog questa riviera verilator xcelium"; exit 1;;
esac

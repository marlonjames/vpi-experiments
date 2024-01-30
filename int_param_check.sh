#! /usr/bin/env bash

run_iverilog() {
    gcc -shared -fPIC int_param_check.c -Wall -Werror -o int_param_check.vpi
    iverilog -g2012 -o int_param_check int_param_check.sv
    vvp -M . -m int_param_check int_param_check
}

run_questa() {
    echo "not implemented"
    exit 1
}

run_riviera() {
    echo "not implemented"
    exit 1
}

run_verilator() {
    echo "not implemented"
    exit 1
}

set -e

SIM=$1

case "$SIM" in
    "iverilog") run_iverilog;;
    "modelsim") run_modelsim;;
    *) echo "Invalid simulator '$SIM'"; exit 1;
esac

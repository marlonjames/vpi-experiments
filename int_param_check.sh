#! /usr/bin/env bash

set -e

gcc -shared -fPIC int_param_check.c -Wall -Werror -o int_param_check.vpi
iverilog -g2012 -o int_param_check int_param_check.sv
vvp -M . -m int_param_check int_param_check

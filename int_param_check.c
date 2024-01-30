#include <stdint.h>
#include <stdio.h>

#include "sv_vpi_user.h"


static PLI_INT32 int_param_check(p_cb_data cb_data) {
    vpi_printf("hello VPI!\n");

    return 0;
}

static void register_startup_callback() {
    s_cb_data cb_data = {0};
    
    cb_data.reason = cbStartOfSimulation;
    cb_data.cb_rtn = int_param_check;

    vpi_register_cb(&cb_data);
}

void (*vlog_startup_routines[])() = {
    register_startup_callback,
    0
};

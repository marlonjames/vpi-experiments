
module t();

    parameter bit [1]       bit_1_param     = 1;
    parameter bit [1:0]     bit_2_param     = 3;
    parameter bit [599:0]   bit_600_param   = 12345678912345678912345689;
    parameter byte          byte_param      = 100;
    parameter shortint      shortint_param  = 63000;
    parameter int           int_param       = 50;
    parameter longint       longint_param   = 1222333444555;

    parameter integer       integer_param   = 125000;
    parameter logic [129:0] logic_130_param = 10111213141516171819;
    parameter reg   [7:0]   reg_8_param     = 200;
    parameter time          time_param      = 10000000000;

    initial $display("Hello, I am int_param_check");
endmodule;
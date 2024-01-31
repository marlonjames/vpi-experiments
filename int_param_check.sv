
module t();

    parameter bit [0:0]     bit_1_param     = 1;
    parameter bit [1:0]     bit_2_param     = 3;
    parameter bit [599:0]   bit_600_param   = 600'ha364c9849f8298c66d659;
    parameter byte          byte_param      = 100;
    parameter shortint      shortint_param  = 63000;
    parameter int           int_param       = 50;
    parameter longint       longint_param   = 64'h11c98c031cb;

    parameter integer       integer_param   = 125000;
    parameter logic [129:0] logic_130_param = 130'h8c523ec7dc553a2b;
    parameter reg   [7:0]   reg_8_param     = 200;
    parameter time          time_param      = 64'h2540be400;

    initial begin
        $display("---\nHello:   int_param_check\n");
        
        #10
        $display("\nGoodbye: int_param_check\n---");
    end

endmodule

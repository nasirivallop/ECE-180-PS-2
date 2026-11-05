module accumulator #(
    parameter int unsigned ACC_W = 32
) (
    input  logic                    clk_i,
    input  logic                    rst_ni,
    input  logic                    clear_i,
    input  logic                    en_i,
    input  logic signed [ACC_W-1:0] d_i,
    output logic signed [ACC_W-1:0] q_o
);
  logic signed [ACC_W-1:0] q;

  always_ff @(posedge clk_i) begin
    if (!rst_ni)       q <= '0;
    else if (clear_i)  q <= '0;
    else if (en_i)     q <= d_i;
  end

  assign q_o = q;
endmodule
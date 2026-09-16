module secure_address_translator #(
    parameter BOUND_SIZE = 8,
    parameter ADDR_SIZE = 32
) (
    input wire                          clk,
    input wire                          rst_n,

    // Secure address translator <-> Register file ports
    input wire [167 : 0]                cfg_load_val,
    input wire                          cfg_load,
    input wire [BOUND_SIZE-1 : 0]       cfg_low_bound,
    input wire [BOUND_SIZE-1 : 0]       cfg_high_bound,
    input wire                          cfg_en,

    // Secure address translator <-> Fetch unit ports
    input wire [ADDR_SIZE-1 : 0]        in_raw_addr,
    input wire                          in_valid,
    output wire [ADDR_SIZE-1 : 0]       in_trans_addr,
    output wire                         in_ready,
    output wire                         in_done
);

assign                              in_ready    = 1;

// wire                                done;
wire [BOUND_SIZE-1 : 0]             rng_val;

PRNG            #(.BOUND_SIZE       (BOUND_SIZE))
num_gen         (.clk               (clk),
                 .rst_n             (rst_n),
                 .in                (cfg_load_val),
                 .valid             (cfg_load && cfg_en),
                 .request           (in_done),
                 .out               (rng_val));

random_fill_engine  #(.BOUND_SIZE   (BOUND_SIZE),
                      .ADDR_SIZE    (ADDR_SIZE))
rand_fill_engine    (.clk           (clk),
                     .rst_n         (rst_n),
                     .en            (cfg_en),
                     .addr          (in_raw_addr),
                     .low_bound     (cfg_low_bound),
                     .high_bound    (cfg_high_bound),
                     .rng_val       (rng_val),
                     .valid         (in_valid),
                     .out           (in_trans_addr),
                     .done          (in_done));

endmodule
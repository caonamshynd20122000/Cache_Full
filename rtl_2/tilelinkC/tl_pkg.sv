// ============================================================================
// File: tl_pkg.sv
// Description: TileLink-C Standard Package Definition
// Standards: 
//   - SiFive TileLink Specification v1.8.1 (Ch. 3 Message Types, Ch. 5 Signals)
//   - Rocket-Chip / HuanCun: tilelink/Bundles.scala & Metadata.scala
// Target: Heterogeneous L2 Cache (CVA6 Scalar Core + Ara Vector Engine)
// ============================================================================

package tl_pkg;

  // ==========================================================================
  // 1. GLOBAL BUS WIDTH PARAMETERS
  // Compatible with Core parameters: ADDR_SIZE = 32, DATA_SIZE = 32
  // ==========================================================================
  localparam int TL_ADDR_WIDTH   = 32; // Physical address width
  localparam int TL_DATA_WIDTH   = 32; // Channel beat width (32-bit word)
  localparam int TL_MASK_WIDTH   = TL_DATA_WIDTH / 8; // Byte-enable mask width (4 bits)
  localparam int TL_SIZE_WIDTH   = 3;  // Transfer size encoding: 2^size bytes (e.g., 2=4B, 6=64B)
  localparam int TL_SOURCE_WIDTH = 4;  // Client transaction ID (e.g., CVA6 vs. Ara)
  localparam int TL_SINK_WIDTH   = 4;  // Manager slave transaction ID

  // ==========================================================================
  // 2. CHANNEL A OPCODES (Client -> Manager Request)
  // Ref: TileLink Spec v1.8.1, Table 3.2 & Bundles.scala (TLMessages)
  // ==========================================================================
  localparam logic [2:0] TL_A_PUT_FULL_DATA     = 3'd0; // Write full data beat (all byte masks high)
  localparam logic [2:0] TL_A_PUT_PARTIAL_DATA  = 3'd1; // Write sub-word with byte-enable mask (SB, SH)
  localparam logic [2:0] TL_A_ARITHMETIC_DATA   = 3'd2; // Arithmetic atomic operations (AMOADD, AMOMIN...)
  localparam logic [2:0] TL_A_LOGICAL_DATA      = 3'd3; // Bitwise atomic operations (AMOAND, AMOOR...)
  localparam logic [2:0] TL_A_GET               = 3'd4; // Memory read request (Load)
  localparam logic [2:0] TL_A_INTENT            = 3'd5; // Prefetch intent/hint
  localparam logic [2:0] TL_A_ACQUIRE_BLOCK     = 3'd6; // Acquire block permission & data
  localparam logic [2:0] TL_A_ACQUIRE_PERM      = 3'd7; // Upgrade block permission without data transfer

  // ==========================================================================
  // 3. CHANNEL B OPCODES (Manager -> Client Invalidation / Snoop)
  // Ref: TileLink Spec v1.8.1, Table 3.4 & Bundles.scala (TLMessages)
  // ==========================================================================
  localparam logic [2:0] TL_B_PROBE_BLOCK       = 3'd6; // Request client to downgrade permissions & evict
  localparam logic [2:0] TL_B_PROBE_PERM        = 3'd7; // Request client to downgrade permissions only

  // ==========================================================================
  // 4. CHANNEL C OPCODES (Client -> Manager Probe Response & Eviction)
  // Ref: TileLink Spec v1.8.1, Table 3.6 & Bundles.scala (TLMessages)
  // ==========================================================================
  localparam logic [2:0] TL_C_PROBE_ACK         = 3'd4; // Probe acknowledgment without dirty data
  localparam logic [2:0] TL_C_PROBE_ACK_DATA    = 3'd5; // Probe acknowledgment with dirty cache block
  localparam logic [2:0] TL_C_RELEASE           = 3'd6; // Clean line voluntary eviction
  localparam logic [2:0] TL_C_RELEASE_DATA      = 3'd7; // Dirty line voluntary eviction with writeback

  // ==========================================================================
  // 5. CHANNEL D OPCODES (Manager -> Client Response)
  // Ref: TileLink Spec v1.8.1, Table 3.8 & Bundles.scala (TLMessages)
  // ==========================================================================
  localparam logic [2:0] TL_D_ACCESS_ACK        = 3'd0; // Acknowledgment for Put / Atomic
  localparam logic [2:0] TL_D_ACCESS_ACK_DATA   = 3'd1; // Data response for Get / Atomic
  localparam logic [2:0] TL_D_HINT_ACK          = 3'd2; // Acknowledgment for Intent
  localparam logic [2:0] TL_D_GRANT             = 3'd4; // Permission granted (response to AcquirePerm)
  localparam logic [2:0] TL_D_GRANT_DATA        = 3'd5; // Permission & data granted (response to AcquireBlock)
  localparam logic [2:0] TL_D_RELEASE_ACK       = 3'd6; // Acknowledgment for voluntary Release

  // ==========================================================================
  // 6. CHANNEL E (Transaction Handshake Finalization)
  // Ref: TileLink Spec v1.8.1, Table 3.10
  // Payload consists solely of the target sink ID: logic [TL_SINK_WIDTH-1 : 0] sink
  // ==========================================================================

  // ==========================================================================
  // 7. COHERENCE PERMISSION PARAMETERS (MESI / Trunk-Branch-Nothing Model)
  // Ref: TileLink Spec v1.8.1, Table 3.3 & Metadata.scala (TLPermissions)
  // ==========================================================================
  // Grow: Client requests higher privilege on Channel A (param[2:0])
  localparam logic [2:0] TL_GROW_NtoB           = 3'd0; // Nothing -> Branch (Request Read-only / Shared)
  localparam logic [2:0] TL_GROW_NtoT           = 3'd1; // Nothing -> Trunk  (Request Read-Write / Exclusive)
  localparam logic [2:0] TL_GROW_BtoT           = 3'd2; // Branch  -> Trunk  (Upgrade Read to Read-Write)

  // Cap: Manager forces client privilege downgrade on Channel B (param[2:0])
  localparam logic [2:0] TL_CAP_toT             = 3'd0; // Retain Trunk state
  localparam logic [2:0] TL_CAP_toB             = 3'd1; // Downgrade to Branch (Yield write rights, flush dirty)
  localparam logic [2:0] TL_CAP_toN             = 3'd2; // Invalidate to Nothing (Relinquish all rights)

  // Shrink/Prune: Client reports privilege reduction on Channel C (param[2:0])
  localparam logic [2:0] TL_SHRINK_TtoB         = 3'd0; // Downgraded Trunk to Branch
  localparam logic [2:0] TL_SHRINK_TtoN         = 3'd1; // Downgraded Trunk to Nothing
  localparam logic [2:0] TL_SHRINK_BtoN         = 3'd2; // Downgraded Branch to Nothing

  // ==========================================================================
  // 8. TILELINK CHANNEL STRUCTS (Standard Decoupled Payloads)
  // ==========================================================================
  // Channel A: Request Packet
  typedef struct packed {
    logic [2:0]                 opcode;
    logic [2:0]                 param;
    logic [TL_SIZE_WIDTH-1:0]   size;
    logic [TL_SOURCE_WIDTH-1:0] source;
    logic [TL_ADDR_WIDTH-1:0]   address;
    logic [TL_MASK_WIDTH-1:0]   mask;
    logic [TL_DATA_WIDTH-1:0]   data;
    logic                       corrupt;
  } tl_a_chan_t;

  // Channel D: Response Packet
  typedef struct packed {
    logic [2:0]                 opcode;
    logic [1:0]                 param;
    logic [TL_SIZE_WIDTH-1:0]   size;
    logic [TL_SOURCE_WIDTH-1:0] source;
    logic [TL_SINK_WIDTH-1:0]   sink;
    logic                       denied;
    logic [TL_DATA_WIDTH-1:0]   data;
    logic                       corrupt;
  } tl_d_chan_t;

endpackage: tl_pkg
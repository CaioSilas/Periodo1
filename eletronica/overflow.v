module Somasub(A, B, op, R, zero, sinal, overflow);

  input [3:0] A, B;
  input op;
  output reg [3:0] R;
  output zero, sinal, overflow;

  assign sinal = R[3];

  assign zero = ~(|R);

	assign overflow = op ? (~A[3] & B[3] & R[3]) | (A[3] & ~B[3] & ~R[3]) : (~A[3] & ~B[3] & R[3]) | (A[3] & B[3] & ~R[3]);

  always @(*) begin
		R = op ? A - B : A + B;
	end

endmodule

module Main;

	reg [3:0] A = 0;
	reg [3:0] B = 0;
	reg op = 1;
	wire [3:0] R;
	wire zero, sinal, overflow;

	Somasub somasub (A, B, op, R, zero, sinal, overflow);

	always begin
		#1;
		A = 4;
		B = -5;
	end

	always begin
		#2 $stop;
	end

	initial begin
		#1;
		$display("A \t B \t R \t zero \t sinal \t overflow");
		$monitor("%d \t %d \t %d \t %b \t %b \t %b", A, B, R, zero, sinal, overflow);
	end

endmodule
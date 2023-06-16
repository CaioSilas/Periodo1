/*
Integrantes:
 - Caio Silas
 - Ederson Junior
 - Marcella Silveira
 - Mauro Santos

S1 e S0 controlam qual dos 4 motores vai ser ligado
00 - motor 0
01 - motor 1
10 - motor 2
11 - motor 3

V -> palavra de 4 bits controla a velocidade
(V3, V2, V1, V0)
0000-velocidade 0 
0001-velocidade 1
0010-velocidade 1
0011-velocidade 2
0100-velocidade 2
0101-velocidade 2
0110-velocidade 2
0111-velocidade 2
1000-velocidade 2
1001-velocidade 3
1010-velocidade 3
1011-velocidade 3
1100-velocidade 3
1101-velocidade 3
1110-velocidade 3
1111-velocidade 3

*/
module Controle(S, Velocidade, V, Motor);

	input [3:0] V;
	input [1:0] S;
	output reg [7:0] Velocidade;
	output reg [1:0] Motor;

	always @(*) 
		begin 
			if (S == 0) 
				begin 
					Motor = 2'b00;
					if (V == 0) Velocidade = 0;
					else if (V < 3) Velocidade = 8'b00001111;
					else if (V < 8) Velocidade = 8'b00110011;
					else Velocidade = 8'b11000011;
				end
			if (S == 1) 
				begin 
					Motor = 2'b01;
					if (V == 0) Velocidade = 0;
					else if (V < 3) Velocidade = 8'b00001111;
					else if (V < 8) Velocidade = 8'b00110011;
					else Velocidade = 8'b11000011;
				end
			if (S == 2) 
				begin 
					Motor = 2'b10;
					if (V == 0) Velocidade = 0;
					else if (V < 3) Velocidade = 8'b00001111;
					else if (V < 8) Velocidade = 8'b00110011;
					else Velocidade = 8'b11000011;
				end
			if (S == 3) 
				begin 
					Motor = 2'b11;
					if (V == 0) Velocidade = 0;
					else if (V < 3) Velocidade = 8'b00001111;
					else if (V < 8) Velocidade = 8'b00110011;
					else Velocidade = 8'b11000011;
				end
		end

endmodule //Controle

module top();

  reg [3:0] a;
  reg [1:0] b;
  wire [7:0] x;
  wire [1:0] y;

  initial
    begin
      a = 4'b0000;
      b = 2'b00;
    end

  always begin
    begin
      #64 $stop;
    end
  end

  always begin
    #1 {a,b} = {a,b} + 1;
  end

  initial
    begin
      $dumpfile("teste.dump");
        $dumpvars(0,a,b,x,y);
        $dumpon;
        $display("TIME \t S \t  V \t    Velocidade \t       Motor");
        $monitor("%0d \t %b \t %b \t     %b \t\t %d ",$time,b,a,x,y);
    end

  Controle integ(.S(b), .Velocidade(x), .V(a), .Motor(y));

endmodule
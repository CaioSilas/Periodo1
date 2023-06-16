module decteclado (t,s,p);

input [9:0] t;
output [3:0] s;
output       p;

reg [3:0] s;
reg       p,p1;

initial begin
    p1 = 0;
end

assign p = (p1)?1:0;

always @(p)
 begin
 if (p == 0) p1 = 0;
     case(t)
     10'b0000000001: s=4'b0000; p1 = 1;
     10'b0000000010: s[3:0]=4'b0001; p1 = 1; //apenas para mostrar a manipulaçao de forma detalhada  
     10'b0000000100: s[3:0]=4'b0010; p1 = 1;// s[2:1] = 2'n=b01;
     10'b0000001000: s[3:0]=4'b0011; p1 = 1;
     10'b0000010000: s=4'b0100; p1 = 1;
     10'b0000100000: s=4'b0101; p1 = 1;
     10'b0001000000: s=4'b0110; p1 = 1;
     10'b0010000000: s=4'b0111; p1 = 1;
     10'b0100000000: s=4'd8; p1 = 1;
     10'b1000000000: s=9; p1 = 1;
     default : s=4'b1111; p1 = 0;
     endcase //case(t)
end //always @(*)

always @(*)
 begin
     p = (|t)?1:0; // reduçao or -> verifica se existe algum botao pressionado
end

endmodule
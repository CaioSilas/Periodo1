// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


module aileron (angulacao,v1d,v2d,v1e,v2e);

	input [3:0] angulacao;
	output reg v1d,v2d,v1e,v2e;
	
 		
	
	always @(angulacao)
		begin
			case (angulacao)
		-4'b0111 : v1e = 1;  
		-4'b0110 : v1e = 1;
		-4'b0101	: v1e = 1;
		-4'b0100	: v1e = 1;
		-4'b0011	: v1e = 1;
		-4'b0010 : v1e = 1;
		-4'b0001 : v1e = 1;
		-4'b0000 : v1e = 0;
		 4'b0001 : v1e = 0;
		 4'b0010 : v1e = 0;
		 4'b0011 : v1e = 0;
		 4'b0100 : v1e = 0;
		 4'b0101 : v1e = 0;
		 4'b0110 : v1e = 0;
       4'b0111	: v1e = 0;	 
		endcase
		end
		
		always @(angulacao)
		begin
			case (angulacao)
		-4'b0111 : v1d = 0;  
		-4'b0110 : v1d = 0;
		-4'b0101	: v1d = 0;
		-4'b0100	: v1d = 0;
       	-4'b0011	: v1d = 0;
		-4'b0010 : v1d = 0;
		-4'b0001 : v1d = 0;
		-4'b0000 : v1d = 1;
		 4'b0001 : v1d = 1;
		 4'b0010 : v1d = 1;
		 4'b0011 : v1d = 1;
		 4'b0100 : v1d = 1;
		 4'b0101 : v1d = 1;
		 4'b0110 : v1d = 1;
       4'b0111	: v1d = 1;	 
		endcase
		end
		
	always @(angulacao)
		begin
			case (angulacao)
		-4'b0111 : v2e = 1;  
		-4'b0110 : v2e = 1;
		-4'b0101	: v2e = 1;
		-4'b0100	: v2e = 1;
		-4'b0011	: v2e = 0;
		-4'b0010 : v2e = 0;
		-4'b0001 : v2e = 0;
		-4'b0000 : v2e = 0;
		 4'b0001 : v2e = 0;
		 4'b0010 : v2e = 0;
		 4'b0011 : v2e = 0;
		 4'b0100 : v2e = 0;
		 4'b0101 : v2e = 0;
		 4'b0110 : v2e = 0;
       4'b0111	: v2e = 0;	 
		endcase
		end
		
	always @(angulacao)
		begin
			case (angulacao)
		-4'b0111 : v2d = 0;  
		-4'b0110 : v2d = 0;
		-4'b0101	: v2d = 0;
		-4'b0100	: v2d = 0;
		-4'b0011	: v2d = 0;
		-4'b0010 : v2d = 0;
		-4'b0001 : v2d = 0;
		-4'b0000 : v2d = 0;
		 4'b0001 : v2d = 0;
		 4'b0010 : v2d = 0;
		 4'b0011 : v2d = 0;
		 4'b0100 : v2d = 1;
		 4'b0101 : v2d = 1;
         4'b0110 : v2d = 1;
         4'b0111	: v2d = 1;
		endcase
		end
	



endmodule 
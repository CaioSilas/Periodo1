
//codificação estrutural 

module portas1 (a1,b1,c1,result1);
    input a1,b1,c1;
    output result1;
    wire fio;

    //assing fio = b&c;
    and (fio,b1,c1);
    assing result = a1 | fio;

endmodule // portas1   


//codificação comportamental 


module portas2(a2,b2,c2,resultado2);
    input a2,b2,c2;
    output resultado2;
    
    reg resultado2;

    always @(a2 or c2)
        begin 
            reg1 = a2 | c2;
        end     
    always @(reg1 or b2) //lista de sensibilidade -- " * " e todas as opções 
        begin 
            resultado = (a2|c2) & b2;
        end   
    

endmodule


module integra (a0,b0,c0,result0)
    inout a0,b0,c0;
    output result0;

    always@(r1 or r2)
        begin
            assing result0=r1 & r2;
        end
    
    portas1(.a1 (a0),.b1 (b0),.c1 (c0),.result1(r1));
    portas2(.a2 (a0),.b2 (b0),.c2 (c0),.resultado2(r1)); 



endmodule
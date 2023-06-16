// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int confere(long long  cpf){
    long long aux, divisor = 10000000000;
    int digito,i = 10,soma = 0;
    int verifica;

    aux = cpf;

    while (i >= 2)//validacao primeiro digito
    {
        digito =  aux / divisor;
        aux = aux % divisor;
        soma += digito * i;
        divisor /= 10;
        i--;
    }
        verifica = (soma * 10)%11;
    if (verifica == 10 ){
            verifica = 0;
    }

    if (verifica == (aux / 10)){
        i = 11;
        divisor = 10000000000;
        aux = cpf;
        soma = 0;

        while (i >= 2)//validacao segundo digito
        {
        digito =  aux / divisor;
        aux = aux % divisor;
        soma += digito * i;
        divisor /= 10;
        i--;
        }
        verifica = (soma * 10)%11;
        if (verifica == 10 ){
            verifica = 0;
        }
        if (verifica == cpf % 10 ){
            return 1;
        }
        else {
            return 0;
        }
    } 
    return 0;
}



int main (){
    long long cpf;
    int conclusao;

    printf ("DIGITE O CPF\n");
    scanf ("%lld",&cpf);
    conclusao = confere (cpf);

    switch (conclusao)
    {
    case 1:
        printf ("CPF VALIDO\n");
        break;
    
    case 0:
        printf ("CPF INVALIDO\n");
        break;
    }



    return 0;
}
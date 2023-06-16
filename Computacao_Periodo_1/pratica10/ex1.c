// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int numerador;
    int denominador;
}Racional;


//verifica se o racionais sao iguais
int verifica(Racional r1 ,  Racional r2){
    int aux1, aux2;
    aux1 = r1.numerador / r1.denominador;
    aux2 = r2.numerador / r2.denominador;

    if (aux1 == aux2){
        return 1;
    }
    else {
        return 0;
    }
}

int main (){
    Racional r1;
    Racional r2;
    int aux;

    printf ("Digite numerador e denominador de r1: ");  
    scanf ("%d %d", &r1.numerador, &r1.denominador);   //lendo r1
    printf ("Digite numerador e denominador de r2: ");
    scanf ("%d %d", &r2.numerador, &r2.denominador);  //lendo r2

    aux = verifica(r1,r2);  //chamando a função
    printf("\n");

    switch (aux){
        case 1:
            printf ("r1 e r2 sao iguais!");
            break;
        case 0:
            printf ("r1 e r2 sao diferentes!");
            break;
    }

    return 0;
}
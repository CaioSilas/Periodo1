// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define tamanho 10

int main (){
    double cadeia1[tamanho];
    double cadeia2[tamanho];
    double soma = 0;
    int i;

    printf("ENTRADA\n");

    for (i = 0; i < tamanho;i++){
        scanf ("%lf", &cadeia1[i]);
    }

    printf("\n");
        
    for (i = 0; i < tamanho;i++){
        scanf ("%lf", &cadeia2[i]);
    }

    printf ("\n");

    for (i = 0; i < tamanho;i++){
        soma += cadeia1[i] * cadeia2[i];
    }

    printf ("SAIDA\n");
    printf ("%.0lf\n",soma);

    return 0;
}
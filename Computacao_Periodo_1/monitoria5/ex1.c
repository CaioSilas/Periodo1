// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define fa 100

int main (){
    int n;
    double vetor[fa];
    double vetor2[fa];
    double menor = 999999, maior = -999999;
    double aux = -999999;

    printf ("DIGITE O NUMERO DE ENTRADAS\n");
    scanf ("%d", &n);

    for (int i = 0; i < n;i++){
        scanf("%lf",&vetor[i]);
    }
    for (int i = 0; i < n;i++){
        for(int j = 0;j < n; j++){
            if (vetor[j] < menor && vetor[j] > aux){
                menor = vetor[j];
            }
        }
        vetor2[i] = menor;
        aux = menor;
        menor = 999999;
    }
    for (int i = 0; i < n;i++){
        printf ("%.2lf",vetor2[i]);
    }
    return 0;
}
//caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define mes 30

double mediaT(double *contador, double vetor[], int tamanho){
    double media = *contador / tamanho;
    return media;
}

int main (){
    double vetor[mes];
    int i;
    double contador = 0;
    double media;
    double diasM = 0,diasN = 0;

    for (i = 0; i < mes; i++){
        printf ("DIGITE A TEMERATURA DO DIA %d:",i+1);
        scanf("%lf",&vetor[i]);
        contador += vetor[i];
        media = mediaT(&contador,vetor,mes);
    }
    for(i = 0; i < mes; i++){
        if (vetor [i] > media){
            diasM++;
        }
        else {
            diasN++;
        }
    }

    printf ("A MEDIA E : %.2lf\n",media);
    printf ("MENOR QUE A MEDIA :%.0lf\n",diasN);
    printf ("MAIOR QUE E MEDIA:%.0lf\n",diasM);



    return 0;
}

// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define l 4
#define c 3

int main (){
    int matriz [l] [c];

//capturando dados 
    for (int i =0; i < l;i++){ //linhas

        for (int j = 0 ;j < c;j++){ //colunas
            matriz[i][j] = 0; 
            printf ("matriz [%d] [%d] = ",i,j);
            scanf ("%d",&matriz[i][j]);
        }
    }
//imprimindo a matriz8
    for (int i =0; i < l;i++){ //linhas

        for (int j = 0 ;j < c;j++){ //colunas
            printf ("%4d ",matriz[i][j]);
        }
        printf ("\n");
    }


    return 0;
}
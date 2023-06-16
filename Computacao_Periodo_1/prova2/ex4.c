// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define t 20

int verifica (int A[20][20],int m,int n){

   int menorr = 99999999;

   for (int i = 0; i < m;i++){
        for (int j = 0;j < n;j++){
                printf("%3d ",A[i][j]);    //imprimindo a matriz
            for (int k = 0; k < m;k++){
                if (A[i][j] < menorr){
                    menorr = A[i][j];     //achando o menor valor
                }
            }
        }
        printf("\n");
    }
    printf ("o menor valor e:%d\n",menorr);   

    return menorr;
}


int main (){

    int mat [20] [20];
    int m,n;

    printf("digite o valor de m e n \n");  // limitando o tamanho do matriz
    scanf ("%d %d",&m,&n);

    for (int i = 0; i < m;i++){    //lendo a matriz
        printf ("digite o valor da linha %d:",i + 1);
        for (int j = 0;j < n;j++){
            scanf ("%d",&mat[i][j]);
        }
    }

    verifica(mat,m,n);



    return 0;
}
  // caio silas de araujo amaro
 //turma:41
//matricula:21.1.4111

/*
    Escreva um programa para ler uma matriz (Am×n) e calcular a sua matriz transposta (At).
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Recebe uma matriz e seus ındices e retorna a matriz transposta
int **cria_transposta (int **A, int m, int n){
    int **matriz;
    matriz = malloc(n * sizeof(int*));
    for (int i = 0; i < n;i++){
        matriz[i] = malloc(m * sizeof(int));
    }
    for (int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            matriz[i][j] = A[j][i];
        }
    }
    return matriz;
}

// Aloca espaco para uma matriz m x n. Se nao for possıvel criar a matriz, retorna NULL
int **cria_matriz(int m, int n){
    int **matriz;
    matriz = malloc(m * sizeof(int*));
    for (int i = 0; i < m;i++){
        matriz[i] = malloc(n * sizeof(int));
    }
    for (int i = 0;i < m; i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    return matriz;
}

// Libera o espaco utilizado por uma matriz.
void desaloca_matriz(int **A, int m){
    for (int i = 0; i < m;i++){
        free(A[i]);
    }
    free(A);
}

int main (){
    int m,n;
    printf ("Digite o tamanho da matriz:");
    scanf ("%d %d",&m,&n);

    int **A = cria_matriz(m,n);

    int **At = cria_transposta(A,m,n);
    for (int i = 0;i < n; i++){
        for (int j = 0; j < m; j++)
        {
            printf("%d ",At[i][j]);
        }
        printf("\n");
    }

    desaloca_matriz(At,n);
    desaloca_matriz(A,m);

    return 0;
}
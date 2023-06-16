  // caio silas de araujo amaro
 //turma:41
//matricula:21.1.4111

/*
    Crie uma fun¸c˜ao que multiplica duas matrizes An×m e Bp×q.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int **criaMatriz(int linha,int coluna){
    int **matriz;
    matriz = malloc(linha * sizeof(int*));
    for (int i = 0; i < linha;i++){
        matriz[i] = malloc(coluna * sizeof(int));
    }
    for (int i = 0;i < linha; i++){
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    return matriz;
}

int **criaMatrizR(int linha,int coluna){
    int **matriz;
    matriz = malloc(linha * sizeof(int*));
    for (int i = 0; i < linha;i++){
        matriz[i] = malloc(coluna * sizeof(int));
    }
    return matriz;
}

int multiplica_matrizes(int ***R, int ** A, int n, int m, int ** B, int p, int q){
    int aux1 = 0;
    if (m == p){
        *R = criaMatrizR(n,q);
        for (int i = 0; i < n;i++){
            for (int j = 0; j < q;j++){
                for (int k = 0;k < m;k++){
                    aux1 += (A[i][k] * B[k][j]);
                }
                (*R)[i][j] = aux1;
                aux1 = 0;
            }
        }
        return 1;
    }
    else {
        return 0;
    }
}

void desaloca_matriz(int **A, int m){
    for (int i = 0; i < m;i++){
        free(A[i]);
    }
    free(A);
}

int main (){
    int n,m;
    printf("Digite os tamanhos da matriz A:");
    scanf ("%d %d",&n,&m);
    printf ("digite os dados da matriz A:\n");
    int **A = criaMatriz(n,m);

    int p,q;
    printf("\n");
    printf("Digite os tamanhos da matriz B:");
    scanf ("%d %d",&p,&q);
    printf ("digite os dados da matriz B:\n");
    int **B = criaMatriz(p,q);
    int **R;

    int resultado = multiplica_matrizes(&R,A,n,m,B,p,q);

    printf("\n");
    switch (resultado)
    {
    case 0:
        printf("nao e possivel calcular a matriz\n");
        break;
    
    case 1:
        printf("Resultado de A x B:\n");
        for (int i = 0;i < n; i++){
            for (int j = 0; j < q; j++)
            {
                printf("%d ",R[i][j]);
            }
            printf("\n");
        }
        desaloca_matriz(R,n);
        break;
    }

    desaloca_matriz(A,n);
    desaloca_matriz(B,p);

    return 0;
}
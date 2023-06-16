// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void lematriz1 (int mat1 [][10],int mat2[10][10],int mat3[10][10],int m,int n,int p,int q){
    printf ("matriz 1\n");
    for (int i = 0; i < m;i++){
         for (int j = 0; j < n;j++){
            scanf ("%d", &mat1[i][j]);
        }
    }
    printf ("matriz 2\n");
    for (int i = 0; i < p;i++){
         for (int j = 0; j < q;j++){
            scanf ("%d", &mat2[i][j]);
        }
    }
    mat3[10][10];
    int aux1 = 0;
    for (int i = 0; i < m;i++){
        for (int j = 0; j < q;j++){
            
            for (int k = 0;k < p;k++){
                aux1 += (mat1[i][k] * mat2[k][j]);
            }
            mat3[i][j] = aux1;
            aux1 = 0;
        }
    }
}
void imprime (int aux1 [][10],int m,int q){
    printf ("\nresultado da multiplicacao\n");
    for (int i = 0; i < m;i++){
        for (int j = 0; j < q;j++){
            printf ("%2d ",aux1[i][j]);
        }
        printf ("\n");
    }
}


int main (){

    int m,n,p,q;
    int mat1[10][10];
    int mat2[10][10];
    int mat3[10][10];

    printf("digite a dimensao da primeira matriz\n");
    scanf ("%d %d",&m,&n);
    printf("digite a dimensao da segunda matriz\n");
    scanf ("%d %d",&p,&q);
    if (n == p){
        lematriz1(mat1,mat2,mat3,m,n,p,q);
        imprime(mat3,m,q);
    }
    else {
        printf ("os tamanhos sao invalidos\n");
    }

    return 0;
}


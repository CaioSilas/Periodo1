// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main (){

    int m,n,p,q;


    printf("digite a dimençao da primeira matriz\n");
    scanf ("%d %d",&m,&n);

    int mat1[10][10];

    for (int i = 0; i < m;i++){
        for (int j = 0; j < n;j++){
            scanf ("%d", &mat1[i][j]);
        }
    }
    
    printf("digite a dimençao da segunda matriz\n");
    scanf ("%d %d",&p,&q);
    int mat2[10][10];

    for (int i = 0; i < p;i++){
        for (int j = 0; j < q;j++){
            scanf ("%d", &mat2[i][j]);
        }
    }

    if (n == p){
        int mat3[10][10];

        int aux = 0;
        for (int i = 0; i < m;i++){
            for (int j = 0; j < q;j++){
                
                for (int k = 0;k < p;k++){
                    aux += (mat1[i][k] * mat2[k][j]);
                }
                mat3[i][j] = aux;
                aux = 0;
            }
        }
        for (int i = 0; i < m;i++){
            for (int j = 0; j < q;j++){
                printf ("%2d ",mat3[i][j]);
            }
            printf ("\n");
        }
        }
    else {
        printf ("os valores sao diferentes\n");
    }



    return 0;
}
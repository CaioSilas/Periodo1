// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int **criaMatriz(int n,int m,FILE *arquivo){
    int **matriz;

    // printf("\n");
    matriz = malloc(n * sizeof(int*));
    for (int i = 0; i < n;i++){
        matriz[i] = malloc(m * sizeof(int));
        for (int j = 0; j < m; j++){   
            fscanf(arquivo,"%d",&matriz[i][j]);
            // printf("%2d ",matriz[i][j]);
        }
        // printf("\n");
    }
    return matriz;
}

int main (){
    FILE *arquivo;
    FILE *saida;
    arquivo = fopen("matrizes.txt","r");
    saida = fopen ("produto.dat","wb");

    if(arquivo == NULL){
        printf("arquivo invalido\n");
        exit(1);
    }

    printf("arquivo aberto\n");

    while (!feof(arquivo))
    {
        int n,m;
        int p,q;
        fscanf(arquivo,"%d",&n);
        fscanf(arquivo,"%d",&m);

    

        int **matriz = criaMatriz(n,m,arquivo);

        

        fscanf(arquivo,"%d",&p);
        fscanf(arquivo,"%d",&q);

        int **matriz1 = criaMatriz(p,q,arquivo);

        printf("\n");

        int aux1 = 0;
        int **mat3;

        mat3 = malloc(n * sizeof(int*));
        for (int i = 0; i < n;i++){
            mat3[i] = malloc(q * sizeof(int));
        }
        fwrite(&n,sizeof(int),1,saida);
        fwrite(&q,sizeof(int),1,saida);
        
        printf("%d %d\n",n,q);

        for (int i = 0; i < n;i++){
            for (int j = 0; j < q;j++){
                for (int k = 0;k < m;k++){
                    aux1 += (matriz[i][k] * matriz1[k][j]);
                }
                mat3[i][j] = aux1;
                aux1 = 0;
            }
        }

        for (int i = 0;i < n;i++){
            for (int j = 0; j < q; j++)
            {
                printf("%2d ",mat3[i][j]);
                fwrite(&mat3[i][j],sizeof(int),1,saida);
            }
            printf("\n");
        }
        
        

        for (int i = 0; i < n;i++){
            free(matriz[i]);
        }
        free(matriz);
    }
    fclose(saida);
    fclose(arquivo);
    return 0;
}
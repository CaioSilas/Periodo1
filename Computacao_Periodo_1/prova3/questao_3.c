// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



int **cria_matriz(int n){
  int **matriz;
  matriz = malloc(n * sizeof(int*));
  for (int i = 0; i < n;i++){
    matriz[i] = malloc(n * sizeof(int));
  }
  for (int i = 0;i < n; i++){
    for (int j = 0; j < n; j++)
    {
      scanf("%d",&matriz[i][j]);
    }
  }
  return matriz;
}

void desaloca_matriz(int **A, int m){
    for (int i = 0; i < m;i++){
        free(A[i]);
    }
    free(A);
}


int main (){
    int n;
    scanf ("%d",&n);
    int **matriz = cria_matriz(n);
    int aux = 0;
    int menor = 999999;
    for (int i = 0; i < n;i++){
      for(int j = 0; j < n;j++){
        if (matriz[i][j] < menor){
            aux = j;
            menor = matriz[i][j];
        }
      }
      menor = 999999;  
      int aux2 = matriz[i][aux];
      matriz[i][aux] = matriz[i][i];
      matriz[i][i] = aux2;   
    }


    printf("deslocada\n");
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            printf("%2d ",matriz[i][j]);
        }
        printf("\n");
    }
    desaloca_matriz(matriz,n);
    return 0;
}
  // caio silas de araujo amaro
 //turma:41
//matrizricula:21.1.4111

/*
  Quadrado M´agico. Um Quadrado M´agico ´e uma tabela quadrada de lado n, onde a soma dos n´umeros das
linhas, das colunas e das diagonais principal e secund´aria ´e constante, sendo que nenhum destes n´umeros se
repete.
*/

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
/*  
      0  1  2  3
     -----------   
   0 |16  3  2 13    diagonal = 0,0 1,1 2,2 3,3
   1 | 5 10 11  8    diagonal = 0,3 1,2 2,1 3,1
   2 | 9  6  7 12
   3 | 4 15 14  1
*/

int verifica (int **matriz,int n){

  int aux = 0;
  //somando as diagonais
  for (int i = 0; i < n; i++){
    aux += matriz[i][i];
  }

  int aux1 = 0;
  int contador = n - 1;
  for (int i = 0 ; i < n; i++){
    aux1 += matriz[i][contador];
    contador--;
  }
  if (aux != aux1){
    return 0;
  }


  //somando linha
  for (int i = 0; i < n; i++){
    aux1 = 0;
    for (int j = 0; j < n; j++){
      aux1 += matriz[i][j];
    }
  }
  if (aux != aux1){
    return 0;
  }


  //somando coluna
  for (int j = 0; j < n; j++){
    aux1 = 0;
    for (int i = 0; i < n; i++){
      aux1 += matriz[i][j];
    }
  }
  if (aux != aux1){
    return 0;
  }


  return 1;
}

void desaloca_matriz(int **A, int m){
    for (int i = 0; i < m;i++){
        free(A[i]);
    }
    free(A);
}


int main (){
  int n;
  
  printf("Digite o valor de n: ");
  scanf("%d",&n);

  printf("Digite os valores da matrizriz n x n: \n");
  int **matriz = cria_matriz(n);

  int resultado = verifica(matriz,n);

  printf("\n");
  switch (resultado)
  {
  case 1:
    printf("Esta matriz e um quadrado magico!\n");
    break;
  
  case 0:
    printf("Nao e um quadrado magico\n");
    break;
  }

  desaloca_matriz(matriz,n);
  return 0;
}
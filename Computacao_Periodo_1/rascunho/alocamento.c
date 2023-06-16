  // caio silas de araujo amaro
 //turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// // ALOCA MEMORIA DE FORMA DINAMICA
// double *nro = malloc (sizeof(double));

// //ALTERA O CONTEUDO DA MEMORIA APONTADA POR NRO PAARA 3.5
// *nro = 3.5;

// printf ("endereco de memoria de : %p\n",nro);
// printf ("valor na memoria de : %lf\n", *nro);


// //ALOCA MEMORIA DE FORMA DINAMICA E INICIALIZA COM VALOR 10.5
// double *nro = malloc (3 * sizeof(double));

// //ALTERANDO VALORES
// nro[0] = 1.1;
// nro[1] = 1.5;
// nro[2] = 2.2;

// for (int i = 0; i < 3;i++){
//     printf ("%.1lf ",nro[i]);
// }

//LIBERAR A MEMORIA SE TORNA NOSSA RESPONSABILIDADE(PROGRAMADOR) ->-> USA O COMANDO FREE(nro) <-<-
 
//EXEMPLO -> qual numero e o maior
// void leVetor(int *v,int n){
//     for (int i = 0;i < n;i++)
//         scanf("%d",&v[i]);  //lendo os numeros
// }

// int *maior (int *v,int n){  //returna um endereço de memoria
//     int *maior = v;
//     for (int i = 1; i < n;i++){
//         if (v[i] > *maior){
//             maior = v + i; //salvando o maior valor
//         }
//     }
//     return maior;
// }

// int main (){
//     int n, *v;
//     scanf ("%d",&n);
//     v = malloc (n * sizeof(int)); //tamanho do alocamento
//     leVetor(v, n);
//     int *valor = maior(v ,n); //identificando qual e o maior deles
//     printf ("maior = %d\n", *valor);
//     free(v);
//     return 0;
// }



// //FUNÇÃO QUE CRIA UMA MATRIZ DE TAMANHO N X M
// int **criaMatriz(int n,int m){
//     int **matriz;
//     matriz = malloc(n * sizeof(int*));
//     for (int i = 0; i < n;i++){
//         matriz[i] = malloc(m * sizeof(int));
//     }
//     return matriz;
// }

// void liberaMatriz(int **matriz,int n){ //nao precisa do int m 
//     for (int i = 0; i < n;i++){
//         free(matriz[i]);
//     }
//     free(matriz);
// }

// int main (){
//     int **matriz = criaMatriz(2, 2);
//     matriz [1][0] = 1;
//     liberaMatriz(matriz,2);

//     return 0;
// }

//STRUCTS
// typedef struct
// {
//     int matricula;
//     int media;
//     char nome[100];
// }Aluno;

// int main(){
//     Aluno *aluno = malloc(sizeof(Aluno));
//     // (*aluno).matricula = 10;
//     aluno->matricula = 10; // lembram desta sintaxe ?
//     aluno->media = 8;
//     for (int i = 0; i < 23; i++)
//     {
//         aluno->nome[i] = 65 + i;
//     }

//     printf("%d %d ",aluno->matricula,aluno->media);
//     for (int i = 0; i < 23; i++)
//     {
//         printf("%c",aluno->nome[i]);
//     }

//     free(aluno);
//     return 0;
// }

//PONTEIRO COM STRUCT
// typedef struct 
// {
//     int matricula;
//     double *notas;
// }Aluno;

// int main (){
//     Aluno a;
//     ...
//     a.notas = malloc (10 * sizeof(double));
//     ...
//     free(a.notas);
//     return 0;
// }


// int main (){
//     Aluno *a = malloc(sizeof(Aluno));
//     ...
//     a->notas = malloc (10 * sizeof(double));
//     ...
//     free(a->notas);
//     free(a);
//     return 0;
// }

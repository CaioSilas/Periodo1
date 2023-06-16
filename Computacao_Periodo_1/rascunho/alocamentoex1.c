  // caio silas de araujo amaro
 //turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int *matricula;
    double *tempo;
    int **prova;
}Aluno;

int main (){
    Aluno aluno;
    int k,n;
    printf("ENTRADA\n\n");
    printf ("digite o numero de alunos:");
    scanf ("%d",&n);

    printf ("digite o numero de provas:");
    scanf("%d",&k);

    aluno.matricula = malloc (n * sizeof(int));
    aluno.tempo = malloc (n * sizeof(double));
    aluno.prova = malloc(n * sizeof(int*));
        for (int i = 0; i < n;i++){
            aluno.prova[i] = malloc(k * sizeof(int));
        }

    for (int i = 0 ; i < n; i++){
        printf("matricula:");
        scanf ("%d",&aluno.matricula[i]);
        printf("tempo:");
        scanf ("%lf",&aluno.tempo[i]);
        for (int j = 0; j < k; j++)
        {
            printf("digite a nota da prova %d:", j + 1);
            scanf("%d",&aluno.prova[i][j]);
        }
    }

    printf ("\nSAIDA\n");

    for (int i = 0;i < n; i++){
        printf ("matricula: %d\n",aluno.matricula[i]);
        printf ("tempo de curso :%.0lfh\n",aluno.tempo[i]);
        for (int j = 0; j < k; j++)
        {
            printf ("prova %d :%d\n",j + 1,aluno.prova[i][j]);
        }
        printf ("\n");
    }


    free(aluno.matricula);
    free(aluno.tempo);
    for (int i = 0; i < n;i++){
        free(aluno.prova[i]);
    }
    free(aluno.prova);

    return 0;
}

// typedef struct{
//     int matricula;
//     int tempo;
//     double *prova;
// }Aluno;

// int main (){
//     int k,n;
//     printf("ENTRADA\n\n");
//     printf ("digite o numero de alunos:");
//     scanf ("%d",&n);
//     printf ("digite o numero de provas:");
//     scanf("%d",&k);

//     Aluno *aluno = malloc(n * sizeof(Aluno));

//     for (int i = 0 ; i < n; i++){
//         aluno[i].prova = malloc(k * sizeof(double));
//     }

//     for (int i = 0 ; i < n; i++){
//         printf("digite a matricula, o tempo no curso e as k notas do aluno %d:", i + 1);
//         scanf("%d",&aluno[i].matricula);
//         scanf("%d",&aluno[i].tempo);
//         for (int j = 0; j < k;j++){
//         scanf("%d",&aluno[i].prova[j]);
//         }
//     }

//      for (int i = 0 ; i < n; i++){
//          free(aluno[i].prova);
//     }
//     free(aluno);
//     return 0;
// }
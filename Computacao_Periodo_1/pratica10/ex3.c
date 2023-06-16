// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    double nota;
    double frequencia;
}Aluno;

int main (){
    FILE *arquivo;
    arquivo = fopen ("dados.txt", "w");

    Aluno dados;
    int numero_aluno;
    // double media_nota = 0;
    // double frequencia_media = 0;
    

    printf("digite o numero de alunos:");
    scanf("%d",&numero_aluno);

    fprintf(arquivo,"%d\n\n",numero_aluno);

    for (int i = 0;i < numero_aluno; i++){
        fgetc (stdin);
        printf("digite o nome do aluno %d :\n", i + 1);
        fgets (dados.nome,100,stdin);
        printf ("digite a nota do aluno %d :\n", i + 1);
        scanf("%lf", &dados.nota);
        printf("digite a frequencia do aluno %d :\n", i + 1);
        scanf("%lf", &dados.frequencia);

        fprintf(arquivo, "%s",dados.nome);
        fprintf(arquivo, "%.0lf\n",dados.nota);
        fprintf(arquivo, "%.0lf\n\n",dados.frequencia);

        // media_nota += dados.nota;
        // frequencia_media += dados.frequencia;
    }
    // media_nota = media_nota / numero_aluno;
    // frequencia_media = frequencia_media  / numero_aluno;

    // fprintf(arquivo, "%.1lf\n",media_nota);
    // fprintf(arquivo, "%.1lf%%\n",frequencia_media);


    fclose(arquivo);
    return 0;
}


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

    int quant;
    Aluno aluno [100];
    char nome_arquivo[20];
    double media_nota = 0;
    double frequencia_media = 0;
    double percentual = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s",nome_arquivo);
    arquivo = fopen (nome_arquivo,"r");

    if(arquivo == NULL){
        printf("arquivo invalido\n");
        exit(1);
    }
    // printf("arquivo aberto\n");

    fscanf(arquivo,"%d",&quant);

    for (int i = 0; i < quant;i++){
        fgetc(arquivo);   //lendo os '\n' do arquivo
        fgetc(arquivo);

        fgets(aluno[i].nome,100,arquivo);
        fscanf(arquivo,"%lf",&aluno[i].nota);
        fgetc(arquivo);
        fscanf(arquivo,"%lf",&aluno[i].frequencia);

        media_nota += aluno[i].nota;
        frequencia_media += aluno[i].frequencia;
    }
    media_nota = media_nota / quant;
    frequencia_media = frequencia_media  / quant;



    for (int i = 0; i < quant; i++)
    {
        if (aluno[i].nota >= 6){
            percentual++;
        }
    }

    percentual = (percentual / quant) * 100;
    printf("\nnota media: %.1lf\n",media_nota);
    printf("frequencia media: %.1lf%%\n",frequencia_media);
    printf("percentual de aprovacao: %.1lf%%\n",percentual);
    printf("\n");
    printf("nome dos alunos com nota acima da nota media:\n");
    for (int i = 0; i < quant; i++)
    {
        if (aluno[i].nota >= media_nota){
            printf("%s",aluno[i].nome);
        }
    }
    
    fclose(arquivo);
    return 0;
}
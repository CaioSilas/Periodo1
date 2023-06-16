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
    FILE *saida;


    int quant;
    Aluno aluno [100];
    char nome_arquivo[20];
    double media_nota = 0;
    double frequencia_media = 0;
    double percentual = 0;

    // lendo o nome do arquivo para converção
    printf("Digite o nome do arquivo: ");
    scanf("%s",nome_arquivo);
    arquivo = fopen (nome_arquivo,"r");
    saida = fopen ("alunos.dat", "wb");
    
    //validando se e possivel converte
    if(arquivo == NULL || saida == NULL){
        printf("arquivo invalido\n");
        exit(1);
    }
    printf("arquivo alunos.dat criado com sucesso\n");

    fscanf(arquivo,"%d",&quant);
    fwrite(&quant,sizeof(int),1,saida); //numero de int de alunos que vai ser gravado no novo arquivo 

    //lendo os dados do arquivo passado e fazendo os calclulos
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

    fwrite(aluno,sizeof(Aluno),quant,saida); //dados que vao ser gravados no novo arquivo(vetor de alunos)

    media_nota = media_nota / quant;
    frequencia_media = frequencia_media  / quant;


    //calculando o percentual
    for (int i = 0; i < quant; i++)
    {
        if (aluno[i].nota >= 6){
            percentual++;
        }
    }

    percentual = (percentual / quant) * 100;

    //imprimindo na tela os resultados
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

    //fechando o arquivo e o arquivo binario criado
    fclose(saida);
    fclose(arquivo);
    return 0;
}
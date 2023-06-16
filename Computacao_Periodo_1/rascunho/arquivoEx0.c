// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// abrindo arquivo file txt para leitura 

FILE *arquivo = fopen ("file.txt", "r"); //"w"  //"a+"

...

fclose(arquivo);

//ABRINDO ARQUIVO EM APPEND

FILE *arquivo;

...

arquivo = fopen ("file.txt", "a+"); //"w"  //"a+"

...

fclose(arquivo);


//IMPREÇAO NO ARQUIVO

int fprintf(FILE *stream,const char *format, ...);

//EXEMPLO 

FILE *arquivo = fopen ("text.txt", "w");

int n = 10;
fprintf (arquivo, "o valor de n = %d\n", n);

fclose(arquivo);

//EXEMPLO 2


int main (){
    int inteiro = 10;
    char palavra[10] = "palavra";


    //DECLARAÇÃO E CARREGAMENTO DO ARQUIVO 
    FILE *arquivo = fopen("file.txt", "w");

    //GRAVANDO UM INTEIRO EM UMA PALAVRA NO ARQUIVO 
    fprintf (arquivo, "%s - %d\n" , palavra, inteiro);

    //FECHANDO (E SALVANDO) O ARQUIVO
    fclose (arquivo);


    return 0;
}


//LER 

int fscanf (FILE *stream,const char *format,...);

//EXEMPLO 

FILE *arquivo = fopen ("file.txt", "r");

// LENDO UM INTEIRO E UM CARACTERE SEPARADOS POR UM ESPAÇO

int inteir;
char caractere;

fscanf (arquivo, "%d %c",&inteiro, &caractere);

fclose(arquivo);

//EXEMPLO 2

int main (){
    //DECLARAÇÃO E CARREGAMENTO DO ARQUIVO 
    FILE *arquivo = fopen ("file.txt", "r");

    //LENDO O TAMANHO DO VETOR
    int n; // no maximo 1000
    fscanf (arquivo, "%d", &n);

    //CRIANDO E LENDO O VETOR
    int vetor[100];
    for (int i = 0; i < n; i++){
        fscanf (arquivo, "%d", &vetor[i]);
    }

    ...

    fclose(arquivo);

    return 0;
}

// le uma linha, incluindo o '\n' de um arquivo (lembram dela ?)
char *fgets (char *str,int num,FILE *stream);
 
//le uma caractere e retorna (sim , retorna como um inteiro)
int fgets (FILE *stream);

//retorna 0 se a posição atual nao for o fim do arquivo e um valor diferente de 0 caso contrário
int feof (FILE *stream);

//escreve um string no arquivo a função retorna E0f em caso de erro 
int fputs(çconst char *str,FIlE *stream);

//escreve um caractere no arquivo (sim, como um inteiro); a função retorna E0F em caso de erro
int fputc(int character, FILE *stream);

//atualiza o arquivo (grava todo o conteudo que ainda nao foi gravado) ; retorna 0 em caso de sucesso e E0F caso contrário
int fflush(FILE *stream);



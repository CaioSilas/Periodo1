// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


//conta o numero de espaços em branco

// int main (int argc, char **argv){
//     int nEspacos = 0;
//     char c;

//     FILE *arquivo;

//     arquivo = fopen(argv[1], "r");  //argv[1] é o primeiro argumento
    
//     while (!feof(arquivo)){
//         c = fgetc(arquivo);
//         if (c == ' ') nEspacos++;
//     }
//     fclose(arquivo);

//     printf ("o arquivo possui %d espaços.\n",nEspacos);

//     return 0;
// }



//copia e remove espaço

// int main (int argc, char **argv){

//     char c;
//     FILE *entrada , *saida;

//     entrada = fopen(argv[1], "r");
//     saida = fopen(argv[2], "w");

//     while (!feof(entrada)){
//         c = fgetc(entrada);
//         if ( c != ' ' && c != EOF)
//             fputc(c, saida);
//     }

//     fclose(entrada);
//     fclose(saida);

//     return 0;
// }



// le uma matriz 

void leMatriz (int matriz [100][100], char arquivo[], int *n, int *m){

    FILE *entrada = fopen(arquivo , "r");

    fscanf (entrada , "%d" , n);
    fscanf (entrada , "%d" , m);

    for (int i = 0; i < *n; i++){
        for (int j = 0; j < *m;j++){
            fscanf(entrada , "%d", &matriz[i][j]);
        }
    }
    fclose (entrada);
}
//escreve um matriz em um arquivo

void escreveMatriz(int matriz[][100], char arquivo[],int n, int m){
    FILE *saida = fopen (arquivo, "w");
    fprintf(saida , "%d %d",n,m);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m;j++){
            if (j > 0){
            fprintf(arquivo, " ");
            }
            fprintf(arquivo, "%d", matriz[i][j]);
        }
        fprintf(arquivo,"\n");
    }
    fclose(saida);
}

int main (int argc, char **argv){

    int matriz [100][100];
    int n,m;

    leMatriz(matriz, argv[1],&n,&m);

    printf ("Dimencao : %d x %d\n\n",n , m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m;j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}


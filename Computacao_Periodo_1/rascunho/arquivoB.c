// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


// FILE *arquivo = fopen ("arquivo.dat", "wb");

// fwrite (&aluno.matricula, sizeof (int),1 , arquivo);
// fwrite (&aluno.nota, sizeof (int),1 , arquivo);

// fclose(arquivo);


// //GRAVAR EM bytes
// size_t fwrite(const void *ptr, size_t size, size_t cont, FILE *file);

// //EXEMPLO
// FILE *arquivo = fopen("texto.dat", "wb")

// //escrevendo sizeof(int) bytes no arquivo
// int n = 10;
// fwrite(&n, sizeof(int), 1 , arquivo);
// fclose(arquivo);

// //EXEMPLO 2
// int main(){
//     int inteiro = 10;
//     char palavra[10]= "palavra";

//     //declaração e carregamento do arquivo
//     FILE *arquivo = fopen ("file.dat", "wb");

//     //escrevendo sizeof(int) * 1 bytes no arquivo
//     fwrite(&inteiro,sizeof(int),1, arquivo);
    
//     //escrevendo sizeof(char) * 10 bytes no arquivo
//     fwrite(palavra, sizeof(char),10 , arquivo);

//     //fechando (e salvando) o arquivo
//     fclose(arquivo);

//     return 0;
// }


//usando função 

// void gravaVetor(int n, int *vetor, char path[]){
//     //declaração e carregamento do arquivo
//     FILE *arquivo = fopen (path,"wb");

//     //escrevendo sizeof(int) * 1 bytes no arquivo
//     fwrite(&n,sizeof(int),1, arquivo);
    
//     //escrevendo sizeof(char) * 10 bytes no arquivo
//     fwrite(vetor, sizeof(char),10 , arquivo);

//     //fechando (e salvando) o arquivo
//     fclose(arquivo);
// }

// int main (){
//     int n = 10;
//     int vetor[] = {0 , 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     gravaVetor(n,vetor,"vetor.dat");
//     return 0; 
// }

// //PARA LER EM BYTES
// size_t fread(void *ptr,size_t size, size_t count, FILE *file);


// //EXEMPLO 
// FILE *arquivo = fopen("file.dat", "wb");

// //lendo um inteiro e um caractere
// int inteiro;
// char caractere
// fread (&inteiro,sizeof(int),1, arquivo);
// fread (&caractere,sizeof(char),1,arquivo);

// fclose(arquivo);

// int main(){
//     int inteiro = 10;
//     char palavra[10] = "caio silas";

//     //declaração e carregamento do arquivo
//     FILE *arquivo = fopen ("file.dat", "wb");

//     //escrevendo sizeof(int) * 1 bytes no arquivo
//     fread(&inteiro,sizeof(int),1, arquivo);
    
//     //escrevendo sizeof(char) * 10 bytes no arquivo
//     fread(palavra, sizeof(char),10 , arquivo);

//     printf("%d - %s\n",inteiro,palavra);

//     //fechando (e salvando) o arquivo
//     fclose(arquivo);

//     return 0;
// }

// A FUNÇÃO fseek reposiciona o indicador de posição em um arquivo
// int fseek (FILE *file,long int offset, int whence);

/* file: ponteiro para o arquivo considerado
 offset: quantidade de bytes de deslocamento (podemos utilizar numeros negativos)
 whence: indica de onde o deslocamento é feito
    °SEEK_SET : inicio do arquivo
    °SEEK_CUR : posição atual no arquivo
    °SEEK_END : final do arquivo
*/

// A FUNÇÃO ftell retorna a posição atual em um arquivo (em bytes):
long int ftell(FILE *file);
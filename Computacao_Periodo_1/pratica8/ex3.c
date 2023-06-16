// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define t 71

int main (){
    char nome[t],memoria[t];
    int i,aux;


    printf ("Digite o nome completo:");
    fgets(nome, t,stdin);

    for (i=0;nome[strlen(nome)-2 -i] != ' ';i++){
        memoria[strlen(nome) - 2 - i] = nome [strlen(nome) - 2 - i];
        aux = strlen(nome)-2-i;
        
    }
    printf ("%s",memoria + aux);
    printf (", ");
    nome[aux]='\0';
    printf ("%s\n",nome);

    int letras = 0;
    for(int j = 0; j < aux;j++){
        if (nome[j] == ' '){
            continue;
        }
        else{
            letras++;
        }
    }
    letras += i;
    printf ("total de letras: %d\n",letras);
    printf ("total de letars do ultimo nome:%d \n",i);

    return 0;
}
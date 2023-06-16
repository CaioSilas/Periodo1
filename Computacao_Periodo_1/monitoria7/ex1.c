// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define T 100

int main(){
    char normal[T];
    char contrario[T];
    int aux;
    int i;

    printf ("ENTRADA\n");
    scanf("%s",normal);

    aux = strlen (normal);

    for (i =0; i < aux;i++){
        contrario[i] = normal[aux - 1 - i];
    }
    printf ("\n");
    printf ("SAIDA\n");

    if (strcmp(normal,contrario) == 0){
        printf ("E UM PALINDROMO\n");
    }
    else {
        printf ("NAO E UM PALINDROMO\n");

    }


    return 0;
}

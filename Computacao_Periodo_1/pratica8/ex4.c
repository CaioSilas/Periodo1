// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define T 100


int main(){
    char frase[T];
    int i,aux;

    printf ("Digite o texto para censurar:\n");
    fgets(frase, T,stdin);

    int tam = strlen(frase);
    frase [tam - 1  ] = '\0';

    aux = strlen(frase);


    for (i = 0;i < aux;i++){
        switch (frase[i])
        {
        case 'a':
            frase[i] = '@';
            continue;
        case 'e':
            frase[i] = '_';
            continue;

        case 'i':
            frase[i] = '|';
            continue;
            
        case 'o':
            frase[i] = '0';
            continue;

        case 'u':
            frase[i] = '#';
            continue;

        case 's':
            frase[i] = '$';
            continue;
    }
    }
    printf ("\n");
    printf ("%s",frase);


    return 0;
}
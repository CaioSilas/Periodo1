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

    while (1){
        printf ("Digite uma palavra ou fim para sair:\n");
        fgets(normal, T,stdin);

        int tam = strlen(normal);
        normal [tam - 1  ] = '\0';

        if (strcmp (normal, "fim") == 0){
            break;
        }

        aux = strlen (normal);

        for (i = 0; i < aux;i++){
            contrario[i] = normal[aux - 1 - i];
        }
        printf ("\n");
        printf ("SAIDA\n");
        contrario[i]= '\0';

        if (strcmp(normal,contrario) == 0){
            printf ("%s E UM PALINDROMO\n",normal);
            printf ("\n");
        }
        else {
            printf ("%s NAO E UM PALINDROMO\n",normal);
            printf ("\n");

        }
    }
    


    return 0;
}

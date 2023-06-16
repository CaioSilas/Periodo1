#include <stdio.h>
#include <string.h>


int main (){
    printf ("digite uma palavra\n");
    char palavra[100];

    scanf ("%s",palavra);

    if (strcmp (palavra, "ufop") == 0){
        printf ("bem vindo a ouro preto\n");
    }

    return 0;
}
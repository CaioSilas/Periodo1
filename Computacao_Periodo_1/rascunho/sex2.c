#include <stdio.h>
#include <string.h>

int main (){
    printf ("digite uma palavra\n");
    char palavra[100];
    fgets (palavra, 99, stdin);// inclui o \n na string 

    //truque para remover o \n do final da string 

    int tam = strlen(palavra);
    palavra [tam - 1  ]= '\0';

    if (strcmp (palavra, "ufop") == 0){
        printf ("bem vindo a ouro preto\n");
    }

    return 0;
}
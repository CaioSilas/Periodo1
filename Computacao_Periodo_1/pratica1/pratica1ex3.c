// caio silas de araujo amaro, turma:41, matricula: 2114111

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char letra;

    printf("usuario digitar uma letra\n");
    scanf("%c", &letra);
// quando a letra e vogal
    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra =='I' ||
    letra == 'u' || letra == 'U' || letra == 'o' || letra == 'O')
    {
        printf("a letra '%c' e vogal\n", letra);
    }
    else{
    printf("a letra '%c' nao e vogal\n", letra);
    }
    return 0;
}
// caio silas de araujo amaro, turma:41, matricula:2114111

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("digite o ano que queira saber se e bissexto\n");
    scanf("%i", &ano);

    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("acertou ano '%i' e bissexto!\n", ano);
        return 0;
    }
    if (ano % 100 == 0 && ano % 400 == 0)
    {
        printf("acerto o ano '%i' e bissexto\n", ano);
        return 0;
    }
    printf("errou o ano '%i' nao e bissexto\n", ano);
    return 0;
}
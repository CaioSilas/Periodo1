//conceito 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char conceito;
    printf("digite a nota do aluno \n");
    scanf("%c", &conceito);

    if (conceito== 'A')
    printf("exelente!\n");
    else if (conceito== 'B')
    printf("otimo!z\n");
    else if (conceito == 'C')
    printf("bom!\n");
    else if (conceito== 'D')
    printf("regular!\n");
    else if (conceito == 'E')
    printf("ruim!\n");
    else if (conceito== 'F')
    printf ("reprovado mane\n");
    else 
    printf ("ERRO DIGITOU NOTA ERRADA!");
    
    return 0;
}
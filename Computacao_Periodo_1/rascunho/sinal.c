// caio silas de araujo amaro, turma: 41, matricula:2114111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    double a, b;
    char sinal;
    printf("digite o valor de a\n"); scanf("%lf", &a);
    printf("digite o valor de b\n"); scanf("%lf", &b);
    printf("digitar o sinal da operacao\n");
    scanf("%c", &sinal);
    scanf("%c", &sinal);
    
    if (sinal == '+')//adicao
    {
        double x = a + b;
        printf("o resultado e %lf\n", x);
    }
    else if (sinal == '-')//subtracao 
    {
        double x = a - b;
        printf("o resultado e %lf\n", x);
    }
    else if (sinal == '*')//multiplicacao
    {
        double x = a * b;
        printf("o resultado e %lf\n", x);
    }
    else if (sinal == '/')//subtracao
    {
        double x = a / b;
        printf("o resultado e %lf\n", x);
    }
return 0;
}
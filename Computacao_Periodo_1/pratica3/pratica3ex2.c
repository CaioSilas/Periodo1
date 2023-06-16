//caio silas de araujo amaro, matricula:21.1.4111,turma:41
//calculo de raiz do segundo grau 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int  calculaRaizes(double a,double b,double c,double *x1,double *x2);
int  calculaRaizes(double a,double b,double c,double *x1,double *x2)
{
    double delta = pow(b, 2) -4 * a * c;
     if(delta >= 0)
    {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 1;
    }
    else {
        return 0;
    }

}

int main(){
    double a,b,c,resultado,x1,x2;
    printf("digite o valor de a\n"); scanf ("%lf", &a);
    printf("digite o valor de b\n"); scanf ("%lf", &b);
    printf("digite o valor de c\n"); scanf ("%lf", &c);
    resultado = calculaRaizes(a ,b ,c,&x1,&x2);

    if(resultado == 1){
        printf ("as raizes sao %.2lf e %.2lf",x1,x2);
    }
    else {
        printf("delta negativo");
    }


    return 0;
}
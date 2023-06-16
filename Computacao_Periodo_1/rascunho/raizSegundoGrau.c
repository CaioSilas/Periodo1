// equaçao de segundo grau 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    double a, b, c, delta;
    printf("digite o valor de a\n"); scanf ("%lf", &a);
    printf("digite o valor de b\n"); scanf ("%lf", &b);
    printf("digite o valor de c\n"); scanf ("%lf", &c);
    delta = pow(b, 2) -4 * a * c;
    if(delta < 0)
    {
        printf("nao existem raizes reais\n");
    }
    else if(delta == 0){
        double x = (-b + sqrt(delta)) / (2 * a);
        printf("raizes identicas x1 = x2 = %lf\n", x);
        }
    else{
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 e igual %lf\n", x1);
        printf("x2 e igual %lf\n", x2);
        }
    return 0;
}
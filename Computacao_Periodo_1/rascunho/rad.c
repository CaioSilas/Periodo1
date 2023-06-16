#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main (){
    double hipotenusa , alpha ;
    printf("digite os valores da hipotenusa e alpha(em graus):\n");
    scanf("%lf", &hipotenusa);
    scanf("%lf", &alpha);
    alpha = alpha * PI / 180.0;
    double cateto1 = cos(alpha) * hipotenusa;
    double cateto2 = sin(alpha) * hipotenusa;
    printf("os lados do trinangulo sao:\n  - %lf\n  -%lf\n  -%lf\n, hipotenusa, cateto1, cateto2");
    return 0;
    }
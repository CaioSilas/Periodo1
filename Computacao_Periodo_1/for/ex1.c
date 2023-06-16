#include <stdio.h>
#include <math.h>

int main (){
    int x;
    printf ("digite o numero de termos\n");
    scanf ("%d",&x);
    
    double pi = 0;
    int i;
    double sinal = 1;
    
    for (i = 0; i < x;i++){
            pi += sinal * (1.0 /(1 + i*2));
            sinal *= -1;
    }
    pi *= 4;
    printf ("o valor de pi:%.6lf",pi);

    return 0;
}
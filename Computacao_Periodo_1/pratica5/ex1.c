// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calcula(int termos){
    double pi,divisor;
    int i = 1;
    double s = 1;
    divisor = 3;
    while(i <= termos) { 
        if (i % 2 != 0){
            s -= 1/pow(divisor,3);
        }
        else {
            s += 1/pow(divisor,3);
        }
        divisor += 2;
        i++;
    }
    pi = cbrt(s * 32);
    
    return pi;
}


int main (){
    double pi;
    int termos;

    printf ("digite o numero de termos\n");
    scanf ("%d", &termos);
    pi = calcula(termos);

    printf ("o valor de pi:%.14lf\n",pi);

    return 0; 
}
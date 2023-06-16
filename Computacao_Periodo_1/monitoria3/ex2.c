//caio silas de araujo amaro 
//matricula: 21.1.4111

/*Dado um número x, faça um programa que leia este número e emuma função calcule x² E x³.
Os resultados devem ser impressos dentro da funçãoprincipal main(). */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void calcule(double x,double *quadrado,double *cubo){
    *quadrado = pow(x, 2);
    *cubo = pow(x, 3);
}

int main (){
    double x,quadrado,cubo;
    printf ("o usuario deve digitar um numero\n");
    scanf ("%lf",&x);
    calcule (x,&quadrado,&cubo);
    

    printf ("%.0lf ao quadrado e igual a = %.0lf\n",x,quadrado);
    printf ("%.0lf ao cubo e igual a = %.0lf\n",x,cubo);


    return 0;
}

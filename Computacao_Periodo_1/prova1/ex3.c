//caio silas lfe araujo amaro
//matricula : 21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){
    double peso, altura;
    double imc;
    
    printf ("o usuario deve digitar o peso e a altura\n");
    scanf ("%lf",&peso);
    scanf ("%lf",&altura);

    imc = peso / (pow(altura, 2));

    if (imc < 20)
    printf ("imc abaixo do normal\n");
    else if (imc < 25)
    printf ("imc normal\n");
    else if (imc < 40)
    printf ("imc indica sobrepeso\n");
    else 
    printf ("imc indica obsidade morbida\n");

    return 0;
}
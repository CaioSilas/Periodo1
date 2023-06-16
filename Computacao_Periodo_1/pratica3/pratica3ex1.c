//caio silas de araujo amaro, matricula:21.1.4111,turma:41
//calculo de temperatura 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//funcao para concerter
void converteCelsius(float celsius,float *farenheit, float *kelvin);
void converteCelsius(float celsius,float *farenheit, float *kelvin){
    *farenheit = (celsius - 32) * 5 / 9;
    *kelvin = celsius - 273.15;
}

int main(){
    float celsius,farenheit,kelvin;
    printf ("o usuario deve digitar o valor em celsius:\n");
    scanf ("%f",&celsius);
    converteCelsius(celsius,&farenheit,&kelvin);

    printf("%.2f celsius = %.2f farenheit\n",celsius,farenheit);
    printf("%.2f celsius = %.2f kelvin\n",celsius,kelvin);


    return 0;
}
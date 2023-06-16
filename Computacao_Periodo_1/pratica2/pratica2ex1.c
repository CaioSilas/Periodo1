// caio silas de araujo amaro, turma:41, matricula: 2114111
//conversor de unidade 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define pi 3.141593

//graus para rad
double GrausParaRad (double x){
    return x * pi / 180;
}
// rad para graus
double RadParaGraus (double x){
    return x * 180 / pi;
}
// celcius para fahrenheit
double CelciusParaFah (double x){
    return x * 9 / 5 + 32;
} 
// celcius para kelvin 
double CelciusParakelvin (double x){
    return  x + 273.15;
}
//fahrenheit para celcius 
double FahParaCelcius (double x){
    return (x - 32) * 5 / 9;
}
//fahrenheit para kelvin
double FahParaKelvin (double x){
    return (x - 32) * 5 / 9 + 273.15;
}
//kelvin para celcius 
double KelvinParaCelcius (double x){
    return x - 273.15;
} 
//kelvin para fahrenheit
double KelvinParaFah (double x){
    return (x - 273.15) * 9 / 5;
}

int main (){
    int opcao1, opcao2;
    double valor;

    printf("### converso de unidade ###\n\n1)angulo\n2)temperatura\n\ndigite uma opcao:");
    scanf ("%d", &opcao1);
    switch (opcao1){
        case 1:
            printf ("qual a unidade de origem?\n\n1) Grau\n2) Radianos\nselecione uma opcao:");
            scanf ("%d", &opcao2);
            switch (opcao2){
                case 1:
                    printf ("digite o valor em graus\n");
                    scanf ("%lf", &valor);
                    printf ("o valor em radianos: %lf", GrausParaRad(valor));
                    break;
                case 2:
                    printf ("digite o valor em radianos\n");
                    scanf ("%lf", &valor);
                    printf ("o valor em graus: %.2lf", RadParaGraus(valor));
                    break;
                default:
                    printf ("apenas 1 e 2");
                    break;
            }
            break;
        case 2:
            printf ("qual a unidade de origem:\n\n1)celsios\n2)fahrenhet\n3)kelvin\n\nselecione uma opcao:");
            scanf ("%d", &opcao2);
            switch (opcao2){
                case 1:// celsios
                    printf ("digite o calor em celsios:");
                    scanf ("%lf", &valor);
                    printf ("o valor em fahrenhet: %.2lf\n", CelciusParaFah(valor));
                    printf ("o valor em kelvin: %.2lf\n", CelciusParakelvin(valor));
                    break;
                case 2://fahrenhet
                    printf ("digite o calor em fahrenhet:");
                    scanf ("%lf", &valor);
                    printf ("o valor em celcius: %.2lf\n", FahParaCelcius(valor));
                    printf ("o valor em kelvin: %.2lf\n", FahParaKelvin(valor));
                    break;
                case 3://kelvin
                    printf ("digite o calor em kelvin:");
                    scanf ("%lf", &valor);
                    printf ("o valor em celcius: %.2lf\n", KelvinParaCelcius(valor));
                    printf ("o valor em fahrenhet: %.2lf\n", KelvinParaFah(valor));
                    break;
                default:
                    printf ("ate o numero 3 apenas");
                    break;
            } 
            break;
        default:
            printf ("apenas 1 e 2");
            break;

    }
    return 0;
}
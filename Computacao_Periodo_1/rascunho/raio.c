// calcula area do circulo 

#include <stdio.h>
#include <math.h>

int main(){
    // declarção da constante de pi
    const double PI = 3.1415952;
    double raio;

    printf("digitar o raio do circulo: ");
    scanf("%lf", &raio);
    
    if ( raio >= 0)
    {
    // calculando e imprimindo a área 
    double area = PI * pow(raio, 2);
    printf("\n area do circulo: %lf\n", area);
    }
    else
    {
        printf("erro, raio negativo!\n");
        }
    return 0;
}
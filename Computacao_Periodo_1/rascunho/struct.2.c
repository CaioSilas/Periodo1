// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

struct Tempo{
    int horas;
    int minutos;
    int segundos;
};

int main (){
    struct Tempo tempo;
    int segundos;

    printf ("\ndigite o tempo em segundos: ");
    scanf("%d",&segundos);

    tempo.horas = segundos / 3600;
    tempo.minutos = (segundos % 3600) / 60;
    tempo.segundos = (segundos % 3600) % 60;

    printf("tempo em horas   :%d\n",tempo.horas);
    printf("tempo em minutos :%d\n",tempo.minutos); 
    printf("tempo em segundos:%d\n",tempo.segundos);  

    return 0;
}
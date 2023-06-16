// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int b,t;
    int nota = (160 * 70)/2;
    int areadecorte;

    // printf ("DIGITE O TAMANHO DO CORTE DE BASE:\n");
    scanf ("%d",&b);
    // printf ("DIGITE O PONTO NO TOPO\n");
    scanf ("%d",&t);
    
    areadecorte = ((b+t) * 70)/2;

    if (areadecorte > nota){
            printf ("1\n");
    }
    else if (areadecorte < nota){
            printf ("2\n");
    }
    else {
            printf ("0\n");
    }

    return 0;
}
//caio silas 
// matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int x;
    int maior = -999999;
    int menor = 999999;
    int tentativa;

    do {
        printf ("o usuario deve digitar numeros 5 e 0 para sair\n");
        scanf ("%d", &x);
        if (x == 0){
            break;
        }
        if (x > maior){
            maior = x;
        }
        
        if (x < menor){
            menor = x;
        }
        
        tentativa++;
    }
    while (x != 0);
    printf (" o maior e %d\n o menor e %d\n",maior, menor);

    return 0;
}
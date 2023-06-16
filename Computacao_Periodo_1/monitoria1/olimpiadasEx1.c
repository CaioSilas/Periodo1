//caio silas de araujo amaro 
//matricula: 21.1.4111
//chagas o menino que gosta de ovo

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int numero,expoente;
    printf ("o usuario deve digitar um numero\n");
    scanf ("%d",&numero);
    printf ("o usuario deve digitar um expoente\n");
    scanf ("%d",&expoente);
    
    expoente = pow(numero, expoente);

    while (numero){
        printf ("o resultado e:%d\n",expoente);
        break;
    }

    return 0;
}
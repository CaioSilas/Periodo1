//caio silas de araujo amaro ,matricula:21.1.4111 ,turma: 41

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int soma,numero;

    while(numero){
        printf ("o usuario deve digitar um numero\n");
        scanf ("%d", &numero);
        if (numero == 0){
            printf("esse numero nao e valido");
            break;
        }
        else if (numero %2 == 0)//quando o numero e par
        {
            soma = numero + (numero + 2) + (numero + 4) + (numero + 6) + (numero +8);
            printf ("a valor e %d\n", soma);
        }
        else//quando o numero e impar
        {
            soma =(numero + 1) + (numero + 3) + (numero + 5) + (numero + 7) + (numero + 9);
            printf ("o valor e %d\n",soma);
        }
    }
    return 0;
}
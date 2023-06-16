// programa para saber se o numero e par ou impar

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int numero;
    printf("digite um numero\n");
    scanf("%d", &numero);
if(numero %2 == 0){
    printf("o numero %d e par\n",numero);
}
else{
    printf("o numero %d e impar\n",numero);
}
return 0;
}
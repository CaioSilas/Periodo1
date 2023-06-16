//sorteio

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL)); 
    // estamos usando o numero 1 como semete 

    int sorteio = rand() % 100;
    printf("Nro aleatorio entre 0 e 99: %d\n", sorteio);
return 0;
}

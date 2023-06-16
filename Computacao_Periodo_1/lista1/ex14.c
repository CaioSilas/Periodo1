//caio silas 
// matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int aleatorio = rand() % 6 + 1;

    printf ("%d\n",aleatorio);

    return 0;
}
//duplica um valor 

#include <stdio.h>
#include <math.h>

void duplica(int *p){
     *p = pow(*p, 2);
}

int main(){
    int valor= 2;
    duplica (&valor);
    printf ("o digite o valor de x e: %d\n ",valor);
    return 0;
}
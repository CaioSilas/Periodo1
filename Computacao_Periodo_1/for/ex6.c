#include <stdio.h>
#include <math.h>

int main (){
    int soma = 0;

    for (int cont =1;cont <= 100;cont++){
        if (cont % 5 == 0)
        continue;
        soma += cont;
    }
    printf ("soma = %d\n", soma);
    return 0;
}
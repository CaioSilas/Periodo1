//caio silas 
// matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void cu (int *numero);
void cu (int *numero){
    if (*numero % 2 == 0){
        *numero  += 5;
    }
    else {
        *numero += 8;
    }
}




int main(){
    int numero;
    printf ("o usuario deve digitar um numero\n");
    scanf ("%d", &numero);
    cu (&numero);

    printf ("o resultado %d", numero);


    return 0;
}
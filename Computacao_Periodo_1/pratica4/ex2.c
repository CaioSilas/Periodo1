// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111
//numero primo

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_prime (int *n,int p);
int is_prime (int *n,int p){
    p = 2;
    int primo = sqrt(*n);
    int eprimo = 1;
    while (p <= primo){
    if (*n % p == 0){
        eprimo = 0;
        break;
    }
    p++;
    }
    
    if (eprimo == 1){
        return 1;
    }
}

int main (){
    int n,p,resultado;
    printf ("o usuario deve digitar um numero\n");
    scanf("%d",&n);
    resultado = is_prime(&n,p);
    switch (resultado)
    {
    case 1:
        printf ("esse numero e primo\n");
        break;
        
    default:
        printf ("esse numero nao e primo\n");
        break;
    }


    return 0;
}
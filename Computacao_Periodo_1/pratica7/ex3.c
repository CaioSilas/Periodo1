//caio silas de arauio amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define TAM 501

int main (){
    int n, vet [100], i , j ,aux ,cont;
    printf ("digite o valor de n\n");
    scanf ("%d",&n);

    for (int j = 0; j < 100;j++){
        vet[j] = rand() % n + 1;
    }

    int A[TAM];
    for (i = 0 ; i < TAM;i++){
        A[i] = 0;
    }
    for (i = 0; i < 100;i++){
        aux = vet[i];
        A[aux]++;
    }
    for (i = 1; i <= n;i++){
        if (cont >=2){
            printf ("o numero %d aparece %d vezes\n",i, A[n]);
        }
        else if (A[i] == 1) {
            printf ("o numero %d patece apenas uma vez\n",i);
        }
        else {
            printf ("o numero %d aparece apenas uma vez\n",i);
        }
}
    return 0;
}
//caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define TAM 15

int main (){
    double gaveta[TAM];
    int aux;
    int n;
    int i,k;

    printf ("DIGITE O NUMERO DE DESLOCAMENTO\n");
    scanf ("%d",&n);

    for (i = 0;i < TAM;i++){
        printf ("digite numero %d\n",i+1);
        scanf ("%lf",&gaveta[i]);
    }
    for (k = 0;k < TAM - n;k++){
        for (i = 0;i < n;i++){
            aux = gaveta[n + k - i];
            gaveta[n + k - i] = gaveta[n - 1 + k - i];
            gaveta[n - 1 + k - i] = aux;
        }
    }
    for (i = 0;i < TAM;i++){
        printf ("%.0lf ",gaveta[i]);
    }




    return 0;
}


// for (int i = 0; i < aroba; i++){
//         printf ("digite a numero %d:",i+1);
//         scanf("%lf",&numero[i]);
//     } 

//     for (int i = aroba - 1; i >= 0; i--){
//         printf ("%.2lf ",numero[i]);
//     }

//     printf ("\n");

//caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define aroba 20


int main (){
    int numero [aroba];
    int n;

    printf ("DIGITE O NUMERO DE TERMOS\n");
    scanf ("%d", &n);

    if (n <= 20){
        for (int i = 0; i < n; i++){
            printf ("digite a numero %d:",i+1);
            scanf("%d",&numero[i]);
        } 

        for (int i = n - 1; i >= 0; i--){
            printf ("%d ",numero[i]);
        }
    }
    printf ("\n");
return 0;
}
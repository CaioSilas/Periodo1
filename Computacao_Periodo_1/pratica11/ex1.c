  // caio silas de araujo amaro
 //turma:41
//matricula:21.1.4111

/*
    Escreva um programa que leia os elementos de um vetor (vet1) de inteiros, dado o seu tamanho n.
    Em seguida, o programa ir´a calcular a m´edia desses n´umeros e gerar dois outros vetores. Um com os valores
abaixo da m´edia e outro com os valores iguais ou superiores a m´edia.

*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int n;
    printf("Dgite o Valor de n:");
    scanf("%d",&n);
    int media = 0;
    int *vet1 = malloc(n * sizeof(int));
    
    int cont = 0;
    

    for (int i = 0; i < n; i++){
        scanf ("%d",&vet1[i]);
        media += vet1[i];
    }
    media = media / n;

     for (int i = 0; i < n; i++)
    {   

        if (vet1[i] < media){
            cont ++;
        }
    }
    int *vet2 = malloc(cont * sizeof(int));
    int *vet3 = malloc((n - cont) * sizeof(int));

    printf ("A media e :%d\n",media);
    int j = 0;
    int k = 0;

    for (int i = 0; i < n; i++)
    {   
        if (vet1[i] < media){
            vet2[j] = vet1[i];
            j++;
        }
        else if (vet1[i] >= media){
            vet3[k] = vet1[i];
            k++;
        }
    }
    printf("Vetor com os valores abaixo da media :[");
    for (int i = 0; i < cont; i++){
        printf("%d ",vet2[i]);
    }
    printf("]\n");
    printf("Vetor com os valores acima ou igual a media :[");
    for (int i = 0; i < n - cont; i++){
        printf("%d ",vet3[i]);
    }
    printf("]");
    
    free(vet1);
    free(vet2);
    free(vet3);



    return 0;
}
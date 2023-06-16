#include <stdio.h>
#include <math.h>

int main(){

    int x,y;
    printf ("O USUARIO DEVE DIGITAR OS VALOR DE X E Y\n");
    scanf ("%d %d",&x, &y);

    //imprimindo o cabecalho
    printf ("\nTABUADA DE MULTIPLICACAO\n\n");
    printf ("   | ");
    for (int j = x; j <= y;j++){
        if (j % 2 != 0){
            printf ("%3d ",j);
            continue;
        }

    }
    printf ("\n------");
    for (int j = x;j <= y;j++){
        printf ("--");
    }
    printf ("\n");


    //tabuada
    for (int i = x; i <= y;i++){
        if (i % 2 != 0){
        printf ("%2d | ", i);
        continue;}

        for (int j = x; j <= y; j++)
        if (j % 2 == 0){
            printf ("%3d ", i*j);
            continue;
            }
        printf ("\n");
    }
    return 0;
}
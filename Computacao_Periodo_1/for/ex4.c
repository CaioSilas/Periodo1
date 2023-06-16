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
        printf ("%3d ",j);
    }
    printf ("\n----");
    for (int j = x;j <= y;j++){
        printf ("----");
    }
    printf ("\n");


    //tabuada
    for (int i = x; i <= y;i++){
        printf ("%2d | ", i);
        for (int j = x; j <= y; j++)
            printf ("%3d ", i*j);
            printf ("\n");
    }
    return 0;
}
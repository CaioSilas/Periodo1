//caio silas de araujo amaro 
//turma :41
//matricula:21.1.4111
//trapezio isoceles

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int x,y;
    char c,j;
    printf ("o usuario deve digitar o valor de x\n");scanf ("%d",&x);
    printf ("o usuario deve digitar o valor de y\n");scanf ("%d",&y);
        if (x > y){
            printf ("erro : x deve ser menor que y\n");
        }
        else if (x % 2 != 0 || y % 2 !=0){
            printf ("apenas numeros pares sao validos\n");
            return 0;
        }
        while(1){
            for(j=x;j<=y;j++)
            {
                for(c=1;c<=y-j;c++)
                    printf (" ");
                for(c=1;c<=2*j-x;c++)
                    printf ("*");
                    printf ("\n");
            }
        break;
        }
    return 0;
}
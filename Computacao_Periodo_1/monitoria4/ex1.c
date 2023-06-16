// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){
    int x;
    int i, j;
    int n;

    printf ("O USUARIO DEVE DIGITAR OS VALORES DE X\n");
    scanf ("%d", &n);
        
    while (n % 2 == 0){
            printf ("O USUARIO DEVE DIGITAR OS VALORES DE X\n");
            scanf ("%d",&n);
    }
    for (x = n;x >= 1;x-=2){
        for (i = 1; i <= x / 2 ; i++)
        {
            for (j = 1;j <=2* x - i; j++)
            {
                printf (" ");
            }
            for (j = 1; j <= 2 * i - 1; j++){
                printf ("*");
            }
            printf ("\n");
        }
        for (i = x / 2 + 1 ; i <= x; i++)
        {
            for (j = 1;j <=i - 1 + x; j++){
                printf (" ");
            }
            for (j = 1; j<= 2* (x - i) + 1 ; j++){
                printf ("*");
            }
            printf ("\n");
        }
    printf ("\n");
    }
return 0;
}
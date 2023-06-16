// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int n;
    int positivo = 0;
    printf ("DIGITE UM NUMERO\n");
    scanf ("%d",&n);

    printf ("\n");
    if (n > positivo){
        for (int i = 0; i <= n;i++){
            for(int j = 0;j <= n;j++)
            printf ("(%d,%d)\n",i,j);
        }
    }
    else {
        for (int i = n; i <= 0;i++){
            for(int j = n;j <= 0;j++)
            printf ("(%d,%d)\n",i,j);
            }
    }

    return 0;
}
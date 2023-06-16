// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void imprime (int a [][10],int n , int m)
{
    int i,j;
    for (i = 0;i < n;i++){
        for(j = 0; j < m;j++){
            printf ("%d",a[i][j]);
            printf ("\n");
        }
    }
}

int main (){
    int a[10][10];

    //...
    imprime(a,10,10);
    //...
    return 0;
}
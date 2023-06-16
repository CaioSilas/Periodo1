// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define m 4
#define n 3

int main (){
    int a [m][n] = { {1,2,3}, {4,5,6,}, {7,8,9}, {10,11,12}};
    int b [m][n] = { {1,2,3}, {4,5,6,}, {7,8,9}, {10,11,12}};

    int c[m][n];

    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            printf ("%4d ",c[i][j]);
        }
        printf ("\n");
    }



    return 0;
}
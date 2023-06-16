// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int c,a,i;

    scanf ("%d %d",&c,&a);

    for (i = 1;a > c;i++){
        a -= c;
        a++;
    }

    printf ("%d\n",i);

    return 0;
}
// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int l,c;

    // printf ("DIGITE A LINHA\n");
    scanf ("%d",&l);
    // printf ("DIGITE A COLUNA\n");
    scanf ("%d",&c);

    if (l % 2 != 0 && c % 2 != 0){
        printf ("1\n");
    }
    else if (l % 2 != 0 && c % 2 == 0){
        printf ("0\n");
    }
    else if (l % 2 == 0 && c % 2 == 0){
        printf ("1\n");
    }
    else {
        printf ("0\n");
    }

    return 0;
}
//caio silas de araujo amaro
//matricula : 21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int pressao (int *f , int *a,int p)
{
    p = *f / *a; 
}

int main (){
    int f,a,p;

    printf ("o usuario deve digitar f e a \n");
    scanf ("%d",&f);
    scanf ("%d",&a);

    p = pressao(&f,&a,p);

    printf ("%d",p);

    return 0;
}
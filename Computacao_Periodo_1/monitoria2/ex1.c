//caio silas de araujo amaro 
//turma :41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void recebe(int x, int y , int z , int *contador);
void recebe(int x, int y , int z , int *contador)
{
    int multiplo = x;
    *contador = 0; 
    while (multiplo <= z)
    {
        if (multiplo % y == 0)
            (*contador)++;
            multiplo++;
    }
}

int main ()
{
    int x,y,z,contador;
    printf ("o usuario deve digitar os valores: \n");
    scanf ("%d",&x);
    scanf ("%d",&y);
    scanf ("%d",&z);
    recebe (x,y,z,&contador);

    printf ("%d",contador);

    return 0;
}
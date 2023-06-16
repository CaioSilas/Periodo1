//caio silas de araujo amaro 
//turma :41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void primo(int x, int y,int *soma);
void primo(int x, int y,int *soma)
{
    *soma = 0;
    int t = 1;
    int contador = x + 1;
    int numero = 0;
    while (contador <= y)
    {
        while (t <= contador)
        {
            if (contador%t==0)
            {
                numero++;
            }
            t++;
        }
        if(numero==2)
        *soma = (*soma) + contador;
        numero = 0;
        t = 1;
        contador++;
    }
}

int main (){
    int x , y, soma ;

    printf ("digitar o valor de x\n");scanf ("%d",&x);
    printf ("digitar o valor de y\n");scanf ("%d",&y);
    primo (x,y,&soma);
    printf ("a soma dos primos e %d\n",soma);


    return 0;
}

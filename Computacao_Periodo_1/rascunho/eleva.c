//caio silas 

#include <stdio.h>
#include <math.h>

int main(){
    int i;
    printf ("nro \t quad. \t cubo\n");

    i = 0; //variavel inicializada
    while (i <= 200){
        printf ("%d \t %.0lf \t %.0lf\n",i, pow(i, 2), pow(i, 3));
        i++;//equivalente : i = i + 1
    }
    


    return 0;
}
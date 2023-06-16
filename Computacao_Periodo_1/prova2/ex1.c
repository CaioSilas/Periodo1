// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// x^3 = x * x * x

double eleva (double x, int y)
{ 
    int aux = 1;
    int i;
    while (1){
        if (y > 1){
            x = x;
            for (i = 1; i <= y;i++){
                aux *= x;
            }
            printf ("%d", aux);
            break;
        }
        else if  (y == 0){
            x = 1;
            printf ("%lf", x);
            break;
        }
        else if  (y < 0){
            x = x;
            y = y * -1;
            for (i = 1;i <= y;i++){
                aux *= x;
            }
            aux = 1 / aux;
            printf ("%d", aux);

            break;
        }
    }

}

int main (){
    double x;
    int y;


    scanf ("%lf",&x);
    scanf ("%d",&y);

    eleva(x,y);

    // printf ("%lf",x);



    return 0;
}
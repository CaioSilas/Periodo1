//caio silas lfe araujo amaro
//matricula : 21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double ordena3(double *a,double *b,double *c,double *media){
    double aux;
    *media = (*a + *b + *c)/3;

    while (*a < *b || *b < *c){
        if (*c > *b){
            aux = *b;
            *b = *c;
            *c = aux;
        }
        if (*b > *a){
            aux = *a;
            *a = *b;
            *b = aux;
        }
    }
    return *media;
}

int main (){
    double a,b,c,media;
    printf ("digite 3 numero\n");
    scanf ("%lf",&a);
    scanf ("%lf",&b);
    scanf ("%lf",&c);

    ordena3(&a,&b,&c,&media);

    printf ("a ordem e %.2lf %.2lf %.2lf\n",c,b,a);
    printf ("a media e %.2lf\n",media);

    return 0;

}
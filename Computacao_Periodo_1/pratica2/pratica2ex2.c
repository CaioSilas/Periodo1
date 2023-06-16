// caio silas de araujo amaro, turma:41, matricula: 2114111
//distancia entre dois pontos 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double DoisPontos (double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));    
}

int main(){
    double x1,x2,y1,y2;
    
    printf ("digite o valorr de x1 \n");
    scanf ("%lf",&x1);
    printf ("digite o valorr de y1 \n");
    scanf ("%lf",&y1);
    printf ("digite o valorr de x2 \n");
    scanf ("%lf",&x2);
    printf ("digite o valorr de y2 \n");
    scanf ("%lf",&y2);
    
    printf ("a distancia entre p1 e p2: %.2lf", DoisPontos(x1, y1, x2, y2)); 
    
    return 0;
}
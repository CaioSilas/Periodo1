// caio silas 
// 21.1.4111

#include <stdio.h>
#define aroba 10


int main (){
    double numero [aroba];

    for (int i = 0; i < aroba; i++){
        printf ("digite a numero %d:",i+1);
        scanf("%lf",&numero[i]);
    } 

    for (int i = aroba - 1; i >= 0; i--){
        printf ("%.2lf ",numero[i]);
    }

    printf ("\n");




return 0;
}
//caio silas de araujo amaro, matricula:21.1.4111

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n,i;
    printf ("o usuario deve digitar um numero\n");
    scanf ("%d", &n);
    i = 1;
    if (n == 0){
        printf("o fatorial e :%d",i);
    }
    else {
        while(n > 0 ){
            i = i * n;
            n = n - 1;
        }
        printf ("o fatorial e:%d",i);
    }

    // while(n >= 0){
    //     i = i * n;
    //     if (n == 0){
    //         printf ("o fatorial e:%d",i);
    //     }
    //     else {
    //         printf ("o fatorial e: %d\n",i);
    //         }
    //     n = n - 1;
    //     }
    return 0;
}

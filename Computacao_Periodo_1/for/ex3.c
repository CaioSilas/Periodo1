#include <stdio.h>
#include <math.h>

int main (){
    int n,i;

    for (int i = 1; i <= 9;i++){
        for(n = 1; n <= i;n++){
            printf ("%d",i);
        }
        printf ("\n");
    }

    return 0;
}
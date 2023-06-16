#include <stdio.h>
#include <math.h>

int main (){

    for (int i = 1; i <= 100000;i++){
        if (i % 11 == 0 && i % 13 == 0 && i % 17 == 0){
            printf ("o numero e :%d\n",i);
            break;
        }
    }
return 0;
}
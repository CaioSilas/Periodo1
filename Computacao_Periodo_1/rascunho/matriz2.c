// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define l 4
#define c 5

int main (){
    float mat [l] [c],somalinha[4],total;

    total = 0;
    
    for(int i = 0;i < l;i++){
        somalinha[i] = 0;
        for (int j = 0;j < c;j++){
            somalinha[i] += mat[i][j];
            total += somalinha[i];
        }
    } 


    return 0;
}
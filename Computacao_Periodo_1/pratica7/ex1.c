// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TAM 10

// 1 2 3 4 5 6 7 
// 0 1 1 2 3 5 8 

int main (){
    double armazena [TAM];
    for (int i = 0;i < TAM;i++){
        if (i < 2){
            armazena [i] = 1;
        }
        else {
            armazena [i] = armazena [i - 1] + armazena[i - 2];
        }
    }
    for (int i = 0; i < TAM; i++){
        printf("%.0lf \n",armazena[i]);
    }

    return 0;
}
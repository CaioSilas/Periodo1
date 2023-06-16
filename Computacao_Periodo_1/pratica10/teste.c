#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int x,y;
    if (argc == 1) {
        printf("Nenhum parametro foi passado para este programa.\n");
    } else {
        for (int i = 0; i < argc; i++) {
            printf("Parametro %d: %s\n", i, argv[i]);
        }
        if (argc == 3){
            x = atoi(argv[1]);   //atoi = array to int (pega um vetor char e converte para int com sinal negativo ou não)
            y = atoi(argv[2]);  //atof = "" to double ""
            printf("%d",x + y);
        }
    }

    return 0;
}
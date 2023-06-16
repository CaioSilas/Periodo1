//caio silas de arauio amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define aluno 15

int main (){
    double prova[aluno],prova1[aluno];
    int i;

    for (i = 0;i < aluno;i++){
        printf ("DIGITE A NOTA DA PROVA 1 DO ALUNO %d\n",i+1);
        scanf ("%lf",&prova[i]);
    }
    for (i = 0; i < aluno;i++){
        printf ("DIGITE A NOTA DA PROVA 2 DO ALUNO %d\n",i+1);
        scanf("%lf",&prova1[i]);
    }
    for (i = 0; i < aluno;i++){
        if((prova[i] + prova1[i]) / 2 >= 60) {
            printf ("O ALUNO :%d APROVOU\n",i+1);
        }
        else {
            printf ("O ALUNO :%d REPROVOU\n",i+1);
        }
    }
    return 0;
}
//caio silas 


#include <stdio.h>
#include <math.h>

int main(){
    double nota,media,soma;
    int alunos,s;

    printf ("digite o numero de alunos:\n");
    scanf ("%d", &alunos);
    
    s = 1;
    soma = 0; 
    while (s <= alunos){
        printf ("digite o valor da nota %d:",s);
        scanf ("%lf", &nota);
        if ((nota < 0)||(nota>10)){
            printf ("nota invalida, tente outro valor:");
        }
        else{
        soma += nota;
        s++;
        }
    }
    media = soma / alunos;
    printf ("a media da turma e:%.2lf\n",media);
    return 0;
}
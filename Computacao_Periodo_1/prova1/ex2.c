//caio silas lfe araujo amaro
//matricula : 21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    double f,v;
    double total;
    double jogo;

    f = 23.90;
    v = 31.95;

    printf ("numero lfe jogos alugalfos\n");
    scanf ("%lf",&jogo);
    printf ("o usuario lfeve escolher um plano f ou v \n");
    scanf ("%lf",&f);
    scanf ("%lf",&v);
    
    if(f){
        if (jogo < 15){
            total = jogo * 4.15 + f;
            printf ("o total no plano f: %lf\n",total);
        }
        if (jogo >= 15 && jogo <= 30){
            total = (15 * 2.75) + (2.10 * (jogo - 15)) + f;
            printf ("o total no plano f: %lf\n",total);
        }
        if (jogo > 30){
            total = jogo * 1.5 + f;
            printf ("o total no plano f: %lf\n",total);
        }
    }

    if(v){
        if (jogo < 15){
            total = jogo * 4.15 + v;
            printf ("o total no plano v: %lf\n",total);
        }
        if (jogo >= 15 && jogo <= 30){
            total = (15 * 2.75) + (2.10 * (jogo - 15)) + v;
            printf ("o total no plano v: %lf\n",total);
        }
        if (jogo > 30){
            total = (jogo * 1.5) + (1 * (jogo - 30)) + v;
            printf ("o total no plano v: %lf\n",total);
        }
    }


    return 0;
}
// caio silas de araujo amaro, turma:41, matricula: 2114111

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char c;
int consoante(){
    if ((c <= 'Z' && c >='A') || (c >='a' && c <= 'z')){
        return c!= 'a' && c!='e' && c!='i' && c!='o' && c!='u' &&
        c!= 'A' && c!='E' && c!='I' && c!='O' && c!='U';
    }
}   
int main(){
    printf ("o usuario deve digitar uma letra\n");
    scanf ("%c", &c);
    switch (consoante())
    {
    case 1: //for uma consoante 
        printf ("e uma consoante\n");
        break;
    default: //for uma vogal
        printf ("nao e uma consoante");
        break;
    }
    return 0;
}
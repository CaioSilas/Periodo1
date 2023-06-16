// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111
//fatorial de um numero n!

#include <stdio.h>
#include <math.h>
#include<stdlib.h>

long long fat(long long int n, long long int i);
long long fat(long long int n, long long int i){
    if (n == 0) // quando a pessoa digitar 0
    {
        printf("o fatorial e :%lld\n",i);
    }
    else //valores maiores que 1
    {   
        while(n > 0 ){
            i = i * n;
            n = n - 1;
        }
        printf ("o fatorial e:%lld\n",i);
    }
}
int main (){
    long long int n,i;
    printf ("o usuario deve digitar um numero\n");
    scanf ("%lld",&n);
    i = 1;
    fat (n,i);

    return 0;
}
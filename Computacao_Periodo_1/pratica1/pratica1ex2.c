// caio silas de araujo amaro, turma:41, matricula:2114111

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, z;
        printf("o usuario deve digitar tres numeros\n");
        scanf("%i", &x);
        scanf("%i", &y);
        scanf("%i", &z);
    
if(x > y)// x maior numero 
{
    if(x > z){
        if(y > z){
                printf("menor :%i\n", z);
                printf("intermediario :%i\n", y);
                printf("maior :%i\n", x);
                return 0;
            }if(z > y)
            {
                printf("menor :%i\n", y);
                printf("intermediario :%i\n", z);
                printf("maior :%i\n", x);
                return 0;}
}
}
if(y > x)//y maior numero
{
    if(y > z){
        if(z > x){
                printf("menor :%i\n", x);
                printf("intermediario :%i\n", z);
                printf("maior :%i\n", y);
                return 0;}
                if(x > z){
                printf("menor :%i\n", z);
                printf("intermediario :%i\n", x);
                printf("maior :%i\n", y);
                return 0;
                }
    }
}
if(z > x)//z maior numero 
{if(z > y){
    if(y > x){
        printf("menor :%i\n", x);
        printf("intermediario :%i\n", y);
        printf("maior :%i\n", z);
        return 0;}
        if(x > y){
        printf("menor :%i\n", y);
        printf("intermediario :%i\n", x);
        printf("maior :%i\n", z);
        return 0;
        }
}
}
return 0;}
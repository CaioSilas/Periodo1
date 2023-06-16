// numero de dias no mes

#include <stdio.h>

int main(){
    int mes;
    printf("fala o mes ai\n");
    scanf ("%d", &mes);

    switch(mes)
    {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
        printf("o mes tem 31 dias\n");
        break;
        case 4: case 6: case 9: case 11:
        printf("o mes tem 30 dias\n");
        break;
        case 2:
        printf("o mes tem 28 dias\n");
        break;
        default:
        printf("sao so 12 mes mula\n ");
    }
    return 0;
}
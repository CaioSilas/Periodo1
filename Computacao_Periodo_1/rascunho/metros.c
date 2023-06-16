//metros para jardas,pes,polegadas

#include <stdio.h>
#include <math.h>

    void dist (float metros,float *jardas,float *pes,float *polegadas);
    void dist (float metros,float *jardas,float *pes,float *polegadas){
        *jardas= 1.094 * metros;
        *pes= 3.281 * metros;
        *polegadas= 39.3701 * metros;
    }


    int main(){
        float metros,jardas,pes,polegadas;
        printf("digite o valor em metros:");
        scanf ("%f",&metros);
        dist(metros, &jardas, &pes, &polegadas);

        printf("%f metros = %fjardas\n",metros,jardas);
        printf("%f metros = %fpes\n",metros,pes);
        printf("%f metros = %fpolegadas\n",metros,polegadas);

        
        return 0;
        }
//caio silas de araujo amaro, matricula:21.1.4111,turma:41
//horas em jogo 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int horasMinuto (int *iniciohoras,int *iniciominuto,int *terminohoras,int *terminominutos);
int horasMinuto (int *iniciohoras,int *iniciominuto,int *terminohoras,int *terminominutos){
    int minutosfinais,minutosiniciais,fulltime;
    minutosiniciais = *iniciohoras * 60 + *iniciominuto;
    minutosfinais = *terminohoras * 60 + *terminominutos;

    if (minutosiniciais < minutosfinais) {
        fulltime = minutosfinais - minutosiniciais;
    }
    else {
        fulltime =(24 * 60 ) - minutosiniciais + minutosfinais;
    }
    return fulltime;
}

int main (){
    int iniciohoras,iniciominutos,terminohoras,terminominutos,fulltime;
    printf ("o usuario deve digitar a hora de inicio \n");scanf ("%d",&iniciohoras);
    printf ("o usuario deve digitar os minutos de inicio \n");scanf ("%d",&iniciominutos);
    printf ("o usuario deve digitar a hora de termino \n");scanf ("%d",&terminohoras);
    printf ("o usuario deve digitar os minutos do termino \n");scanf ("%d",&terminominutos);
    
   fulltime =  horasMinuto(&iniciohoras,&iniciominutos,&terminohoras,&terminominutos);
    
    printf ("o usuario ficou minutos:%i\n",fulltime);

    return 0;
}
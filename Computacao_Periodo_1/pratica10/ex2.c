// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    double real;
    double imaginario;
} Complexo;

// funcao que retorna x + y
Complexo somaComplexo(Complexo x, Complexo y){
    double a = x.real;
    double b = x.imaginario;
    double c = y.real;
    double d = y.imaginario;

    Complexo result;
    result.real = (a + c);
    result.imaginario = (b + d);

    if (result.imaginario == 0){
        printf("%.0lf\n" ,result.real);
    }
    else if (result.real == 0){
        printf("%.0lfi\n" ,result.imaginario);
    }
    else if (result.imaginario < 0){
        printf("%.0lf %.0lfi\n" ,result.real,result.imaginario);
    }
    else if (result.imaginario == 1){
        printf("%.0lf + i\n" ,result.real);
    }
    else {
        printf("%.0lf + %.0lfi\n" ,result.real,result.imaginario);
    }
    
    return result;
}

// funcao que retorna x - y
Complexo subComplexo(Complexo x, Complexo y){
    double a = x.real;
    double b = x.imaginario;
    double c = y.real;
    double d = y.imaginario;
    Complexo result;

    result.real = (a - c);
    result.imaginario = (b - d);

    if (result.imaginario == 0){
        printf("%.0lf\n" ,result.real);
    }
    else if (result.real == 0){
        printf("%.0lfi\n" ,result.imaginario);
    }
    else if (result.imaginario < 0){
        printf("%.0lf %.0lfi\n" ,result.real,result.imaginario);
    }
    else if (result.imaginario == 1){
        printf("%.0lf + i\n" ,result.real);
    }
    else {
        printf("%.0lf + %.0lfi\n" ,result.real,result.imaginario);
    }

    return result;
}

// funçao que retorna x * y
Complexo multComplexo(Complexo x, Complexo y){
    
    
    double ac = x.real * y.real;
    double bd = x.imaginario * y.imaginario;
    double ad = x.real * y.imaginario;
    double bc = x.imaginario * y.real;

    Complexo result;
    result.real = ac - bd;
    result.imaginario = ad + bc;

    if (result.imaginario == 0){
        printf("%.0lf\n" ,result.real);
    }
    else if (result.real == 0){
        printf("%.0lfi\n" ,result.imaginario);
    }
    else if (result.imaginario < 0){
        printf("%.0lf %.0lfi\n" ,result.real,result.imaginario);
    }
    else if (result.imaginario == 1){
        printf("%.0lf + i\n" ,result.real);
    }
    else {
        printf("%.0lf + %.0lfi\n" ,result.real,result.imaginario);
    }

    return result;    
}

int main (){    
    Complexo x;
    Complexo y;
    char operador;

    printf ("Digite os valores de a e b (x = a + bi): ");
    scanf ("%lf %lf", &x.real, &x.imaginario);
    printf ("Digite os valored de c e d (y = c + di): ");
    scanf ("%lf %lf", &y.real, &y.imaginario);

    printf ("Digite a operacao (+, - ou *): ");
    scanf ("%s", &operador);

    switch (operador)
    {
    case '+':
        somaComplexo(x,y);
        break;
    case '-':
        subComplexo(x,y);
        break;
    case '*':
        multComplexo(x,y);
        break;
    
    default:
        break;
    }
    

    return 0;
}
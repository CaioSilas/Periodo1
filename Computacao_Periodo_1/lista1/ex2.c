//caio silas 
// matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int crescente (int *x,int *y ,int *z);
int crescente (int *x,int *y ,int *z){
    if (*x > *y && *x > *z){ // x o maior
        if (*y > *z){ // y o menor 
            return 1;
        }
        if (*z > *y){ // z o menor
            return 2;
        }
    }

    if (*y > *x && * y > *z){ // y o maior
        if (*x > *z){ // z o menor 
            return 3;
        }
        if (*z > *x){ // x o menor
            return 4;
        }
    }

    if (*z > *x && *z > *y){ // z o maior
        if (*y > *x){ // x o menor 
            return 5;
        }
        if (*x > *y){ // y o menor
            return 6;
        }
    }

}

int main (){
    int x,y,z;
    int alse;

    printf ("o usuario deve digitar 3 numeros\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    scanf ("%d", &z);

    alse = crescente(&x,&y,&z);
    
    switch (alse)
    {
    case 1:
        printf ("\n%d\n%d\n%d\n",z ,y ,x);
        break;
    case 2:
        printf ("\n%d\n%d\n%d\n",y ,z ,x);
        break;
    case 3:
        printf ("\n%d\n%d\n%d\n",z ,x ,y);
        break;
    case 4:
        printf ("\n%d\n%d\n%d\n",x ,z ,y);
        break;
    case 5:
        printf ("\n%d\n%d\n%d\n",x ,y ,z);
        break;
    case 6:
        printf ("\n%d\n%d\n%d\n",y ,x ,z);
        break;
    
    default:
        break;
    }

    return 0;
}
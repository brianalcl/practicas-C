#include <stdio.h>
#include <stdlib.h>

/*
Traza caso1:
--------------------------------------------
x = puntero a entero
y = ?
z = 3
x = &z (x = un puntero con la direccion en memoria de z)
y = 3 (*x retorna el contenido asociado a la direccion de memoria
       en este caso como x es la direccion en memoria de z
       por la instruccion anterior lego tenemos que
       y vale lo que vale z entonces y = 3)
//checkpoint 1
y = 4
//checkpoint 2
z = 4 (recordemos *x retorna el contenido asociado a la direccion de memoria
       en este caso retorna z luego incrementamos en 1 a z)
//checkpoint 3
--------------------------------------------
*/


void caso1(){
    int* x;
    int y,  z = 3;
    x = &z;
    y = *x;
    //checkpoint 1
    printf("checkpint 1: (y = %i, z = %i)\n", y, z);
    y++;
    //checkpoint 2
    printf("checkpint 2: (y = %i, z = %i)\n", y, z);
    (*x) ++;
    //checkpoint 3
    printf("checkpint 3: (y = %i, z = %i)\n", y, z);
}

/*
Traza caso2:
--------------------------------------------
x = puntero a entero
y = ?
x = &y (x es un puntero a la direccion de memoria de y)
y = 3 (*x es el contenido asociado a la direccion en memoria
        en este caso x es la direccion en memoria de y
        por lo tanto y vale 3)
//checkpoint 1
y = 4
//checkpoint 2
y = 5 (recordemos que x es la direccion en memora de y e
       *x es el contenido asociado a la direccion de memoria)
--------------------------------------------
*/
int caso2(){
    int* x;
    int y;
    x = &y;
    *x = 3;
    //checkpoint 1
    printf("checkpint 1: (y = %i)\n", y);
    y++;
    //checkpoint 2
    printf("checkpint 2: (y = %i)\n", y);
    (*x) ++;
    printf("Finalmente : (y = %i)\n", y);
    return 0;
}

int main()
{
    printf("Caso 1: \n");
    caso1();
    printf("Caso 2: \n");
    caso2();
    return 0;
}

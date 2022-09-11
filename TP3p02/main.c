#include <stdio.h>
#include <stdlib.h>

int * triIncisoA(int x){
    int* res;
    res = (int*) malloc(sizeof(int));
    *res = 3 * x;
    return res;
}

void incisoA(){
    int a = 34;
    int a3;
    int * p;
    p = triIncisoA(a);
    a3 = *p;
    free(p);
}

int triIncisoB(int x){
    int* res;
    res = (int*) malloc(sizeof(int));
    *res = 3 * x;
    return *res;
}

void incisoB(){
    int a = 34;
    int a3;
    a3 = triIncisoB(a);
}

void triIncisoC(int* x){
    int res;
    res = *x * 3;
    *x = res;
}

void incisoC(){
    int* a;
    a = (int*)malloc(sizeof(int));
    *a = 34;
    triIncisoC(a);
}

int main()
{
    printf("Punto 2\n");
    return 0;
    incisoA(); //Correcta
    incisoB(); //Incorrecto, no se libera la memoria usada
    incisoC(); //Incorrecto, no se libera la memoria usada
}

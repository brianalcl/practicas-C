#include <stdio.h>
#include <stdlib.h>

/*
Inciso A: Solucion incorrecta, ya que el metodo triIncisoA
esta trabajando con punteros y luego retorna un puntero
que aloja un lugar de memoria de una variable local
*/
int* triIncisoA(int x){
    int res;
    res = 3 * x;
    return &res;
}

void incisoA(){
    int a = 34;
    int a3;
    int* p;
    p = triIncisoA(a);
    a3 = *p;
}

/*
Inciso B: Solucion incorrecta, res no esta inicializada, por ende
no apunta a ningun lugar.
*/
int* triIncisoB(int x){
    int* res;
    *res = 3 * x;
    return res;
}

void incisoB(){
    int a = 34;
    int a3;
    int* p;
    p = triIncisoB(a);
    a3 = *p;
}

/*
Inciso C: Solucion correcta.
*/
int triIncisoC(int x){
    int res = 3 * x;
    return res;
}

void incisoC(){
    int a = 34;
    int a3;
    a3 = triIncisoC(a);
}

/*
Inciso D: Solucion correcta.
*/
void triIncisoD(int* x){
    int res;
    res = *x * 3;
    *x = res;
}

void incisoD(){
    int a = 34;
    triIncisoD(&a);
}

/*
Inciso E: Solucion incorrecta. a no esta inicializada
*/
void triIncisoE(int* x){
    int res;
    res = *x * 3;
    *x = res;
}

void incisoE(){
    int* a;
    *a = 34;
    triIncisoE(a);
}

/*
Inciso F: Solucion correcta. b termina valiendo 34*3
*/
void triIncisoF(int* x){
    int res;
    res = *x * 3;
    *x = res;
}

void incisoF(){
    int* a;
    int b;
    a = &b;
    *a = 34;
    triIncisoF(a);
}

int main()
{
    printf("-------------------------------------------------------\n");
    printf("Inciso A: Incorrecta\n");
    //incisoA();
    printf("-------------------------------------------------------\n");
    printf("Inciso B: Incorrecta\n");
    //incisoB();
    printf("-------------------------------------------------------\n");
    printf("Inciso C: Correcta\n");
    incisoC();
    printf("-------------------------------------------------------\n");
    printf("Inciso D: Correcta\n");
    incisoD();
    printf("-------------------------------------------------------\n");
    printf("Inciso E: Incorrecta\n");
    //incisoE();
    printf("-------------------------------------------------------\n");
    printf("Inciso F: Correcta\n");
    incisoF();
    printf("-------------------------------------------------------\n");
    return 0;
}

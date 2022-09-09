#include <stdio.h>
#include <stdlib.h>

/*
Traza inciso A:
myVar = 123.4
//checkPoint 1
formal = 123.4
formal = 123.4 + 56.75 = 180.15
//checkpoint 2
//checkpoint 3
myVar = 123.4

myVar no se modifica en fIncisoA porque el pasaje de parametros es por valor.
*/
void fIncisoA(double formal){
    printf("Checkpoint 1: formal = %fd\n", formal);
    //checkpoint 1
    formal = formal + 56.75;
    printf("Checkpoint 2: formal = %fd\n", formal);
    //checkpoint 2
}

void incisoA(){
    double myVar = 123.4;
    printf("Inicio: myVar = %fd\n", myVar);
    fIncisoA(myVar);
    printf("Checkpoint 3: myVar = %fd\n", myVar);
    //checkpoint 3
}

/*
Traza inciso B:
myVar = 123.4
formal = la direccion de memoria de myVar (formal = &myVar)
//checkpoint 1
myVar = 123.4 + 56.75 = 180.15 (*formal = *formal + 56.75 => myVar = myVar + 56.75)
//checkpoint 2
//checkpoint 3
myVar = 180.15

Aqui se modifica el valor de myVar porque lo que se pasa como
parametro de fIncisoB es el puntero que reprecenta la direccion
de memoria de myVar y luego se desreferencia a esta (en fIncisoB)
para sumarle 56.75.
*/
void fIncisoB(double* formal){
    printf("Checkpoint 1: *formal = %fd (formal es un puntero, por eso se desreferencia)\n", *formal);
    //checkpoint1
    *formal = *formal + 56.75;
    printf("Checkpoint 2: *formal = %fd\n", *formal);
    //checkpoint2
}

void incisoB(){
    double myVar = 123.4;
    printf("Inicio: myVar = %fd\n", myVar);
    fIncisoB(&myVar);
    printf("Checkpoint 3: myVar = %fd\n", myVar);
    //checkpoint3
}

/*
Traza inciso C:
myVar = 123.4
p = un puntero a double
p = &myVar (p ahora es la direccion en memoria de myVar)
formal = *p => formal = 123.4 (*p retorna el contenido asociado a la ubicacion en memoria)
//checkpoint 1
formal = 180.15
//checkpoint 2
//checkPoint 3
myVar = 123.4

*/
void fIncisoC(double formal){
    printf("Checkpoint 1: formal = %fd\n", formal);
    //checkpoint1
    formal = formal + 56.75;
    printf("Checkpoint 2: formal = %fd\n", formal);
    //checkpoint2
}

void incisoC(){
    double myVar = 123.4;
    printf("Inicio: myVar = %fd\n", myVar);
    double* p;
    p = &myVar;
    fIncisoC(*p);
    printf("Checkpoint 3: myVar = %fd\n", myVar);
    //checkpoint3
}

/*
Traza inciso D:
myVar = 123.4
p = un puntero a double
p = &myVar (la direccion en memoria de myVar)
formal = p (la direccion em memoria de myVar)
//checkpoint 1
*formal = *formal + 56.75 => 123.4 + 56.75 = 180.15
//checkpoint 2
//checkpoint 3
myVar = 180.15
*/
void fIncisoD(double* formal){
    printf("Checkpoint 1: *formal = %fd\n", *formal);
    //checkpoint1
    *formal = *formal + 56.75;
    printf("Checkpoint 2: *formal = %fd\n", *formal);
    //checkpoint2
}

void incisoD(){
    double myVar = 123.4;
    printf("Inicio: myVar = %fd\n", myVar);
    double* p;
    p = &myVar;
    fIncisoD(p);
    printf("Checkpoint 3: myVar = %fd\n", myVar);
    //checkpoint3
}

/*
Traza inciso D:
myVar = 123.4
p = un puntero a double
p = &myVar (p es la dire de mem de myVar)
formal = &p (formal es un puntero a la dire de mem de myVar)
//checkpoint 1
**formal = **formal + 56.75 =>
=> *p = *p + 56.75 =>
=> *p = 123.4 + 56.75 =>
=> *p = 180.15
*formal = NULL => p = NULL => p = 0
//checkpoint 2
formal = NULL => formal = 0
//checkpoint 3
//checkpint 4
myVar = 180.15
*/
void fIncisoE(double** formal){
    printf("Checkpoint 1: **formal = %fd\n", **formal);
    //checkpoint 1
    **formal = **formal + 56.75;
    printf("Checkpoint 2: **formal = %fd\n", **formal);
    *formal = NULL;
    printf("Checkpoint 2: *formal == NULL: %i\n", *formal==NULL);
    //checkpoint 2
    formal = NULL;
    printf("Checkpoint 3: formal == NULL: %i\n", formal==NULL);
    //checkpoint 3
}

void incisoE(){
    double myVar = 123.4;
    printf("Inicio: myVar = %fd\n", myVar);
    double* p;
    p = &myVar;
    fIncisoE(&p);
    printf("Checkpoint 4: myVar = %fd\n", myVar);
    //checkpoint 4
}

int main()
{
    printf("-------------------------------------------------------\n");
    printf("Inciso A: \n");
    incisoA();
    printf("-------------------------------------------------------\n");
    printf("Inciso B: \n");
    incisoB();
    printf("-------------------------------------------------------\n");
    printf("Inciso C: \n");
    incisoC();
    printf("-------------------------------------------------------\n");
    printf("Inciso D: \n");
    incisoD();
    printf("-------------------------------------------------------\n");
    printf("Inciso E: \n");
    incisoE();
    printf("-------------------------------------------------------\n");
    return 0;
}

#include <stdlib.h>
#include "calculadora.h"

float suma(float a, float b){
    return a+b;
}
float resta(float a, float b){
    return a-b;
}
float multiplicacion(float a, float b){
    return a*b;
}
float division(float a, float b){
    if(b==0)
        exit(ERROR_DIVISION_POR_CERO);
    return a/b;
}

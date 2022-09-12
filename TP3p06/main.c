#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"

int main()
{
    printf("Punto 6\n");
    int tamArr = 50;
    int lus [tamArr];
    char notas [tamArr];
    char nota = '0';
    for(int i = 0; i < tamArr; i++){
        lus[i] = 0;
        notas[i] = '0';
    }
    int cantAlumnos = cantidadAlumnosMasCarga(lus, notas, tamArr);
    printf("Veamos la cantidad de alumnos y los arreglos que se formaron:\n");
    printf("Cantidad de alumnos: %i\n", cantAlumnos);
    for(int i = 0; i < tamArr; i++){
        nota = notas[i];
        printf("(%i, %c)", lus[i], nota);
    }
    return 0;
}

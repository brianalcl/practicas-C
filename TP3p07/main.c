#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"

int main()
{
    int tamArr = 10;
    typedef struct alumno * alum;
    alum alumnos[tamArr];

    int cantAlumnos = cantidadAlumnosMasCarga(alumnos , tamArr);
    printf("Cantidad de alumnos: %i\n", cantAlumnos);
    printf("Lista de alumnos y notas:\n");

    for(int i = 0; i < cantAlumnos; i++){
        printf("LU: %i\n", alumnos[i]->lu);
        printf("Notas:");
        for(int j = 0; j < 10 && alumnos[i]->notas[j] != '\0'; j++){
            printf(" %c", alumnos[i]->notas[j]);
        }
        printf("\n");
        //free(alumnos[i]); //no se si asi libero bien la memoria
    }

    return 0;
}

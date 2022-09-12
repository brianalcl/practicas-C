#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alumnos.h"

int cantidadAlumnosMasCarga(struct alumno * alumnos[] , int tamArr){
    int lu = 0;
    int cantNotas = 0;
    int cantAlum = 0;
    char nota = '0';
    char continua = '0';
    int i = 0;
    int j = 0;

    typedef struct alumno * alum;
    alum cabezaAlum;
    for(i = 0; i < tamArr && continua != 'n'; i++){
        cabezaAlum = (alum) malloc(sizeof(struct alumno)); //no se si asignar memoria de esta forma esta bien.
        printf("Coloque una LU: \n");
        scanf("%i", &lu);
        cabezaAlum->lu = lu;
        printf("Cuantas notas colocara? (menos que 10 incluido) ");
        scanf("%i", &cantNotas);
        for(j = 0; j < cantNotas; j++){
            printf("Coloque una nota (letras): \n");
            fflush(stdin);
            scanf("%c", &nota);
            cabezaAlum->notas[j] = nota; //en la practica no se que tan malo es esto.
            alumnos[i] = cabezaAlum;
        }
        alumnos[i]->notas[j] = '\0';
        printf("Para terminar coloque 'n' para continuar coloque cualquier letra: \n");
        fflush(stdin);
        scanf("%c", &continua);
        if(continua)
            cabezaAlum++;
    }
    cantAlum = i;
    return cantAlum;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"
int cantidadAlumnosMasCarga(int lus[], char notas[], int tamArr){
    int lu = 0;
    int cantAlum = 0;
    char nota = '0';
    char continua = '0';

    printf("Coloque una LU: \n");
    scanf("%i", &lu);
    lus[0] = lu;
    printf("Coloque una nota (letras): \n");
    fflush(stdin); //sin esto no funciona leer el caracter, limpia el buffer
    scanf("%c", &nota);
    notas[0] = nota;
    cantAlum++;
    printf("Para terminar coloque 'n' para continuar coloque cualquier letra: \n");
    scanf("%s", &continua);

    for(int i = 1; i < tamArr && continua != 'n'; i++){
        printf("Coloque una LU: \n");
        scanf("%i", &lu);
        if(lus[i-1] != lu){
            cantAlum++;
        }
        lus[i] = lu;
        printf("Coloque una nota (letras): \n");
        fflush(stdin); //sin esto no funciona leer el caracter, limpia el buffer
        scanf("%c", &nota);
        notas[i] = nota;
        printf("Para terminar coloque 'n' para continuar coloque cualquier letra: \n");
        fflush(stdin); //sin esto no funciona leer el caracter, limpia el buffer
        scanf("%c", &continua);
    }
    return cantAlum;
}


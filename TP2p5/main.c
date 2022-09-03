#include <stdio.h>
#include <stdlib.h>
#include "funcionesProcedimientos.h"

int main()
{
    int tamA = 0;
    int tamB = 0;
    int cantA = 0;
    int cantB = 0;

    printf("Se asume que los datos ingresados son correctos\n");
    printf("Al crear el arreglo se llenara con 0's para entender el ejercicio.\n");
    printf("Llenar un arreglo con randoms hasta la pos n-1:\n");
    printf("Coloque el tamaño del arreglo.\n");
    scanf("%i", &tamA);
    int arregloA[tamA];
    for(int i = 0; i < tamA; i++){
        arregloA[i] = 0;
    }

    printf("Coloque la cantidad de elementos a llenar, un numero menor igual que %i.\n", tamA);
    scanf("%i", &cantA);
    printf("\n");
    inicializaAlAzar(arregloA, cantA);
    printf("Arreglo con n elementos aleatorios obtenido:\n");
    for(int i = 0; i < tamA; i++){
        printf("%i ", arregloA[i]);
    }
    printf("\n");
    if(ordenadosAscendente(arregloA, tamA)){
        printf("El arreglo obtenido esta ordenado de forma ascendente\n\n");
    }
    else{
        printf("El arreglo obtenido no esta ordenado de forma ascendente\n\n");
    }

    printf("Ordenemos el arreglo anterior en forma ascendente:\n");
    ordenarAscendente(arregloA, tamA);
    for(int i = 0; i < tamA; i++){
        printf("%i ", arregloA[i]);
    }
    printf("\n");
    if(ordenadosAscendente(arregloA, tamA)){
        printf("El arreglo obtenido esta ordenado de forma ascendente\n\n");
    }
    else{
        printf("El arreglo obtenido no esta ordenado de forma ascendente\n\n");
    }

    printf("Creemos otro arreglo de la misma forma que el primero.\n");
    printf("Coloque el tamaño del arreglo.\n");
    scanf("%i", &tamB);
    int arregloB[tamB];
    for(int i = 0; i < tamB; i++){
        arregloB[i] = 0;
    }
    printf("Coloque la cantidad de elementos a llenar, un numero menor igual que %i.\n", tamA);
    scanf("%i", &cantB);
    printf("\n");

    inicializaAlAzar(arregloB, cantB);
    ordenarAscendente(arregloB, tamB);

    printf("Arreglo A: ");
    for(int i = 0; i < tamA; i++){
        printf("%i ", arregloA[i]);
    }
    printf("\n");
    printf("Arreglo B: ");
    for(int i = 0; i < tamB; i++){
        printf("%i ", arregloB[i]);
    }
    printf("\n");

    printf("Arreglos A y B unidos de forma ascendente:\n");
    int *arregloC = unirOrdenado(arregloA, arregloB, tamA, tamB);
    int *cabeza = arregloC;
    for(int i = 0; i < tamA+tamB; i++){
        int a = *cabeza++;
        printf("%i ", a);

    }

    free(arregloC);

    printf("\n");
    printf("Los -1 en la derecha (si tiene) son espacios 'vacios' escritos a proposito del arreglo resultante.\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "reemplazo.h"

int main()
{
    int tam = 0;
    int a = 0;
    int n = 0;
    int elem = 0;
    printf("Programa que remplaza elementos de un arreglo\n");
    printf("Coloque el tamaño del arreglo\n");
    scanf("%i", &tam);
    int arr[tam];
    printf("Coloque los elementos que tendra el arreglo.\n");
    for(int i = 0; i < tam; i++){
        scanf("%i", &elem);
        arr[i] = elem;
    }
    printf("Arreglo obtenido:");
    for(int i = 0; i < tam ; i++){
        printf(" %i", arr[i]);
    }
    printf("\n");
    printf("Coloque el entero a reemplazar.\n");
    scanf("%i", &a);
    printf("Coloque el entero que lo reemplace.\n");
    scanf("%i", &n);
    reemplazar2(arr, a, n, tam);
    printf("Arreglo obtenido:");
    for(int i = 0; i < tam ; i++){
        printf(" %i", arr[i]);
    }
    printf("\n");
    return 0;
}

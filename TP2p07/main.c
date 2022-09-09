#include <stdio.h>
#include <stdlib.h>

void invertir_arr_num(int arr [], int size){
    int f = 0, c = size-1;
    int aux;
    while(f < c){
        aux = arr[f];
        arr[f++] = arr[c];
        arr[c--] = aux;
    }
}

/*
invertir_arr_punt invierte un arreglo que contiene punteros a enteros
y lo hace reduciendo los extremos
*/
void invertir_arr_punt(int ** arr, int size){
    int ** cola = arr + size - 1;
    int * aux;
    while(arr != cola){
        aux = *arr;
        *arr = *cola;
        *cola = aux;
        if ((++arr)!=cola)
            cola--;
    }
}

void invertir_arr_punt2(int * arr[], int size){
    int ** cola = arr + size - 1;
    int * aux;
    while(arr != cola){
        aux = *arr;
        *arr = *cola;
        *cola = aux;
        if ((++arr)!=cola)
            cola--;
    }
}

int main(){
    int longitud = 3;
    int arr_num [longitud];
    int * arr_punt [longitud];
    // INICIALIZACI´ON
    int i = 0;
    for(i=0; i<longitud; i++){
        arr_num[i] = i+1;
        arr_punt[i] = &arr_num[i];
    }
    printf("Arreglo arr_num inicial:");
    for(i=0; i<longitud; i++){
        printf(" %i", arr_num[i]);
    }
    printf("\n");
    printf("Arreglo arr_punt inicial:");
    for(i=0; i<longitud; i++){
        printf(" %p", arr_punt[i]);
    }
    printf("\n");
    // INSTRUCCI´ON 1
    invertir_arr_num(arr_num, longitud);
    printf("Arreglo arr_num luego de invertir_arr_num:");
    for(i=0; i<longitud; i++){
        printf(" %i", arr_num[i]);
    }
    printf("\n");
    printf("Arreglo arr_punt luego de invertir_arr_num:");
    for(i=0; i<longitud; i++){
        printf(" %p", arr_punt[i]);
    }
    printf("\n");
    // INSTRUCCI´ON 2
    invertir_arr_punt(arr_punt, longitud);
    printf("Arreglo arr_num luego de invertir al arreglo_arr_punt:");
    for(i=0; i<longitud; i++){
        printf(" %i", arr_num[i]);
    }
    printf("\n");
        printf("Arreglo arr_punt luego de invertir_arr_punt:");
    for(i=0; i<longitud; i++){
        printf(" %p", arr_punt[i]);
    }
    printf("\n");
    // AGREGADO invertir_arr_punt_2
    invertir_arr_punt2(arr_punt, longitud);
    printf("Arreglo arr_num luego de invertir al arreglo_arr_punt2:");
    for(i=0; i<longitud; i++){
        printf(" %i", arr_num[i]);
    }
    printf("\n");
        printf("Arreglo arr_punt luego de invertir_arr_punt2:");
    for(i=0; i<longitud; i++){
        printf(" %p", arr_punt[i]);
    }
    printf("\n");
    return 0;
}

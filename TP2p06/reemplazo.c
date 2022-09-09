#include "reemplazo.h"

void reemplazar1(int arr[], int a, int n){
     //No se puede resolver si no se el tamaño del arreglo
}

void reemplazar2(int * arr, int a, int n, int size){
    int * cabeza = arr;
    for(int i = 0; i < size; i++){
        if(*cabeza == a)
            *cabeza = n;
        cabeza++;
    }

}

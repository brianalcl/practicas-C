#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    long numero = 0;
    printf("Programa que dado un entero largo ve si sus digitos estan ordenados de forma ascendiente o descendiente.\n");
    printf("Escriba un entero largo.\n");
    scanf("%ld", &numero);
    if(prolijo(numero)){
        printf("El numero %ld es prolijo.\n", numero);
    }
    else{
        printf("El numero %ld no es prolijo.\n", numero);
    }
    return 0;
}

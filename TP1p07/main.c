#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    long numero = 0;
    printf("Programa que dado un entero largo positivo N retorna el mediano de N.\n");
    printf("Es decir suma los digitos en posiciones impares y resta los digitos en posiciones pares.\n");
    printf("Coloque un entero largo positivo.\n");
    scanf("%ld", &numero);
    printf("El mediano del numero %ld es %ld.\n", numero, mediano(numero));

    return 0;
}

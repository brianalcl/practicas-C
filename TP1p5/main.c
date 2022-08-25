#include <stdio.h>
#include <stdlib.h>
#include "binarioDecimal.h"

int main()
{
    long numero;
    printf("Programa que dado un numero binario te retorna un numero decimal\n");
    printf("Coloque un numero en notacion binaria\n");
    scanf("%ld", &numero);
    printf("El numero en notacion binaria %ld es %ld en decimal.\n", numero, binarioADecimal(numero));

    return 0;
}

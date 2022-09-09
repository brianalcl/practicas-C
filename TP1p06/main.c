#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int eleccion = 0;
    int numero = 0;
    int digito = 0;
    printf("Elija una opcion\n");
    printf("1) Contar cantidad de digitos de un entero.\n");
    printf("2) Dado un entero N y un digito D contar la cantidad de veces que D aparece en N.\n");
    printf("3) Contar la cantidad de digitos pares que ocupan posiciones impares en un numero n.\n");

    scanf("%i", &eleccion);
    switch(eleccion){
        case 1:
            printf("Escriba un numero.\n");
            scanf("%i", &numero);
            printf("La cantidad de digitos en %i es: %i", numero, cantDigitos(numero));
            break;
        case 2:
            printf("Escriba un numero.\n");
            scanf("%i", &numero);
            printf("Escriba un digito.\n");
            scanf("%i", &digito);
            printf("La cantidad de veces que aparece %i en %i es: %i", digito, numero, cantApa(digito, numero));
            break;
        case 3:
            printf("Escriba un numero.\n");
            scanf("%i", &numero);
            printf("La cantidad de digitos pares en posiciones impares en %i es: %i", numero, cantidadParEnImpar(numero));
            break;
    }

    return 0;
}



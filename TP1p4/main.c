#include <stdio.h>
#include <stdlib.h>

int main()
{
    long numero = 0;
    long minimo = 0;
    long maximo = 0;
    float promedio = 0;
    int cantidad = 0;

    printf("Programa que dada una serie de longs retorna: el mayor, el menor y el promedio.\n");

    printf("Coloque cuantos numeros enteros ingresara.\n");
    scanf("%i", &cantidad);

    printf("Coloque los numeros enteros, pueden ser enteros grandes.\n");

    scanf("%ld", &numero);
    minimo = numero;
    maximo = numero;
    promedio = numero;
    for(int i = 0; i < cantidad - 1; i++){
        scanf("%ld", &numero);
        if(numero < minimo)
            minimo = numero;
        if(numero > maximo)
            maximo = numero;
        promedio += numero;
    }
    promedio = promedio / cantidad;

    printf("El mayor es: %ld el menor es: %ld el promedio es: %f\n", maximo, minimo, promedio);

    return 0;
}

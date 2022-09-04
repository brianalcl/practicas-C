#include <stdio.h>
#include <stdlib.h>
#include "transformador.h"

int main()
{
    int opcion = 0;
    float dato;
    printf("Programa que transforma algunas cosas. elija una opcion: \n");
    printf("1) Transformar de grados Celcius a Fahrenheit.\n");
    printf("2) Transformar de millas por hora a kilometros por minuto.\n");
    printf("3) Transformar de litros cada 100km a millas por galon.\n");

    scanf("%i", &opcion);
    switch(opcion){
        case 1:{
            printf("Coloque los grados Celcius.\n");
            scanf("%f", &dato);
            printf("%f grados celcius son: %f grados Fahrenheit.", dato, celciusAFahrenheit(dato));
            break;
        }
        case 2:{
            printf("Coloque las millas.\n");
            scanf("%f", &dato);
            printf("%f millas por hora son: %f kilometros por minuto.", dato, mphAkmpm(dato));
            break;
        }
        case 3:{
            printf("Coloque los litros.\n");
            scanf("%f", &dato);
            printf("%f litros cada 100KM son: %f millas por galon.", dato, litrosAGalonesParticular(dato));
        }
    }

    return 0;
}

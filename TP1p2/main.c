#include <stdio.h>
#include <stdlib.h>

int main()
{
    long numero;
    int hora;
    int minuto;
    int segundo;

    printf("Programa que dado una cantidad de segundos retorna el formato hh:mm:ss\n");
    printf("Coloque un numero entero, puede ser un numero grande\n");
    scanf("%ld", &numero);
    printf("Veamos si podemos transformar %ld segundos a: hh:mm:ss\n", numero);

    segundo = numero;
    minuto = segundo / 60;
    segundo %= 60;
    hora = minuto / 60;
    minuto %= 60;
    printf("Los %ld segundos equivalen a: %i:%i:%i\n", numero, hora, minuto, segundo);

    return 0;
}

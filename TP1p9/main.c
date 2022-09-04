#include <stdio.h>
#include <stdlib.h>
#include "hexaADiez.h"

int main()
{
    char string[100];
    int posUlti = 0;
    printf("Programa que dado un numero en hexadecimal retorna el numero decimal.\n");
    printf("Coloque un numero hexadecimal.\n");
    scanf("%s[^\n]", string);
    posUlti = digMenSig(string);
    if(posUlti != -1){
        printf("El numero hexadecimal transformado a decimal queda como: %ld.\n", hexadecimalADecimal(string, posUlti));
    }
    else{
        printf("Coloco mal el numero.\n");
    }
    return 0;
}

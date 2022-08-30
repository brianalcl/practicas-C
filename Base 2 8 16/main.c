#include <stdio.h>
#include <stdlib.h>

long cambioBaseDiezAOtraEntero(long numero, long base){
    long rta = 0;
    if(numero < base ){
        rta = numero;
    }
    else{
        rta = cambioBaseDiezAOtraEntero(numero / base, base) * 10 + numero % base;
    }
    return rta;
}

int main()
{
    printf("Intentando ver la relacion entre las bases 2, 8, y 16\n");
    printf("Veamos los enteros [0,100] en base 10, 2, 8 y 16\n");

    for(int i = 0; i <= 100; i++){
        printf("%ld   |", i);
        printf("%ld   |", cambioBaseDiezAOtraEntero(i, 2));
        printf("%ld   |", cambioBaseDiezAOtraEntero(i, 8));
        printf("%ld   |\n", cambioBaseDiezAOtraEntero(i, 16));
    }

    return 0;
}

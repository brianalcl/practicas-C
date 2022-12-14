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
    int aux = 0;
    printf("Intentando ver la relacion entre las bases 2, 8, y 16\n");
    printf("Veamos los enteros [0, 7] en base 10, 2 y 8\n");
    printf("+---+---+---+\n");
    printf("|B10|B 2|B 8|\n");
    printf("+---+---+---+\n");
    for(long i = 0; i <= 7; i++){
        printf("|%-3ld|", i);
        printf("%03ld|", cambioBaseDiezAOtraEntero(i, 2));
        printf("%3ld|\n", cambioBaseDiezAOtraEntero(i, 8));
    }
    printf("+---+---+---+\n");
    printf("Veamos los enteros [0, 15] en base 10, 2 y 16\n");
    printf("+----+----+----+\n");
    printf("|B 10|B 2 |B 16|\n");
    printf("+----+----+----+\n");
    for(long i = 0; i <= 15; i++){
        printf("|%-4ld|", i);
        printf("%04ld|", cambioBaseDiezAOtraEntero(i, 2));
        aux = cambioBaseDiezAOtraEntero(i, 16);
        switch (aux) {
            case 10:
                printf("   A|\n");
                break;
            case 11:
                printf("   B|\n");
                break;
            case 12:
                printf("   C|\n");
                break;
            case 13:
                printf("   D|\n");
                break;
            case 14:
                printf("   E|\n");
                break;
            case 15:
                printf("   F|\n");
                break;
            default:
                printf("%4ld|\n", aux);
        }
    }

    printf("+----+----+----+\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("Cada digito de la base 8 se puede escribir como una secuencia de 3 digitos en base 2\n");
    printf("Para pasar de base 2 a 8 se hace lo siguiente:\n");
    printf("Partir el numero en base 2 en partes de 3 digitos de derecha a izquierda, si no alcanza agregar 0's\n");
    printf("Transformar usando la tabla. Ejemplo:\n");
    printf("(100110)2 = (46)8; (11110)2 = (36)8\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("Cada digito de la base 16 se puede escribir como una secuencia de 4 digitos en base 2\n");
    printf("Para pasar de base 2 a 16 se hace lo siguiente:\n");
    printf("Partir el numero en base 2 en partes de 4 digitos de derecha a izquierda, si no alcanza agregar 0's\n");
    printf("Transformar usando la tabla. Ejemplo:\n");
    printf("(10011011)2 = (9B)16; (111101)2 = (3D)16\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("Observacion: Completar los numeros binarios con 0's a izquierda hasta llegar a la cantidad de digitos deseada.\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("Estos videos lo explican mejor:\n");
    printf("https://www.youtube.com/watch?v=zmI4VL40QPs\n");
    printf("https://www.youtube.com/watch?v=W1YQ--RpbCQ\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    return 0;
}

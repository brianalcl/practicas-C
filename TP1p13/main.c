#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//invierte cadenas
void misterio(char cadena[]){
    int tmpch, i, j;
    for (i = 0, j = strlen(cadena) - 1; i < j; i++, j--) {
        tmpch = cadena [i];
        cadena[i] = cadena[j];
        cadena[j] = tmpch;
    }
}

void itooa(int integer, char ascii[]) {
    int index = 0, sign;
    if ((sign = integer) < 0) //si el entero es negativo lo cambia a positivo y tambien guarda el signo
        integer = -integer;
    do { //Transforma el entero a el entero pero en formato caracter.
        ascii[index++] = integer % 10 + '0';
    } while ((integer /= 10) > 0);
    if (sign < 0) //Si el signo es negativo lo agrega como caracter al arreglo.
        ascii[index++] = '-';
    ascii[index] = '\0'; //Esto termina la cadena de caracteres. Todo lo extra se "pierde"
    misterio(ascii); //invierte la secuencia creada ej: 001- es -100
}

int main()
{
    char cadena1[50] = "abcdf";
    char cadena2[50] = {'1','2','3','a','b','c','d','\0'};
    printf("Mirando el comportamiento de itooa\n");

    printf("Ingreso: -100 y %s\n", cadena1);
    itooa(-100, cadena1);
    printf("Ibtiene: %s\n", cadena1);

    printf("Ingreso: 100 y %s\n", cadena2);
    itooa(100, cadena2);
    printf("Obtiene: %s\n", cadena2);

    printf("Itooa convierte un entero a caracteres y lo ingresa a el arreglo ascii.\n");
    printf("Si ascii tenia elementos estos, en parte, se sobreescriben.\n");
    return 0;
}



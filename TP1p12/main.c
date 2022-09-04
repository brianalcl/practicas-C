#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void misterio(char cadena[]){
    int tmpch, i, j;
    for (i = 0, j = strlen(cadena) - 1; i < j; i++, j--) {
        tmpch = cadena [i];
        cadena[i] = cadena[j];
        cadena[j] = tmpch;
    }
}

int main()
{
    char cadena1[100] = "abc";
    char cadena2[100] = {'1','2','3','a','b','\0'};
    printf("Mirando el comportamiento de misterio\n");

    printf("Ingreso: %s\n", cadena1);
    misterio(cadena1);
    printf("Ibtiene: %s\n", cadena1);

    printf("Ingreso: %s\n", cadena2);
    misterio(cadena2);
    printf("Obtiene: %s\n", cadena2);
    printf("Misterio invierte cadenas.\n");
    return 0;
}




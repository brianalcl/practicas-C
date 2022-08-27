#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palindroma.h"

int main()
{
    char string[100];
    printf("Programa que dada una palabra decide si es palindroma (capicua) o no.\n");
    printf("Coloque un palabra.\n");
    scanf("%s", string);
    if(palindroma(string, strlen(string))){
        printf("La palabra es palindroma.\n");
    }
    else{
        printf("La palabra no es palindroma.\n");
    }
    return 0;
}

#include "palindroma.h"
#include <string.h>

/*
Palindroma:
CB: Si la palabra p no tiene letras entonces palindroma es verdadero.
CR: Si la plabra p tiene mas de una letra entonces,
        si la ultima letra de la palabra p es igual a la primera entonces
            palindroma es palindroma con p'
        sino palindroma es falso.
*/
int palindroma(char cadena[]){
    return pali(cadena, 0, strlen(cadena) - 1);
}

int pali(char cadena[], int posIni, int posFin){
    int rta;
    if(posIni > posFin){
        rta = 1;
    }
    else{
        if(cadena[posIni] == cadena[posFin]){
            rta = pali(cadena, ++posIni, --posFin);
        }
        else
            rta = 0;
    }
    return rta;
}

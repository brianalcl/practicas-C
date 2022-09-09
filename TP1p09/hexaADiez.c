#include "hexaADiez.h"
#include <stdio.h>
#include <stdlib.h>

int digMenSig(char string[]){
    int i = 0;
    int rta = 0;
    while(string[i] != '\0' && rta != -1){
        if(string[i] >= 'a' && string[i] <= 'f')
            rta++;
        else
            if(string[i] >= 'A' && string[i] <= 'F')
                rta++;
            else
                if(string[i] >= '0' && string[i] <= '9')
                    rta++;
                else
                    rta = -1;
        i++;
    }

    if(rta != -1)
        rta--;
    return rta;
}

long hexadecimalADecimal(char string[], int digMenSig){
    int i = digMenSig; //posicion del digito menos significativo.
    int j = 0;
    long rta = 0;
    while(i >= 0){
        if(string[i] >= 'a' && string[i] <= 'f')
            rta += (string[i] - 87) * pot(16, j++);
        else
            if(string[i] >= 'A' && string[i] <= 'F')
                rta += (string[i] - 55) * pot(16, j++);
            else
                if(string[i] >= '0' && string[i] <= '9')
                    rta += (string[i] - 48) * pot(16, j++);
        i--;
    }
    return rta;
}

long pot(long n, long exp){
    //retorna n^exp
    long rta;
    if(exp == 0){
        rta = 1;
    }
    else{
        rta = n * pot(n, --exp);
    }
    return rta;
}

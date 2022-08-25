#include "binarioDecimal.h"

long binarioADecimal(long numero){
    long rta = 0;
    long i = 0;

    while(numero > 0){
        rta += (numero % 10) * pot(2, i++);
        numero = numero / 10;
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

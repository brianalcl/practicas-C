#include "header.h"

/*
Mediano:
CB: si n tiene un solo digito, entonces mediano es n.
CR: si n tiene mas de un digito entonces,
si el ultimo digito de n esta en una posicion impar
  tenemos que mediano es mediano con n' mas n.
si el ultimo digito de n esta en una posicion par
  tenemos que mediano es mediano con n' menos n.
siendo n' n sin su ultimo digito.
*/

long mediano(long numero){
    return medi(numero, 1);
}

long medi(long numero, int posImpar){
    long rta;
    if(numero < 10){
        rta = numero;
    }
    else{
        if(posImpar == 1){
            rta = medi(numero / 10, 0) + (numero % 10);
        }
        else{
            rta = medi(numero / 10, 1) - (numero % 10);
        }
    }
    return rta;
}

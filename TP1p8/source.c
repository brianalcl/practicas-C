#include "header.h"

/*
Prolojo:
CB: si n tiene un digito entonces, prolijo es verdadero.
CR: si n tiene mas de un digito entonces,
    si siempre el ultimo digito de n es mayor que el penultimo digito de n
    o si siempre el ultimo digito de n es menor que el penultimo digito de n
    entonces prolijo es prolijo con n'
    caso contrario Prolijo es falso.
siendo n' n sin su ultimo digito.
*/

int prolijo(long numero){
    return proli(numero / 10, numero % 10, (numero / 10 % 10 < numero % 10) || numero / 10 % 10 == 0);
}

int proli(long numero, int ultimoDig, int ascendente){
    int rta;
    if(numero == 0){
        rta = 1;
    }
    else{
        if(numero % 10 < ultimoDig && ascendente)
            rta = proli(numero / 10, numero % 10, ascendente);
        else
            if(numero % 10 > ultimoDig && !ascendente)
                rta = proli(numero / 10, numero % 10, ascendente);
        else
            rta = 0;
    }
    return rta;
}

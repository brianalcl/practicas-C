#include "funciones.h"

/*
cantiDigitos.
CB: si n tiene un digito entonces cantDigitos es 1
CR: si n tiene mas de un digito entonces cantDigitos es 1 mas cantDigitos con n'
siendo n' n sin su ultimo digito.
*/

int cantDigitos(int n)
{
    int rta = 0;
    if(n/10 == 0){
        rta = 1;
    }
    else{
        rta = 1 + cantDigitos(n/10);
    }
    return rta;
}

/*
cantApa:
CB: si n tiene un solo digito entonces, si el digito es igual a "d" entonces cantApa es 1, sino cantApa es 0
CR: si n tiene mas de un digito entonces, sin el ultimo digito de n es igual a "d" entonces cantApa es 1 mas cantApa con n'
sino cantApa es cantApa con n'.
siendo n' n sin su ultimo digito.
*/

int cantApa(int d, int n)
{
    int rta = 0;
    if(n/10 == 0){
        rta = n == d? 1 : 0;
    }
    else{
        if(n%10 == d)
            rta = 1 + cantApa(d, n/10);
        else
            rta = cantApa(d, n/10);
    }
    return rta;
}

/*
las posiciones se toman desde el digito menos significativo
ej para 1348 el 8 es pos impar el 4 pos par el 3 pos impar el 1 pos par
cantParEnImpar:
CB: si n tiene un solo digito entonces, si el digito es par entonces cantParEnImpar es 1, sino cantParEnImpar es 0.
CR: si n tiene mas de un digito entonces, si el ultimo digito de n es par y esta en una posicion impar entonces cantParEnImpar es 1
mas cantParEnImpar con n', sino cantParEnImpar es cantParEnImpar con n'.
siendo n' n sin su ultimo digito.
*/

int cantidadParEnImpar(int n){
    return cantParEnImpar(n, 1);
}

int cantParEnImpar(int n, int posImpar)
{
    int rta = 0;
    if(n/10 == 0){
        rta = n%2 == 0? 1 : 0;
    }
    else{
        if(posImpar == 1){
            if((n%10)%2 == 0)
                rta = 1 + cantParEnImpar(n/10, 0);
        }
        else{
            rta = cantParEnImpar(n/10, 1);
        }
    }
    return rta;

}

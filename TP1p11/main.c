#include <stdio.h>
#include <stdlib.h>

//Primero se realizo la traza luego se dio play.

/*
sorpresa_1:
calcula la potencia b de a (a^b)
ejemplo para la entrada a = 3 b = 3
-------------------------------------
a = 3
b = 3
toReturn = sorpresa_1(3, 2) * 3
-------------------------------------
-------------------------------------
a = 3
b = 2
toReturn = sorpresa_1(3, 1) * 3
-------------------------------------
-------------------------------------
a = 3
b = 1
toReturn = sorpresa_1(3, 0) * 3
-------------------------------------
-------------------------------------
a = 3
b = 0
toReturn = 1
-------------------------------------
CORTA LA RECURCION
-------------------------------------
a = 3
b = 1
toReturn = 1 * 3 = 3
-------------------------------------
-------------------------------------
a = 3
b = 2
toReturn = 3 * 3 = 9
-------------------------------------
-------------------------------------
a = 3
b = 3
toReturn = 9 * 3 = 27
-------------------------------------
*/
int sorpresa_1(int a, int b){
    int toReturn;
    if (b == 0)
        toReturn = 1;
    else
        toReturn = sorpresa_1(a, b-1) * a;
    return toReturn;
}

/*
sorpresa_2
Retorna la cantidad de digitos de un numero "a".
ejemplo para a = 124
-------------------------------
a = 124
toReturn = 1 + sorpresa_2(12)
-------------------------------
-------------------------------
a = 12
toReturn = 1 + sorpresa_2(1)
-------------------------------
-------------------------------
a = 1
toReturn = 1
-------------------------------
CORTA LA RECURCION
-------------------------------
a = 12
toReturn = 1 + 1 = 2
-------------------------------
-------------------------------
a = 124
toReturn = 1 + 2 = 3
-------------------------------
*/

int sorpresa_2(int a){
    int toReturn;
    if (a < 10)
        toReturn = 1;
    else
        toReturn = 1 + sorpresa_2( a/10 );
    return toReturn;
}

/*
sorpresa_3
Invierte un numero "a"
ejemplo para a = 12856
------------------------
a = 12856
aux = sorpresa_3(1285)
------------------------

------------------------
a = 1285
aux = sorpresa_3(128)
------------------------

------------------------
a = 128
aux = sorpresa_3(12)
------------------------

------------------------
a = 12
aux = sorpresa_3(1)
------------------------

------------------------
a = 1
toReturn = 1
------------------------
CORTA LA RECURCION
-------------------------------------------------------------------------------------------------
a = 12
aux = 1 (resultado de sorpresa_3(1))
toReturn (12 % 10) * sorpresa_1(10, sorpresa_2(12) - 1) + 1 = 2 * 10 +1 = 21
-------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------
a = 128
aux = 21 (resultado de sorpresa_3(12))
toReturn (128 % 10) * sorpresa_1(10, sorpresa_2(128) - 1) + 21 = 8 * 100 + 21 = 821
-------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------
a = 1285
aux = 821 (resultado de sorpresa_3(128))
toReturn (1285 % 10) * sorpresa_1(10, sorpresa_2(1285) - 1) + 821 = 5 * 1000 + 821 = 5821
-------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------
a = 12856
aux = 5821 (resultado de sorpresa_3(1285))
toReturn (12856 % 10) * sorpresa_1(10, sorpresa_2(12856) - 1) + 5821 = 6 * 10000 + 821 = 65821
-------------------------------------------------------------------------------------------------
*/
int sorpresa_3(int a){
    int toReturn, aux;
    if (a < 10)
        toReturn = a;
    else{
        aux = sorpresa_3(a/10);
        toReturn = (a % 10) * sorpresa_1(10,sorpresa_2(a)-1) + aux;
    }
    return toReturn;
}

int main(){
    printf("%d", sorpresa_3(12856));
    return 0;
}
#include "funcionesProcedimientos.h"
#include <stdlib.h>

void inicializaAlAzar(int arreglo [], int n){
    //Asumiendo que el arreglo no se va a desbordar
    for(int i = 0; i < n; i++){
        arreglo[i] = rand() % 2147483647;
    }
}

void ordenarAscendente(int arreglo [], int n){
    int aux = 0;
    if(n >= 2){
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arreglo[i] >= arreglo[j]){
                    aux = arreglo[i];
                    arreglo[i] = arreglo[j];
                    arreglo[j] = aux;
                }
            }
        }
    }
}

int ordenadosAscendente(int arreglo [], int n){
    //Asumiendo que el arreglo no se va a desbordar
    int rta = 1;
    for(int i = 0; i < n - 1 && rta != 0; i++){
        rta = arreglo[i] <= arreglo[i+1];
    }
    return rta;
}

int * unirOrdenado(int arregloA [], int arregloB [], int tamA, int tamB){

    int * rta = malloc((sizeof(int *)*tamA + sizeof(int *)*tamB));
    int * cabeza = rta;
    //llenando con -1's
    for(int i = 0; i < tamA + tamB; i++){
        *cabeza = -1;
        cabeza++;
    }
    cabeza = rta;
    //fin de llenado con -1's
    int i = 0;
    int j = 0;
    while(i < tamA && j < tamB){
        if(arregloA[i] < arregloB[j]){
            *cabeza = arregloA[i];
            i++;
        }
        else{
            if(arregloA[i]==arregloB[j]){
                *cabeza = arregloB[j];
                j++;
                i++;
            }
            else{
                *cabeza = arregloB[j];
                j++;
            }
        }
        cabeza++;
    }
    while(i < tamA){
        *cabeza = arregloA[i];
        cabeza++;
        i++;
    }
    while(j < tamB){
        *cabeza = arregloB[j];
        cabeza++;
        j++;
    }
    return rta;
}

/* Buscando a Dennis Ritchie
                                                     ___,------,
             _,--.---.                         __,--'         /
           ,' _,'_`._ \                    _,-'           ___,|
          ;--'       `^-.                ,'        __,---'   ||
        ,'               \             ,'      _,-'          ||
       /                  \         _,'     ,-'              ||
      :                    .      ,'     _,'                 |:
      |                    :     `.    ,'                    |:
      |           _,-      |       `-,'                      ::
     ,'____ ,  ,-'  `.   , |,         `.                     : \
     ,'    `-,'       ) / \/ \          \                     : :
     |      _\   o _,-'    '-.           `.                    \ \
      `o_,-'  `-,-' ____   ,` )-.______,'  `.                   : :
       \-\    _,---'    `-. -'.\  `.  /     `.                  \  \
        / `--'             `.   \   \:        \                  \,.\
       (              ____,  \  |    \\        \                 :\ \\
        )         _,-'    `   | |    | \        \                 \\_\\
       /      _,-'            | |   ,'-`._      _\                 \,'
       `-----' |`-.           ;/   (__ ,' `-. _;-'`\           _,--'
     ,'        |   `._     _,' \-._/  Y    ,-'      \      _,-'
    /        _ |      `---'    :,-|   |    `     _,-'\_,--'   \
   :          `|       \`-._   /  |   '     `.,-' `._`         \
   |           _\_    _,\/ _,-'|                     `-._       \
   :   ,-         `.-'_,--'    \                         `       \
   | ,'           ,--'      _,--\           _,                    :
    )         .    \___,---'   ) `-.____,--'                      |
   _\    .     `    ||        :            \                      ;
 ,'  \    `.    )--' ;        |             `-.                  /
|     \     ;--^._,-'         |                `-._            _/_\
\    ,'`---'                  |                    `--._____,-'_'  \
 \_,'                         `._                          _,-'     `
          -hrr-             ,-'  `---.___           __,---'
                          ,'             `---------'
                        ,'
*/

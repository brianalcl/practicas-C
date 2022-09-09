#include <stdio.h>
#include <stdlib.h>

int reset(int *a, int b) {
    *a = 0; b = 0; // *a y b son reseteados
}

int main()
{
    printf("1) Considerar los siguientes planteos en el contexto del lenguaje C.\n");
    printf("A) ¿Como se define una variable de tipo puntero?\n");
    printf("se definen de esta forma: tipo * nombre\n");
    printf("Ejemplo 1: int * punteroAEntero\n");
    int * punteroAEntero;
    printf("Ejemplo 2: char * punteroACaracter\n");
    char * punteroACaracter;
    printf("B) ¿Que estructuras de datos pueden ser apuntadas por una variable de tipo puntero?\n");
    printf("Una variable de tipo puntero puede apuntar a cualquier estructura de datos.\n");
    printf("C) ¿Es posible declarar una variable de tipo puntero sin especificar a que estructura de datos referenciara?\n");
    printf("Si es posible, usando el tipo ''void'' y solo funciona como tipo base.\n");
    printf("Ejemplo void * puntero\n");
    printf("d) ¿La constante NULL, de que tipo es?\n");
    printf("\n");
    printf("E) ¿Por que los punteros permiten simular un pasaje de parametros por referencia?\n");
    printf("¿Que operadores son necesarios para tal fin?\n");
    printf("Los punteros permiten paseje de parametros por referencia porque:\n");
    printf("Apunan a una direccion de memoria.\n");
    printf("Los operadores necesarios para tal fin son:\n");
    printf("*nombre que en un parametro construlye un puntero\n");
    printf("&nombre que construye dinamicamente un puntero que apunta a esa variable (la direccion en memoria de nombre)\n");
    int x = 1, y = 1;
    reset(&x, y); // x vale 0, pero y vale 1

    return 0;
}



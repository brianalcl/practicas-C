#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    FILE *fopen(const char *filename, const char *mode);
    /*

    w crea un fichero de escritura. Si ya existe lo crea de nuevo.
    w+ crea un fichero de lectura y escritura. Si ya existe lo crea de nuevo
    a abre o crea un fichero para añadir datos al final del mismo
    a+ abre o crea un fichero para leer y añadir datos al final del mismo
    r abre un fichero de lectura
    r+ abre un fichero de lectura y escritura

    extra: para que este en modo binario solo agregamos una b al final
    wb, w+b, ab, a+b, rb, r+b.

    */

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*

    w crea un fichero de escritura.
    w+ crea un fichero de lectura y escritura.
    a abre o crea un fichero para colocar datos al final del mismo
    a+ abre o crea un fichero para leer y colocar datos al final del mismo
    r abre un fichero de lectura
    r+ abre un fichero de lectura y escritura

    extra: para que este en modo binario solo agregamos una b al final
    wb, w+b, ab, a+b, rb, r+b.

    Escribir en un archivo:
    fputc() escribe un caracter EJ: fputc('a', archivo);
    fputs() escribe una cadena de texto EJ: fputs("hola", archivo);
    fprintf() equivalente a printf
*/

int main()
{
    printf("Intentando trabajar con archivos\n");
    printf("Definamos un archivo en modo escritura:\n");
    FILE * archivoA = fopen("archivoA.txt", "w"); //el archivo esta alojado en la carpeta raiz
    printf("Escribamos 'Hola, este es mi primer archivo en C' en el archivo\n");
    printf("Y luego escribamos una matriz de 5x5 con 0's\n");
    if (archivoA != NULL){
        fputs("Hola, este es mi primer archivo en C\n", archivoA);
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                fputc('0', archivoA);
            }
            fputc('\n', archivoA);
        }
    }

    printf("Ahora cerramos el archivo\n");
    fflush(archivoA);
    fclose(archivoA);

    return 0;
}

/*
    Agradecimientos a Christian León
    https://www.youtube.com/c/CPlayMasH_Tutoriales
*/

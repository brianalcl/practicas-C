#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"
#include "automovil.h"

int main(){

    printf("Punto 3\n");
    printf("extra: Intentando ver como funciona un registro.\n");

    struct empleado miEmpleado;
    struct domicilio * dom;
    miEmpleado.edad = 0;
    strcpy(miEmpleado.nombre, "Saul\0");
    strcpy(miEmpleado.apellido, "Goodman\0");
    miEmpleado.edad = 61;
    miEmpleado.sexo = 'M';
    strcpy(miEmpleado.estadoCivil, "Divorciado");
    strcpy(miEmpleado.estudios, "Universitarios");
    miEmpleado.telefono = 50516500;

    dom = &miEmpleado.dom;
    strcpy(dom->calle, "Montgomery Blvd NE");
    dom->numero = 9800;
    dom->piso = 0;
    dom->torre = 0;
    dom->departamento = 0;

    printf("Veamos que escribimos en el registro miEmpleado:\n");
    printf("-----------------------------------------------------\n");
    printf("Apellido: %s\n", miEmpleado.apellido);
    printf("Nombre: %s\n", miEmpleado.nombre);
    printf("Edad: %i\n", miEmpleado.edad);
    printf("Sexo: %c\n", miEmpleado.sexo);
    printf("Estado civil: %s\n", miEmpleado.estadoCivil);
    printf("Estudios: %s\n", miEmpleado.estudios);
    printf("Telefono: %ld\n", miEmpleado.telefono);
    printf("Datos del domicilio:\n");
    printf("Calle: %s\n", miEmpleado.dom.calle);
    printf("Numero: %i\n", miEmpleado.dom.numero);
    printf("Torre: %i\n", miEmpleado.dom.torre);
    printf("Piso: %i\n", miEmpleado.dom.piso);
    printf("Departamento: %i\n", miEmpleado.dom.departamento);
    printf("-----------------------------------------------------\n");
    return 0;
}

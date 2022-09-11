#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"

int main()
{ //CONSULTAR
    printf("Punto 4\n");
    struct empleado miEmpleado2;
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

    miEmpleado2 = miEmpleado;
    strcpy(miEmpleado.apellido, "Good\0");
    printf("Apellido miEmpleado2 (miEmpleado ahora es Good): %s\n", miEmpleado2.apellido);
    miEmpleado.dom.numero = 90;
    printf("numero de domicilio en miEmpleado2 (en miEmpleado ahora es 90): %i\n", miEmpleado2.dom.numero);
    printf("\n Parece que miEmpleado2 = miEmpleado copia todos los valores de miEmpleado a miEmpleado2\n");
    return 0;
}

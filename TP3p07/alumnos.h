#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED

struct alumno{
    int lu;
    char notas [11];
}; //no se si esto esta bien hacerlo en el header o si se implementa en el .c

int cantidadAlumnosMasCarga(struct alumno * alumnos[] , int tamArr);

#endif // ALUMNOS_H_INCLUDED

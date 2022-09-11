#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

//recordatorio: cascada.

struct domicilio{
    char calle [50];
    int numero;
    int torre;
    int piso;
    int departamento;
};

struct empleado{
    char apellido [50];
    char nombre [50];
    long telefono;
    char sexo;
    int edad;
    char estudios [50];
    char estadoCivil [50];
    struct domicilio dom;
};


#endif // EMPLEADO_H_INCLUDED

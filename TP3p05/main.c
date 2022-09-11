#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct usuario{
    char apellido [41];
    char nombre [41];
} * tUsuario;

struct usuario nuevo_usuario_1(){ //Creo que esta es correcta
    char n [41], a [41];
    struct usuario u;
    printf("Ingrese nombre: ");
    scanf("%40[^\n]", n);
    fflush(stdin);
    printf("Ingrese apellido: ");
    scanf("%40[^\n]", a);
    fflush(stdin);
    strcpy(u.nombre, n);
    strcpy(u.apellido, a);
    return u;
}

tUsuario nuevo_usuario_2(){//Esta no es correcta ya que u es un puntero a un tipo registro usuario
    char n [41], a [41];
    tUsuario u;
    printf("Ingrese nombre: ");
    scanf("%40[^\n]", n);
    fflush(stdin);
    printf("Ingrese apellido: ");
    scanf("%40[^\n]", a);
    fflush(stdin);
    strcpy(u->nombre, n);
    strcpy(u->apellido, a);
    return u;
}

tUsuario nuevo_usuario_3(){ //Creo que esta podria ser correcta, pero falta el free()
    char n [41], a [41];
    tUsuario u = (tUsuario) malloc(sizeof(struct usuario));
    printf("Ingrese nombre: ");
    scanf("%40[^\n]", n);
    fflush(stdin);
    printf("Ingrese apellido: ");
    scanf("%40[^\n]", a);
    fflush(stdin);
    strcpy(u->nombre, n);
    strcpy(u->apellido, a);
    return u;
}

tUsuario nuevo_usuario_4(){ //Esta no es correcta, ya que &u es un puntero de una variable local
    char n [41], a [41];
    struct usuario u;
    printf("Ingrese nombre: ");
    scanf("%40[^\n]", n);
    fflush(stdin);
    printf("Ingrese apellido: ");
    scanf("%40[^\n]", a);
    fflush(stdin);
    strcpy(u.nombre, n);
    strcpy(u.apellido, a);
    return &u;
}

int main(){
    /*
    int i;
    tUsuario u, users [4];
    struct usuario u_1;
    u_1 = nuevo_usuario_1();
    users[0] = &u_1;
    users[1] = nuevo_usuario_2();
    users[2] = nuevo_usuario_3();
    users[3] = nuevo_usuario_4();
    for(i=0; i<4; i++){
        u = users[i];
        printf("Usuario %i: \n", i+1);
        printf("Nombre: %s \n", u->nombre);
        printf("Apellido: %s \n", u->apellido);
    }
    */

    //codigo con las opciones que para mi son correctas.
    //Recordemos que la opcion 3 le falta el free().
    int i;
    tUsuario u, users [2];
    struct usuario u_1;
    struct usuario u_2;
    u_1 = nuevo_usuario_1();
    users[0] = &u_1;
    users[1] = nuevo_usuario_3();
    for(i=0; i<2; i++){
        u = users[i];
        printf("Usuario %i: \n", i+1);
        printf("Nombre: %s \n", u->nombre);
        printf("Apellido: %s \n", u->apellido);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct data{
    int id;
    char name [51];
};

typedef struct data * tData;
int count = 2;
tData data_set [2];

void view_data(tData * array){
    int i;
    for (i=0; i<count; i++)
        printf("El id: %i corresponde a %s\n", array[i]->id, array[i]->name);
}

tData new_data(int id, char * name){
    tData ndata = (tData) malloc(sizeof(struct data));
    ndata->id = id;
    strcpy(ndata->name, name);
    return ndata;
}

int main(){
    int i, id;
    char name [51];
    for(i=0; i<count; i++){
        printf("Introduzca un ID: ");
        scanf("%d", &id);
        printf("Introduzca un Nombre (max. 50): ");
        scanf("%s50[^\n]", name);
        data_set[i] = new_data(id, name);
    }
    view_data(data_set);
    for(i=0; i< count; i++) {
        free(data_set[i]);
    }
    printf("\nFuente: 'Notas de Clase. Organización de Computadoras.' Federico Joaquín. Universidad Nacional del Sur. (c) 2017-2022.\n");
    return 0;
}


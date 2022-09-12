#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    int operacion, salir = 0;
    float operando_1, operando_2, resultado;

    printf("'Notas de Clase. Organización de Computadoras.' Federico Joaquín. Universidad Nacional del Sur. (c) 2017-2022\n");
    printf("Calculadora que suma, resta, multiplica y divide.\n");


    while(!salir){
        printf("Ingrese la operacion a realizar (el numero).\n");
        printf("1) Suma.\n2) Resta.\n3) Multiplicacion.\n4) Division.\n5) Salir.\n");
        scanf("%d", &operacion);
        fflush(stdin);
        if(operacion >= 1 && operacion <= 4){
            printf("Ingrese dos operandos.\n");
            scanf("%f %f", &operando_1, &operando_2);
            fflush(stdin);
            }
        switch(operacion){
            case 1:{
                resultado = suma(operando_1, operando_2);
                printf("%f + %f = %f\n", operando_1, operando_2, resultado);
                break;
            }
            case 2:{
                resultado = resta(operando_1, operando_2);
                printf("%f - %f = %f\n", operando_1, operando_2, resultado);
                break;
            }
            case 3:{
                resultado = multiplicacion(operando_1, operando_2);
                printf("%f * %f = %f\n", operando_1, operando_2, resultado);
                break;
            }
            case 4:{
                resultado = division(operando_1, operando_2);
                printf("%f / %f = %f\n", operando_1, operando_2, resultado);
                break;
            }
            case 5:{
                salir = 1;
                printf("Hasta la proxima.\n");
                break;
            }
            default:{
                printf("Coloco mal la operacion. Recuerde que es un numero de 1 a 4.\n");
                break;
            }
        }

    }
    return 0;
}

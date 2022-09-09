#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia=0;
    int mes=0;
    int year=0;
    int rta=0;
    printf("Programa que ve si un grupo de numeros es una fecha valida en formato dd/mm/aaaa\n");
    printf("Coloque el primer numero correspondiente al dia\n");
    scanf("%i", &dia);
    printf("Coloque el segundo numero correspondiente al mes\n");
    scanf("%i", &mes);
    printf("Coloque el tercer numero correspondiente al año\n");
    scanf("%i", &year);
    printf("Veamos si %i/%i/%i es una fecha valida\n", dia, mes, year);

    if((dia>0 && dia<=31) && (mes>0 && mes<=12) && (year>=0)){
        rta = dia<=31;

        if(mes==4 || mes==6 || mes==9 || mes==11)
            rta = dia <= 30;

        if(mes==2){
            if(year%4==0 && (year%100!=0 || year%400==0))
                rta = dia<=29;
            else
                rta = dia<=28;
        }
    }

    if(rta)
        printf("La fecha es valida\n");
    else
        printf("La fecha no es valida\n");

    return 0;
}

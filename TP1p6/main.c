#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eleccion = 0;
    int numero = 0;
    int digito = 0;
    printf("Elija una opcion\n");
    printf("1) Contar cantidad de digitos de un entero.\n");
    printf("2) Dado un tentero N y un digito D contar la cantidad de veces que D aparece en N.\n");
    printf("3) Contar la cantidad de digitos pares que ocupan posiciones impares en un numero n.\n");

    scanf("%i", &eleccion);
    switch(eleccion){
        case 1:
            printf("Escriba un numero.\n");
            scanf("%i", &numero);
            printf("La cantidad de digitos en %i es: %i", numero, cantDigitos(numero));
            break;
        case 2:
            printf("Escriba un numero.\n");
            scanf("%i", &numero);
            printf("Escriba un digito.\n");
            scanf("%i", &digito);
            printf("La cantidad de veces que aparece %i en %i es: %i", digito, numero, cantApa(digito, numero));
            break;
        case 3:
            printf("Escriba un numero.\n");
            scanf("%i", &numero);
            printf("La cantidad de digitos pares en posiciones impares en %i es: %i", numero, cantidadParEnImpar(numero));
            break;
    }

    return 0;
}

/*
cantiDigitos.
CB: si n tiene un digito entonces cantDigitos es 1
CR: si n tiene mas de un digito entonces cantDigitos es 1 mas cantDigitos con n'
siendo n' n sin su ultimo digito.
*/

int cantDigitos(int n)
{
    int rta = 0;
    if(n/10 == 0){
        rta = 1;
    }
    else{
        rta = 1 + cantDigitos(n/10);
    }
    return rta;
}

/*
cantApa:
CB: si n tiene un solo digito entonces, si el digito es igual a "d" entonces cantApa es 1, sino cantApa es 0
CR: si n tiene mas de un digito entonces, sin el ultimo digito de n es igual a "d" entonces cantApa es 1 mas cantApa con n'
sino cantApa es cantApa con n'.
siendo n' n sin su ultimo digito.
*/

int cantApa(int d, int n)
{
    int rta = 0;
    if(n/10 == 0){
        rta = n == d? 1 : 0;
    }
    else{
        if(n%10 == d)
            rta = 1 + cantApa(d, n/10);
        else
            rta = cantApa(d, n/10);
    }
    return rta;
}

/*
cantParEnImpar:
CB: si n tiene un solo digito entonces, si el digito es par entonces cantParEnImpar es 1, sino cantParEnImpar es 0.
CR: si n tiene mas de un digito entonces, si el ultimo digito de n es 1 y esta en una posicion impar entonces cantParEnImpar es 1
mas cantParEnImpar con n', sino cantParEnImpar es cantParEnImpar con n'.
siendo n' n sin su primer digito.
*/

int cantidadParEnImpar(int n){
    int pos = cantDigitos(n); //pequeña trampa, quiza requiera correccion.
    return cantParEnImpar(n, pos);
}

int cantParEnImpar(int n, int pos)
{
    int rta = 0;
    if(n/10 == 0){
        rta = n%2 == 0? 1 : 0;
    }
    else{
        if(pos%2 != 0){
            if((n%10)%2 == 0)
                rta = 1 + cantParEnImpar(n/10, --pos);
        }
        else{
            rta = cantParEnImpar(n/10, --pos);
        }
    }
    return rta;

}

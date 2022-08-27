#include <stdio.h>
#include <stdlib.h>

int funcion_1(int a){
    return a<<4;
}
int funcion_2(int a){
    return a>>2;
}
int funcion_3(int a, int b){
    return a & b;
}
int funcion_4(int a, int b){
    return a | b;
}

/*
    "|", "&", "<<" y ">>" operan en base 2.
    El numero se mantiene en base 10,
    pero las operaciones son en base 2.
*/
int main(){
    printf("10 en base 2: 1010, 1010 << 4 = 10100000 (160 base 10).\n");
    printf("%d\n", funcion_1(10)); //

    printf("15 en base 2: 1111, 1111 << 4 = 11110000 (240 base 10).\n");
    printf("%d\n", funcion_1(15)); //

    printf("28 en base 2: 11100, 11100 >> 2 = 111 (7 base 10).\n");
    printf("%d\n", funcion_2(28)); //

    printf("155 en base 2: 10011011, 10011011 >> 2 = 100110 (38 base 10).\n");
    printf("%d\n", funcion_2(155)); //

    printf("197 en base 2: 11000101, 11000101 >> 2 = 110001 (49 base 10).\n");
    printf("%d\n", funcion_2(197)); //

    printf("421 en base 2: 110100101, 0 en base 2: 0, 110100101 & 000000000 = 000000000 = 0 (0 en base 10).\n");
    printf("%d\n", funcion_3(421, 0));

    printf("136 en base 2: 10001000, 8 en base 2: 1000, 10001000 & 00001000 =  00001000 = 1000 (8 en base 10).\n");
    printf("%d\n", funcion_3(136, 8));

    printf("136 en base 2: 10001000, 15 en base 2: 1111, 10001000 & 00001111 =  00001000 = 1000 (8 en base 10).\n");
    printf("%d\n", funcion_3(136, 15));

    printf("136 en base 2: 10001000, 128 en base 2: 10000000, 10001000 & 10000000 =  100000000 (128 en base 10).\n");
    printf("%d\n", funcion_3(136, 128));

    printf("126 en base 2: 1111110, 1 en base 2: 1, 1111110 | 0000001 = 1111111 (127 en base 10).\n");
    printf("%d\n", funcion_4(126,1));

    printf("127 en base 2: 1111111, 128 en base 2: 10000000, 01111111 | 10000000 = 11111111 (255 en base 10).\n");
    printf("%d\n", funcion_4(127,128));

    printf("27 en base 2: 11011, 4 en base 2: 100, 11011 | 00100 = 11111 (31 en base 10).\n");
    printf("%d\n", funcion_4(27,4));

    printf("31 en base 2: 11111, 4 en base 2: 100, 11111 | 00100 = 11111 (31 en base 10).\n");
    printf("%d\n", funcion_4(31,4));
    return 0;
}

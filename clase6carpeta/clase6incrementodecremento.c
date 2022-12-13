#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    printf("Operadores de Incremento y Decremento \n");

    int value, res;

    value = 25;
    res = value++;
    printf("Resultado: %i \n", res);
    value = 25;
    res = ++value;
    printf("Resultado: %i \n", res);
    value = 25;
    res = value--;
    printf("Resultado: %i \n", res);
    value = 25;
    res = --value;
    printf("Resultado: %i \n", res);

    return 0;
}
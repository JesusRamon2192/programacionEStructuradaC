#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){

    int x;
    printf("Ingresa el valor de x:\n");
    scanf("%i", &x);

    x %= 5;
    x++;
    printf("Ahora el valor de x es: %i\n", x);

  
    return 0;
}
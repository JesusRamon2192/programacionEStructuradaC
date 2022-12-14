#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ciclo do While \n");

    char answer='q'   ;
    char value;

    do {
        printf("Ingresa una letra: ");
        scanf(" %c", &value);
    } while(value!=answer);

    printf("Coincide las letras %c == %c\n", value, answer);
    return 0;
}
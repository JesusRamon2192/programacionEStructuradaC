#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("!B I E N V E N I D O!!\nDebes elegir una puerta. En una de ellas hay $1.000.000 USD.\n");

    int door;

    printf("1. Puerta verde.\n");
    printf("2. Puerta negra.\n");
    printf("3. Puerta azul.\n");
    scanf(" %i", &door);

    switch(door)
    {
    case 1:
        printf("!FELICIDADES! Eres millonario.\n");
        break;

    case 2:
        printf("!LO SIENTO! Aqui esta tu suegra y tu ex.\n");
        break;

    case 3:
        printf("!LO SIENTO! Aqui estan tus facturas pendientes.\n");
        break;

    default:
        printf("Recuerda que es un numero del 1 al 3.\n");
        break;
    }

    return 0;
}
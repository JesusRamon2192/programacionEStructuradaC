#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    float gF;
    float gC;

    printf("Ingresa los grados Farenheit: \n");
    scanf("%f", &gF);

    gC = ((gF -32)/9)*5;

    printf("La conversion a grados Celcius es: %f \n", gC);
    
    return 0;

}
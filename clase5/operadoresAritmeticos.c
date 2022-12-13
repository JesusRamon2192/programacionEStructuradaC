#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    int rSum;
    float rRes;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7 + 3;
    rRes = 7.1 - 8.5;
    rDiv = 7 / 3.1;
    rMult = 7 * 3;
    rMod = 7%3;

    printf("Resultado de la suma: %i \n", rSum);
    printf("Resultado de la resta: %f \n", rRes);
    printf("Resultado de la division: %f \n", rDiv);
    printf("Resultado de la multiplicacion: %f \n", rMult);
    printf("Resultado de la modulo: %i \n", rMod);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    float r, h, v, a;
    float pi = 3.1416;

    printf("Ingresa radio\n");
    scanf("%f", &r);

    printf("Ingresa altura\n");
    scanf("%f", &h);

    a = 2 * pi * r * (r + h);
    printf("El area del cilindro es: %f\n", a);

    v = pi * (r*r)*h;
    printf("El volumen del cilindro es: %f\n", v);

    return 0;
}
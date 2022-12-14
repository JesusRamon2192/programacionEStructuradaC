#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Multiplicar todos los elementos de un arreglo: \n");
    printf("Ingresa todos los valores: \n");
    int values[5], resultado;
    for(int n=0; n<5; n++){
        printf("Valor[%i]: ",n);
        scanf("%i",&values[n]);

        if(n==4){
            resultado=values[0] * values[1] * values[2] * values[3]* values[4];
            printf("\nEl resultado es: %i \n", resultado);
        }
    }

    return 0;
}
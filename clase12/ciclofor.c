#include<stdio.h>

int main()
{
    printf("Ciclo for.\n\n");
    int upperLim, bottomLim;
    printf("Imprimir en orden descendiente \n");

    printf("Ingresar limite superior: \n");
    scanf("%i", &upperLim);

    printf("Ingresar limite inferior: \n");
    scanf("%i", &bottomLim);
   
    for(int i=upperLim; i >= bottomLim; i--){
        printf("Numero: %i\n", i);
    }
    return 0;
}
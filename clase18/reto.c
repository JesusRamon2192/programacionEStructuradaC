#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Cadena de Caracteres \n");

    char Cadena[50];
    int size;

    printf("Ingresa una cadena de caracteres \n");
    fgets(Cadena, 50, stdin);

  //  printf("La Cadena es: \n");
    //puts(Cadena);
    size = strlen(Cadena);
   // printf("La longitud de la cadena es: %i \n", size);

    printf("La cadena al revez es: \n");
     for(int i = size; i>=0; i--){

        printf(" %c ", Cadena[i]);
     }
       


    return 0;
}
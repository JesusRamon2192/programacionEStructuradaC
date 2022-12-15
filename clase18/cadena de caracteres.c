#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Cadena de caracteres\n\n");
    
    char nameC[50];

    int size;

    printf("Ingresar el nombre con gets: \n");

    fgets(nameC, 50, stdin);

    printf("El nombre es: ");
    puts(nameC);

    size = strlen(nameC);
    printf("\n El tamaño de la cadena es: %i \n", size);
    return 0;
}
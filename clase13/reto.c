#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Imprimer los primeros 100 numeros naturales \n");
    int val = 0;
    int limit = 100;

    do {
        printf("%i\n", val);
        val++;
    } while(val <= limit);

    return 0;
}
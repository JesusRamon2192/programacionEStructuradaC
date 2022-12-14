#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int tabla [3][4] = {{1, 2, -3, 4}, {1, 2, 3, 4}, {5, 4, 8, 9}};

    for (int x = 0; x < 3; x++)
    {
        int suma = 0;
        for(int y = 0; y < 4; y++)
        {
            suma += tabla[x][y];
        }
        printf("Suma fila %i: %i \n", x + 1, suma);
    }

    return 0;
}
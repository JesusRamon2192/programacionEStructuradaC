#include<stdio.h>

int main()
{
    printf("Has un programa que imprima el simbolo # 5 veces.\n\n");
    int iterador = 0;

    while(iterador < 5){
        printf("#\n");
        ++iterador;
    }

    return 0;
}
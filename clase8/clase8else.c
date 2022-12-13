#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    printf("Condicion if, else, else if \n");
    float valA, valB, valC;
    valA=50;
    valB=100;
    valC=150;
    printf("Condicion: \n");
    if(valA == valB){
        printf("No se va cumplir esta condicion\n");
    } else if(valB == valC){
        printf("Tampoco se va cumplir esta\n");
    } else {
        printf("Ninguna condicion se cumplio \n");
        printf("Despues de esta linea el programa va terminar\n");
    }
    return 0;
}
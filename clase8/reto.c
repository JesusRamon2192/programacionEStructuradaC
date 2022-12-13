#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
    printf("Adivina un numero entre el 1 y el 10 que estoy pensando \n");
    float x;
    printf("Introduzca el numero aqui:");
    scanf(" %f", &x);

    if(x==5){
        printf("Adivinaste\n");
    } else {
        printf("Ese no es perdiste\n");
    }
    
    return 0;
}
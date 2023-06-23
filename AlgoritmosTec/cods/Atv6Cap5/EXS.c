#include <stdio.h>
#include <stdlib.h>

void main(){
    int Divisor, Dividendo, Quociente = 0;
    printf("\nInsira o DIVIDENDO: ");
    scanf("%d", &Dividendo);
    printf("\nInsira o DIVISOR: ");
    scanf("%d", &Divisor);
    while (Dividendo >= Divisor){
        Dividendo -= Divisor;
        Quociente++;
    }
    printf("\nO Quociente da operação é %d.", Quociente);
}
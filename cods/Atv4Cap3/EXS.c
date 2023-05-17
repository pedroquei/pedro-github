#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float A, B ;
    printf("Insira o valor de A: ");
    scanf("%f", &A);
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    printf("    SOMA: %.2f \n SUBTRAÇÃO: %.2f \n DIVISÃO: %.2f \n MULTIPLICAÇÃO:%.2f \n " , A+B, A-B, A/B, A*B );

}
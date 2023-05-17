#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float A, B, C, R;
    printf("Insira o valor de A: ");
    scanf("%f", &A);
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    printf("Insira o valor de C: ");
    scanf("%f", &C);
    R = (A + B + C) * (A + B + C);
    printf("O resultado da operação é : %.2f", R);

}  
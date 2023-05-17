#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float A, B, R;
    printf("Insira o valor de A: ");
    scanf("%f", &A);
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    R = pow(A,B);
    printf("O resultado da operação é : %.2f ", R);

}
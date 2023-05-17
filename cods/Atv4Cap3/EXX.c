#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float R, B, I;
    printf("Insira o valor da base: ");
    scanf("%f", &B);
    printf("Insira o valor do índice: ");
    scanf("%f", &I);
    R = pow(B,(1/I));
    printf("O resultado da operação é : %.2f ", R);

}
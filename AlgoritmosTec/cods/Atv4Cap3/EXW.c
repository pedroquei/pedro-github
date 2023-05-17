#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float P, M;
    printf("Insira a medida em pés: ");
    scanf("%f", &P);
    M = (P * 0.3048);
    printf("O valor em metros é : %.2f ", M);

}
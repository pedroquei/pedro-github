#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float R, V;
    printf("Insira o valor do RAIO: ");
    scanf("%f", &R);
    V = (4/3) * 3.14159 * (R * R * R);
    printf("O resultado das operações é : %.2f ", V);

}
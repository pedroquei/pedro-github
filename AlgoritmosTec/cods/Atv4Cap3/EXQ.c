#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float A, R;
    printf("Insira o valor do RAIO da circnferência: ");
    scanf("%f", &R);
    A = (3.14159265 * R) * (3.14159265 * R);
    printf("A área da circunferênia é de : %.2f", A);

}  
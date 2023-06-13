#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main(){
    float a, b, c, D;
    printf("Insira o valor de A:");
    scanf("%f",&a);
    printf("Insira o valor de b:");
    scanf("%f",&b);
    printf("Insira o valor de c:");
    scanf("%f",&c);
    D = pow(b,2) - 4 *a*c;
    printf("%f", D);
}
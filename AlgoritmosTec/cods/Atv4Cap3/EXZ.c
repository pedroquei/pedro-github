#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    int N1, N2;
    float R;
    printf("Insira o primeiro número: ");
    scanf("%d", &N1);
    printf("Insira o segundo número: ");
    scanf("%d", &N2);

    R = ((N1/N2) * (N1/N2));
    printf("O resultado da operação é: %.0f", R);

}
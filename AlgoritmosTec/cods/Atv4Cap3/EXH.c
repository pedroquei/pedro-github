#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float V, C, L, A;
    printf("Insira o valor da ALTURA: ");
    scanf("%f", &A);
    printf("Insira o valor do COMPRIMENTO: ");
    scanf("%f", &C);
    printf("Insira o valor da LARGURA: ");
    scanf("%f", &L);
    V = C * L *A;
    printf("O volume é: %.2f" , V);

}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float C, D, R;
    printf("Insira o valor da cotação do dólar: ");
    scanf("%f", &C);
    printf("Insira a quantidade de dólares a ser convertida: ");
    scanf("%f", &D);
    R = D * C;
    printf("O valor convertido é : %.2f", R);

}
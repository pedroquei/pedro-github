#include <stdlib.h>
#include <stdio.h>

void main(){
    
    int N, M;

    printf("Insira O PRIMEIRO VALOR:\n");
    scanf("%d", &N);

    M = N * 2;

    if (M >= 30){
        printf("O valor da Multiplicação é: %d", M);
    } else {
        printf("O valor é menor que 30");
    }

}
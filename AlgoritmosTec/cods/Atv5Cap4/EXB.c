#include <stdlib.h>
#include <stdio.h>

void main(){
    int N, R;
    printf("Insira um número inteiro positivo ou negativo:");
    scanf("%d",&N);
    
    if (N >= 0){
        R = N;
        printf("\n O valor digitado é: %d", R);
    } else {
        R = N*(-1);
        printf("\n O valor digitado transformado em positivo é: %d", R);
    }
}
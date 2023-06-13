#include <stdlib.h>
#include <stdio.h>

void main(){
    int a;
    printf("Insira um número inteiro positivo ou negativo:");
    scanf("%d",&a);
    
    if (a >= 0){
        printf("\n O valor digitado é: %d", a);
    } else {
        printf("\n O valor digitado transformado em positivo é: %d", a*(-1));
    }
}
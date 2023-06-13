#include <stdlib.h>
#include <stdio.h>

void main(){
    int a, b, r;
    printf("Insira o primeiro número:");
    scanf("%d",&a);
    printf("Insira o segundo número:");
    scanf("%d",&b);
    if (a >= b){
        r = a - b;
    } else {
        r = b - a;
    }
    printf("\n O resultado da diferença entre A e B é: %d", r);
}
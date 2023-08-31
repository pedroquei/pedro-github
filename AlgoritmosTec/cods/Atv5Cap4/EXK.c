#include <stdlib.h>
#include <stdio.h>

void main(){
    
    int N;

    printf("Insira um valor:");
    scanf("%d", &N);

    if (N >= 1 && N <= 9){
        printf("O valor está na faixa permitida");
    } else {
        printf("O valor não está na faixa permitida");
    }
}
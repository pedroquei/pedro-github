#include <stdlib.h>
#include <stdio.h>

void main(){
    
    int N;

    printf("Insira um valor:");
    scanf("%d", &N);

    if (N <= 3){
        printf("O valor é: %d", N);
    } else {
        printf("O valor é maior que 3");
    }

}
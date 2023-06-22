#include <stdio.h>
#include <stdlib.h>

void main(){
    float M, N, S;
    int i = 1;
    
    while(i <= 10){
        printf("Insira o %d° número: ", i);
        scanf("%f", &N);
        S += N;
        i++;
    }
    
    M = S / 10 ;
    printf("\n A soma dos valores é %.2f e a média é %.2f ", S, M);
}
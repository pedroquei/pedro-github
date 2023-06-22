#include <stdio.h>
#include <stdlib.h>

void main(){
    int F = 1, N, S;
    for(int i = 1; i <= 15 ; i++){
        printf("Insira o %d° número: ", i);
        scanf("%d", &N);
        for(int x = 1; x <= N; x++){
            F *= x;
        }
        S += F;
        F = 1;
    }
    printf("\n A soma dos fatoriais é: %d", S);
}
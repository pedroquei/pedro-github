#include <stdio.h>
#include <stdlib.h>

void main(){
    long long int S = 1;
    int F = 1, N;
    for(int i = 1; i <= 15 ; i++){
        printf("Insira um número");
        scanf("%d", &N);
        for(int x = 1; x <= N; x++){
            F *= x;
            printf("%d", F);
        }
    }
    printf("O somatório é igual a %lld \n", S);
}
#include <stdio.h>
#include <stdlib.h>

void main(){
    int N, S, D, i;
    float M;
    
    while(i < 1){
        printf("Insira um número: ");
        scanf("%d", &N);
        if (N >= 0){
        S += N;
        D++;    
        } else {
            M = S/D;
            printf("\nO somatorio é %d e a média é %.2f\n", S,M);
            printf("\nPrograma encerrado.");
            i++;
        }
    }
}
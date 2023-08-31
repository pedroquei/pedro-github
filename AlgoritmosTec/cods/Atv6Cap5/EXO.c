#include <stdio.h>
#include <stdlib.h>

void main(){
    int F = 1, S;
    for(int i = 1; i <= 10 ; i++){
        if (i % 2 == 1){
            for(int x = 1; x <= i; x++){
                F *= x;
            }
            S += F;
        }
        F = 1;
    }
    printf("\n A soma dos fatoriais é: %d", S);
}
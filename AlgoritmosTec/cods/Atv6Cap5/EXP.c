#include <stdio.h>
#include <stdlib.h>

void main(){
    int M, X, S;
    for(int i = 50; i <= 70 ; i++){
        if (i % 2 == 0){
            X +=1;
            S += i;
        }
        M = S / X;
    }
    printf("\n A soma é %d, e a média é ", S, M);
}
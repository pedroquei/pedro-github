#include <stdio.h>
#include <stdlib.h>

void main(){

    int A[10], B[10], i;
    for(i = 0; i < 10; i++){
        printf("Digite o %d valor de A: ", i+1);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 10; i++){
        B[i] = -A[i];
        printf("\n%d", B[i]);
    }
}
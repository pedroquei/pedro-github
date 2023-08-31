#include <stdio.h>
#include <stdlib.h>

void main(){

    int A[20], B[20], i, S, j = 1;
    for(i = 0; i < 20; i++){
        printf("Digite o %d valor de A: ", i+1);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 20; i++){
       while (j <= A[i]){
        S += j;
        B[i] = S;
        j ++;
       }
       printf("\n%d", B[i]);
    }
}
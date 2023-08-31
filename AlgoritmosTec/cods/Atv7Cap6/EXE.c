#include <stdio.h>
#include <stdlib.h>

void main(){
    int A[15], B[15], i, F = 1;
    for (i = 1; i <= 15; i++)
    {
        printf("Digite o %d° elemento da matriz A: ",i);
        scanf("%d", &A[i]);
    }
    printf("os elementos da Matriz B são:\n");
    for (i = 1; i <= 15; i++)
    {
        for (int x = 1; x <= A[i]; x++){
            F *= x;
        }
        B[i] = F;
        printf("%d\n", B[i]);
        F = 1;
    }
}
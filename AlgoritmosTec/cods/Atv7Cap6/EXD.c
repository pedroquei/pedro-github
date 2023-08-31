#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int A[20], B[20], i;
    for (i = 1; i <= 15; i++)
    {
        printf("Digite o %d° elemento da matriz A: ",i);
        scanf("%d", &A[i]);
    }
    for (i = 1; i <= 15; i++)
    {
        printf("Os elementos da matriz A são:");
        printf("%d\n", A[i]);
    }
    printf("\n");
    for (i = 1; i <= 15; i++)
    {
        B[i] = pow(A[i], 3);
        printf("os elementos da Matriz B são:");
        printf("%d\n", B[i]);
    }
}
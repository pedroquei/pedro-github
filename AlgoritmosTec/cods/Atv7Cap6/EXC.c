#include <stdio.h>
#include <stdlib.h>

void main(){
    float A[20], B[20], C[20];
    int i;
    for (i = 1; i <= 20; i++)
    {
        printf("Digite o %d° elemento da matriz A: ",i);
        scanf("%f", &A[i]);
    }
    printf("\n");
    for (i = 1; i <= 20; i++)
    {
        printf("Digite o %d° elemento da matriz B: ",i);
        scanf("%f", &B[i]);
    }
    for (i = 1; i <= 20; i++)
    {
        printf("Os elementos da matriz C são: ");
        C[i] = A[i] - B[i];
        printf("%.2f\n", C[i]);
    }
}
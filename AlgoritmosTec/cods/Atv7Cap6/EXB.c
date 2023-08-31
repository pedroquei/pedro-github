#include <stdio.h>

void main(){
    int A[8], B[8], i;

    printf("Insira 8 Números: \n");
    for (i = 1; i < 8 ; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nOs valores da Matriz B são: \n");
    for (i = 1; i < 8; i++)
    {
        B[i] = A[i] * 3;
        printf("%d\n", B[i]);
    }

}
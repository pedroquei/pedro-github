#include <stdio.h>
#include <stdlib.h>

void main(){
    int A[5], B[5], C[5], D[15], i;
    
    for (i = 0; i < 5; i++){
        printf("Digite o %d° elemento da matriz A: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++){
        printf("Digite o %d° elemento da matriz B: ", i+1);
        scanf("%d", &B[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++){
        printf("Digite o %d° elemento da matriz C: ", i+1);
        scanf("%d", &C[i]);
    }

    printf("\nOs elementos da Matriz D são:\n");
    
    for (i = 0; i < 15; i++){
        if(i <= 5){
            D[i] = A[i];
        }
        if (i > 5 && i <= 10){
            D[i] = B[i - 5];
            
        } 
        if (i > 10){
            D[i] =  C[i - 10];
        }
        printf("%d\n", D[i]);
    }
}
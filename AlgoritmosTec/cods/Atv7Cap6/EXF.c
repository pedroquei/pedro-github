#include <stdio.h>
#include <stdlib.h>

void main(){
    int A[15], B[15], C[30], i;
    for (i = 1; i <= 15; i++){
        printf("Digite o %d° elemento da matriz A: ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");
    for (i = 1; i <= 15; i++){
        printf("Digite o %d° elemento da matriz B: ", i);
        scanf("%d", &B[i]);
    }

    printf("\nos elementos da Matriz C são:\n");

    for (i = 1; i <= 30; i++){
        if(i <= 15){
            C[i] = A[1];
            printf("%d\n", C[i]);
        }
        if (i > 15){
            C[i] = B[i - 15];
            printf("%d\n", C[i]);
        }  
    }
}
#include <stdio.h>
#include <stdlib.h>

void main(){
    float A[20],B[20];
    int i,j;
    
    for ( i = 0; i < 20; i++){
       printf("Digite o %d° elemento de A: ", i+1);
       scanf("%f", &A[i]);
    }
    printf("\nOs elementos da matriz B são:\n");
    for( i = 20; i > 0; i--){
        B[i] = A[j];
        j++;
        printf("%.2f\n", B[i]);
    }    
}
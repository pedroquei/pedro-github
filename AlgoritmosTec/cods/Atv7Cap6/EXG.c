#include <stdio.h>
#include <stdlib.h>

void main(){
    char A[20][15], B[30] [15], C[50] [30];
    int i;
    
    for(i = 1; i <= 20; i++){
        printf("Insira o nome da %dª pessoa:", i);
        gets(A[i]);
    }
    for( i = 1; i <= 30; i++){
        printf("Insira o nome da %dª pessoa:", i + 20);
        gets(B[i]);
    }
    
}
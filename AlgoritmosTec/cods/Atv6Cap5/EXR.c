#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    int N, MEN, MAI;
    bool S = true;
    do
    {
        printf("Insira um valor: ");
        scanf("%d", &N);
        if (S == true){
            MEN = N;
            MAI = N;
        }
        S = false;
        if (N >= 0 && N <= MEN)
        {
            MEN = N;
        } else if (N >= MAI) {
            MAI = N;
        }
        
    } while (N >= 0);
    
    printf("\nO maior número digitado foi %d e o menor foi %d.", MAI, MEN);
}
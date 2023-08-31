#include <stdlib.h>
#include <stdio.h>

void main(){
    
    int N;

    printf("Insira um valor:");
    scanf("%d", &N);

    if ((N % 2) == 0){
        printf("O número é par.");
    } else {
        printf("O número é impar");
    }
}
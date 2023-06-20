#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int n;
    printf("Insira um número: ");
    scanf("%d", &n);
    printf("A tabuáda de %d é: \n", n);

    for(int i = 0; i <= 10; i++){
        int R = n * i;
        printf("%d x %d = %d \n", n, i,  R);
    }

}
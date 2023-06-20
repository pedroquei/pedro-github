#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    for(int i = 15; i <= 200; i++){
        int R = pow(i,2);
        printf("O QUADRADO DE %d É %d \n", i, R);
    }
}
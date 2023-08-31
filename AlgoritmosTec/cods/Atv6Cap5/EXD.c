#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int R, i;
    for(i = 1; i <= 500; i++){
        if (i % 2 == 0)
        {
            R = R + i;
        }   
    }

    printf("A soma dos números pares entre 1 e 500 é: %d", R);

}
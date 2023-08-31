#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int R;
    for(int i = 0; i <= 100; i++){
        R = R + i;
    }

    printf("A soma dos cem primeiros números naturais é: %d", R);

}
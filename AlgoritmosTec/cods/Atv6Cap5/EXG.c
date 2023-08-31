#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int i;
    int P = 1;
    for(i = 0; i <= 15 ; i++){
        printf(" 3 elevado a %d é %d \n", i, P);
        P *= 3;
    }
}
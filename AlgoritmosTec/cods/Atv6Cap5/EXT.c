#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    for(int i= 15; i <= 200 ; i+= 3){
        printf("\nO qudrado de %d é %.0f", i, (pow(i,3)));
    }
}
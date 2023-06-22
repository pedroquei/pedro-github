#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int C;
    float F;
    for(C = 0; C <= 100 ; C+= 10){
        F = ((C * 9)/5) + 32;
        printf(" %d°C é igual a %.2f°F \n", C, F);
    }
}
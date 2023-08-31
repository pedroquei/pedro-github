#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int i;
    printf("Os números ímpares entre 1 e 20 é: \n");
    for(i = 1; i <= 20; i++){
        if (i % 2 != 0)
        {
           printf("%d \n",i);
        }   
    }
}
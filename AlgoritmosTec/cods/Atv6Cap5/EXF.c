#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int i;
    printf("Os números divisíveis por 4 entre 1 e 200 são: \n");
    for(i = 1; i < 200; i++){
        if (i % 4 == 0)
        {
           printf("%d \n",i);
        }   
    }
}
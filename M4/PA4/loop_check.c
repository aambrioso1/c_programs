#include <stdlib.h>
#include <stdio.h>


int main(){

    int i;

    for(i=0; i<5; i++){
        printf("Inside loop: i = %d\n", i);
    }
    printf("Outside loop: i = %d\n", i);
    
    return EXIT_SUCCESS;
}
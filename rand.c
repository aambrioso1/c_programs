#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

int main(){

	printf("RAND_MAX is %d\n", RAND_MAX);

	srand(time(NULL));
	
	for(int i=0 ; i < 20 ; i++)
		printf("%d\n", 1 + rand() % 20);

	printf("\n");
	return EXIT_SUCCESS;

} // end main method
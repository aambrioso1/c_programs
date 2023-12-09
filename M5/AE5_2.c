#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
#define MYARRAY {1,2,3,4}
int main(){

	int myarray[] = MYARRAY;

	for(int i = 0; i < SIZE; i++){
		printf("\tmyarray[%d] = %p\n", i, &myarray[i]);
	}
	printf("\n&myarray[0] = \t%p\n", &myarray[0]);
	printf("&myarray[1] = \t%p\n", &myarray[1]);
	printf("&myarray[2] = \t%p\n", &myarray[2]);
	printf("myarray = \t%p\n", myarray);
	size_t diff1 = &myarray[1] - &myarray[0];
	size_t diff2 = &myarray[2] - &myarray[1];
	size_t diff3 = &myarray[1] - myarray;
	size_t diff4 = &myarray[2] - &myarray[0];

	printf("\nThe difference between &myarray[1] - &myarray[0] is: \t%zu\n", diff1);
	printf("The difference between &myarray[2] - &myarray[1] is: \t%zu\n", diff2);
	printf("The difference between &myarray[1] - myarray is: \t%zu\n", diff3);
	printf("The difference between &myarray[2] - myarray[0] is: \t%zu\n", diff4);



	printf("\nmain function is done...\n");
	return EXIT_SUCCESS;
}

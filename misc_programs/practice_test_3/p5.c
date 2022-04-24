/**********************************************************************************************
Practice Test 3 - Problem 5
Declare an array using dynamic memory allocation.

Answer:  

int *a;
a = malloc(n* sizeof(int)); 


The #include statement for stdlib.h declares three memory allocation functions:  
(1) malloc - allocates a block of memory but does not initialize it.
(2) calloc - allocates a block of memory and clears it.
(3) realloc - resizes a previously allocated block of memory.

See the notes for Week 12 Lecture 2 for more on dynamic memory allocation
Pamplona's notes are in Canvas
My notes based on his lectures are here:  
https://github.com/aambrioso1/c_programs/blob/master/Pamplona_Lectures/Week_12/class_12.2.md
***********************************************************************************************/

#include <stdio.h>
#include <stdlib.h> // declares malloc, calloc, and realloc


int main() {

	int n = 5;

	/***************************/
	/***************************/
	int *a;
	a = malloc(n* sizeof(int)); 
	/***************************/
	/****************************/

	printf("Enter %d integers: \n", n);
	
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]); // scan in n integers and store them in the array a

	for(i = 0; i < n-1; i++)
		printf("a[%d] = %d, ", i, a[i]); // print out the array values
	printf("a[%d] = %d\n", i, a[i]);

 	return 0;
}


/******************** Output *****************************

> ./a.exe
Enter 5 integers:
12
12
23
43
43
a[0] = 12, a[1] = 12, a[2] = 23, a[3] = 43, a[4] = 43


*****************************************************/
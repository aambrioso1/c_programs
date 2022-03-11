#include <stdio.h>


int main() {


	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];
	int *r = a; // Declared here rather than in the loop so I could use it outside the loop.
	
	printf("********* Problem 1 **********\n");
	printf("int *p = &a[1], *q = &a[5];\n");
	printf("a[] = {");
	for (; r < a+7; r++) {
		printf("%d, ", *r);
	}
	printf("%d}\n\n", *r);
	printf("*(q - 3) = %d\n", *(q-3)); // The value of the element pointed to when q is shifted back 3 positions.
	printf("p - q = %d\n", p - q); // The diffence in postions between p and q.
	printf("*p - *q = %d\n", *p - *q); // The diffence of the elments pointed to by p and q.
	// The following has undefined behavior.
	// printf("p - 3 = %d\n", p - 3);

	printf("********** Problem 2 ***************\n");

	#define N 5 
	int b[N] = {6,2,3,9,4}; 
	int sum=0; 
	for(int *p=b; p < b+N; p++)
		// If p is pointing to add odd position add its value to the sum.
 		if((p-b)%2 == 1) // p - b is the number of position travel so far.
 			sum += *p; 
 	printf("The value of sum is %d\n", sum);
}
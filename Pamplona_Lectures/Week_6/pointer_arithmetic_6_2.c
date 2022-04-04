#include <stdio.h>

// From Week6_Lecture2 (Video 12:09-58:56)
// Demonstrates pointer arithmetic

// Three operations are supported:
// (1)  Adding an integer to a pointer
// (2)  Subtractiing an integer from a pointer
// (3)  Subtracting one pointer from another

int main(){

	// We initialize arrays with different data types to explore how
	// the are partition in memory
	printf("******************************************************\n");
	printf("Address of sequential integer elements in an array.\n");	
	int a[6] = {10, 20, 30, 40, 50, 60};
	double d[6] = {100, 200, 300, 400, 500, 600};
	char c[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	
	for(int i=0; i < 4; i++) {
		printf("&a[%d] = %p\n", i, &a[i]);
	}

	printf("******************************************************\n");
	printf("Exploring partioning of memory for different data types.\n");
	int *p1, *q1;
	p1 = &a[2];
	q1 = p1 + 3; // Assign q1 to point &a[5] to 3 position from p2

	// Addresses will be 12 units apart since ints take 4 bytes.
	printf("*p1 = %d, *q1 = %d\n", *p1, *q1);
	printf("p1 = %p, q1 = %p\n", p1, q1);
	printf("The distance between 3 integers in an array: \n"); 
	printf("p1 - q1 = %ld, q1 - p1 = %ld\n", p1 - q1, q1 - p1);
	printf("The distance in bytes between 3 integers is q1 - p1 = %d\n",
			(int) q1 - (int) p1);

	double *p2, *q2;
	p2 = &d[2];
	q2 = p2 + 3; // Assign q2 to point &d[5] to 3 position from p2

	printf("p2 = %p, q2 = %p\n", p2, q2);
	// Address will be 24 units apart since doubles take 8 bytes.
	printf("The distance between 3 doubles in an array: \n"); 
	printf("p2 - q2 = %ld, q2 - p2 = %ld\n", p2 - q2, q2 - p2);
	printf("The distance in bytes between 3 doubles is q2 - p2 = %d\n",
			(int) q2 - (int) p2);
	
	char *p3, *q3;
	p3 = &c[2];
	q3 = p3 + 3; 

	printf("p3 = %p , q3 = %p\n", p3, q3);
	// Addresses will be 3 units apart since chars takes 1 byte).
	printf("The distance between 3 chars in an array: \n"); 
	printf("p3 - q3 = %ld, q3 - p3 = %ld\n", p3 - q3, q3 - p3);
	printf("The distance in bytes between 3 chars is q3 - p3 = %d\n",
			(int) q3 - (int) p3);

	printf("******************************************************\n");
	printf("Subtracting integers from pointers.\n");
	// Subtracting an integer from a pointer
	p1 = &a[5];
	q1 = p1 - 3;
	p1 -= 2;

	printf("*p = %d (expecting %d), *q = %d (expecting %d)\n", *p1, a[3], *q1, a[2]);
	printf("******************************************************\n");
	printf("Using pointer arithmetic to find the element between two elements.\n");
	// Use pointer arithmetic to find the element between two elements of an array
	double a2[6] = {12, 45, 32, 47, 65, 500};
	double *p, *q;
	p = &a2[2];
	q = p + 3;

	// To find the address of the middle element, we can compute the distance between the 
	// two elements, divide it by 2, and add that amount to the first element.
	// The "value of" or indirection operator, *, returns the element
	// pointed to by r.  This is the element between b2[2] and b2[5].

	double *r = p+(q-p)/2;
	for (int i = 0; i<6; i++){
		printf("a2[%d] = %lf, ", i, a2[i]);
	} 
	printf("\na2[2] = %lf, a2[5] = %lf, middle = %lf\n", *p, *q, *r);
	printf("&a2[2] = p = %p, p + 3 = q = %p\n", p, q);
	printf("p - q = %ld, q - p = %ld\n", p-q, q-p);
	printf("*(p - 2) = %lf\n", *(p - 2));
	printf("Is p > q? %d\n", p > q); // Comparing positions.
	printf("Is q > p? %d\n", q > p); // Comparing positions.
	printf("Is *p > a2[1]? %d\n", *p > a2[1]); //Comparing values.

	// We use pointer arithmetic to iterate through an array.
	double sum = 0.0;
	for (p = &a2[0]; p < &a2[6]; p++) {
		sum += *p; //Add value at p to sum.
	}
	printf("The sum of the elements in a2 is %lf\n", sum);
	printf("***********************************************************\n");

}


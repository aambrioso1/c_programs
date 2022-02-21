#include <stdio.h>

// From Week6_Lecture2 (Video 12:09-34)
// Demonstrates pointer arithmetic

// Three operations are supported:
// (1)  Adding an integer to a point
// (2)  Subtractiing an integer from a pointer
// (3)  Subtracting one pointer from another

int main(){
	
	int a[6] = {1, 2, 3, 4, 5, 6};
	double b[6] = {1, 2, 3, 4, 5, 6};
	char c[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	
	for(int i=0; i < 4; i++) {
		printf("%p\n", &a[i]);
	}

	int *p1, *q1;
	p1 = &a[2];
	q1 = p1 + 3; // // Address will be 12 units apart (int takes 4 bytes).

	printf("%d %d\n", *p1, *q1);
	printf("%p %p\n", p1, q1);
	printf("p1 - q1 = %ld, q1 - p1 = %ld\n", p1 - q1, q1 - p1);

	double *p2, *q2;
	p2 = &b[2];
	q2 = p2 + 3;

	printf("%p %p\n", p2, q2); // Address will be 24 units apart (double takes 8 bytes).
	printf("p2 - q2 = %ld, q2 - p2 = %ld\n", p2 - q2, q2 - p2);
	
	char *p3, *q3;
	p3 = &c[2];
	q3 = p3 + 3; // Addresses will be 3 units apart (char takes 1 byte).

	printf("%p %p\n", p3, q3);
	printf("p3 - q3 = %ld, q3 - p3 = %ld\n", p3 - q3, q3 - p3);

	// Subtracting an integer from a pointer
	p1 = &a[5];
	q1 = p1 - 3;
	p1 -= 2;

	printf("*p = %d (expecting %d), *q = %d (expecting %d)\n", *p1, a[3], *q1, a[2]);

	// Use pointer arithmetic to find the middle of an array
	double b2[6] = {12, 45, 32, 47, 65, 500};
	double *p, *q;
	p = &b2[2];
	q = p + 3;

	double *r = p+(q-p)/2;

	printf("%lf %lf %lf\n", *p, *q, *r);
	printf("%p %p\n", p, q);
	printf("%ld %ld\n", p-q, q-p);

}


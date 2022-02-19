#include <stdio.h>

// Modify max program so that the max function
// returns the pointer pointing to max of two elements

int *max(int *a, int *b) {
	if (*a > *b)
		return a;
	else
		return b;
}

int main(){
	int *p;
	int i = 4;
	int j = 9;
	p = max(&i, &j);

	printf("Value at p: %d\n", *p );
	printf("Value returned by max(): %d\n", *max(&i, &j) );
	printf("Address of i: %p\nAddress of j: %p\n", &i, &j );
	printf("This should match address of j: %p\n", p );	
}

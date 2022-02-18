#include <stdio.h>

// Modify the find_largest program so that the find largest function
// returns the pointer pointing to the largest element

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

	printf("%d\n", *p );
	printf("%d\n", *max(&i, &j) );
	printf("Address of i: %p\nAddress of j: %p\n", &i, &j );
	printf("This should match address of j: %p\n", p );	
}

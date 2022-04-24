/************************Practice Test 3 - Problem  ********************
Topic: Using function pointers

The answer:

12

*************************************************************************/
#include <stdio.h>

int f1(int (*f) (int));
int f2(int i);

int main(void) {
	printf("%d\n", f1(f2));
	return 0;
}

int f1(int (*f) (int)) {
	int n, num = 0;
	for(n = 0; n < 3; n ++)
	num = f(n);
	return num;
}

int f2(int i) {
	return i * i + i;
}


/******************** OUTPUT *************************



*****************************************************/
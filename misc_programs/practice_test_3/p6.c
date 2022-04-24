/************************Practice Test 3 - Problem  ********************
Topic: Using function pointers

The answer:   6

The function f1 calls a function pointer: int (*f). This allow f1 to call
the any function that returns an integer  by using the name of the function called as 
an argument:  f1(f2).   In the case that function is f2.   
Note how f1 is declared:  int f1(int (*f) (int));
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

> ./a.exe
6

The for loop in executes f(0), f(1), f(2) and sets num to 0, 2, and 6 respectively.
When execution exits the for loop num is set at the last value 6.
The value of f(2), 6, is printed.

*****************************************************/
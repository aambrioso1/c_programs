#include <stdio.h>
#include <stdlib.h>

// Allows use to try to allocate arbitrarily large memory blocks with a command line argument
// Showw how NULL pointer works.   I could not get it to work on my Surface Pro

struct student {
	char name[100];
	int age;
	char grade;
};


int main(int argc, char *argv[]) {
/*
	double *p;

	long int n = atol(argv[1]);

	p = malloc(n * sizeof(double));
	if (p==NULL) 
		printf("Out of memory!\n");
	else 
		printf("OK\n");
*/
	printf("sizeof(char) = %ld\n", sizeof(char));
	printf("sizeof(int) = %ld\n", sizeof(int));
	printf("sizeof(long int) = %ld\n", sizeof(long int));
	printf("sizeof(long long int) = %ld\n", sizeof(long long int));
	printf("sizeof(float) = %ld\n", sizeof(float));
	printf("sizeof(struct student) = %ld\n", sizeof(struct student));
}

/************** Output ***************

Comment out the code at the top (malloc part) or the bottom (sizeof part)

For the malloc code.
> gcc sizeof.c
> ./a.exe 1000000
OK
> ./a.exe 10000000
OK
> ./a.exe 100000000
OK
> ./a.exe 1000000000
Out of memory!

For the code that prints sizes of types
> ./a.exe
sizeof(char) = 1
sizeof(int) = 4
sizeof(long int) = 4
sizeof(long long int) = 8
sizeof(float) = 4
sizeof(struct student) = 108

**************************************/
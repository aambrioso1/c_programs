#include <stdio.h>
#include <stdlib.h>

// Allows use to try to allocate arbitrarily large memory blocks with a command line argument
// Shows how NULL pointer works.   Note I had to use a long long int to make it bigger.

int main(int argc, char *argv[]) {
	long long int *p;

	printf("%lld\n", atoll(argv[1]));

	p = malloc(atoll(argv[1]));
	if (p==NULL) 
		printf("Out of memory!\n");
	else 
		printf("OK\n");
}

/********************************** Output ************************************

> gcc malloc.c
> ./a.exe 1000000000
1000000000
OK
> ./a.exe 10000000000
10000000000
OK
> ./a.exe 100000000000
100000000000
OK
> ./a.exe 1000000000000
1000000000000
Out of memory!

*********************************************************************************/
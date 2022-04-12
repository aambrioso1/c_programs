#include <stdio.h>
#include <stdlib.h>

// Allows use to try to allocate arbitrarily large memory blocks with a command line argument
// Shows how NULL pointer works.   Note I had to use a long long int to make it bigger.

int main() {
	int *p;

	int n = 10;

	p = malloc(n * sizeof(double));
	if (p==NULL) {
		printf("Out of memory!\n");
		return 1;
	}
	int q[n];

	for (int i=0; i<n; i++) {
		p[i] = i*i;
		q[i] = i*i;
	}
	for (int i=0; i<n; i++)
		printf("p[%d] = %d, q[%d] = %d\n", i, p[i], i, q[i]);

	return 0;

}

/********************************** Output ************************************

> ./a.exe
p[0] = 0, q[0] = 0
p[1] = 1, q[1] = 1
p[2] = 4, q[2] = 4
p[3] = 9, q[3] = 9
p[4] = 16, q[4] = 16
p[5] = 25, q[5] = 25
p[6] = 36, q[6] = 36
p[7] = 49, q[7] = 49
p[8] = 64, q[8] = 64
p[9] = 81, q[9] = 81

*********************************************************************************/
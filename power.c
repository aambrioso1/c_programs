#include <stdio.h>

double power(double x, int n);

int main(void) {
	printf("%f", power(3,4));
}

double power(double x, int n) {
	if (n==0) {
		return 1;
	}
	return x*power(x, n-1);
}
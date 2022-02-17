#include <stdio.h>

int main() {
	
	int i=10;

	for (int j=0; j<1;j++) {
		int i = 1;
		if (--i<0);
		else {
		printf("In else so the if is not useless:  i = %d\n", i);
		}
		printf("In scope of for:  i = %d\n", i);
	}
	printf("Outside scope of for: Or does i = %d\n", i);
}



	


/*
int count;

int fib(int n);

int main() {
	printf("Enter a number: ");
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
	printf("%d ", fib(i));

	}
	printf("\n");
}

int fib(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		printf("fib(%d) + f(%d)");
		return fib(n-1) + fib(n-2);
	}
}
*/
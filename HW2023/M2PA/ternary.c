#include <stdio.h>
#include <stdlib.h>


int main(){

	int a, b, c, d;

	puts("Enter a value for A: ");
	scanf("%d", &a);
	puts("Enter a value for B: ");
	scanf("%d", &b);
	puts("Enter a value for C: ");;
	scanf("%d", &c);
	puts("Enter a value for D: ");
	scanf("%d", &d);

	puts("Here are the comparisons that I can make: \n");


	printf("A(%d) %c B(%d) %c C(%d) %c D(%d)\n",

		a, (a > b)? '>':'<',
		b, (b > c)? '>':'<',
		c, (c > d)? '>':'<',
		d
		);

	printf("\n");
	return EXIT_SUCCESS;
} // End of main menu
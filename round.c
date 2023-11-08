#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main(){

	int size = 7;
	double data[] = {4.0, 4.1, 4.4, 4.5, 4.6, 4.9, 5.5 };

	printf("\n    ");
	for(int i = 0; i < size ; i++)
		printf("\t%.2lf", data[i]);

	printf("\nceil ");
	for(int i = 0; i < size ; i++)
		printf("\t%.2lf", ceil(data[i]));

	printf("\nfloor ");
	for(int i = 0; i < size ; i++)
		printf("\t%.2lf", floor(data[i]));

	printf("\nround ");
	for(int i = 0; i < size ; i++)
		printf("\t%.2lf", round(data[i]));

	printf("\nrint ");
	for(int i = 0; i < size ; i++)
		printf("\t%.2lf", rint(data[i]));

	printf("\nnbint ");
	for(int i = 0; i < size ; i++)
		printf("\t%.2lf", nearbyint(data[i]));

	printf("\ntrunc ");
	for(int i = 0; i < size ; i++)
		printf("\t%.2lf", trunc(data[i]));

	printf("\n");
	return EXIT_SUCCESS;


} // end main method
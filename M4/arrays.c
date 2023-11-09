#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	
	size_t size = 4;
	int data[size];

	printf("How many values do you want to read? ");
	scanf("%zu", &size);

	size_t index = 0;
	do {
		printf("Enter a value: ");
		scanf("%d", &data[index]);
		index++;
	} while(index < size);

	index = 0;
	printf("The values that you entered are: \n");
	do {
		printf("Data is %d\n", data[index]);
		index++;

	} while(index < size);

	printf("main function is done...\n");
	return EXIT_SUCCESS;

}
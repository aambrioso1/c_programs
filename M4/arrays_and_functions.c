#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 5
// The above should always be >= 5

void display(int value);

int main() {
	
	int data[LENGTH] = {3, 4, 5, 2, 1};
	display(data[3] * data[3]);
	display(LENGTH * data[3]);
	display(2+2+2);
	display(42);
	display(data[1]*data[2]*data[3]);

	printf("\nmain function is done...\n");
	return EXIT_SUCCESS;

}

void display(int value) {
	printf("--> %d\n", value);
}
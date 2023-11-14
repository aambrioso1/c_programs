#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 5
#define SIZE 5
// The above should always be >= 5

void display(int values[], int);
void modify(const int values[], int size);

int main() {
	
	printf("How big is your array? ");
	int size;
	scanf("%d", &size);


	int data[size];
	for(size_t i = 0; i < size; i++) {
		printf("data[%zu] --> ", i);
		scanf("%d", &data[i]);
	}

	printf("Now we display the entire array:\n");
	display(data, size);
	printf("Now we display the entire modified array:\n");
	modify(data,size);
	display(data, size);

	printf("\nmain function is done...\n");
	return EXIT_SUCCESS;

}

void display(int values[], int size) {
	for (size_t i=0; i < size; i++) {
	printf("element(%zu) --> %d\n", i, values[i]);
	}
}

void modify(const int values[], int size){
	values[size-1] = 42;
}
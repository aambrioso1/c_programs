#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 6
// The above should always be >= 5

int main() {
	
	char data[LENGTH]; //'\0'
	scanf("%5s", data);
	printf("%s", data);

	printf("\nmain function is done...\n");
	return EXIT_SUCCESS;

}
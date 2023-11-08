#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// variables in the help
void iterativeCountdown();
void recursiveCountdown(int c);

int main(){
	iterativeCountdown();
	recursiveCountdown(10);
	printf("main function is done...\n");

	return EXIT_SUCCESS;
} // end main method

void iterativeCountdown(){
	int counter = 5;
	while (counter>0){
		printf("t minus %d...\n", counter);
		counter--;
	}
	printf("IGNITION - BLASTOFF!!!\n");
}

void recursiveCountdown(int c){
	if (c == 0)
		printf("IGNITION - BLASTOFF!!!\n");
	else {
		printf("t minus %d...\n", c);
		recursiveCountdown(c-1);
	}
}

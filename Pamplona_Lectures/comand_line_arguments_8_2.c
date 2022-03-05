#include <stdio.h>

// This program prints out the number of command line arguments 
// and each of the arguments.

int main(int argc, char *argv[]) {
	
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d]= %s\n", i, argv[i]);

}
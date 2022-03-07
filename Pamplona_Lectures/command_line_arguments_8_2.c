#include <stdio.h>

// This program prints out the number of command line arguments 
// and each of the arguments.

int main(int argc, char *argv[]) {
	
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d]= %s\n", i, argv[i]);

}

/*

OUTPUT:

PS C:\Users\Alex> ./a.exe I like computer science
argc = 5
argv[0]= C:\Users\Alex\a.exe
argv[1]= I
argv[2]= like
argv[3]= computer
argv[4]= science
PS C:\Users\Alex>

*/
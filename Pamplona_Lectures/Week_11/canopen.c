#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// The program checks if a file can be opened
	
	FILE *fp;

	if (argc != 2) {
		printf("usage:  canopen filename\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("%s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	printf("%s can be opened\n", argv[1]);
	fclose(fp);
	return 0;
}

/******** Output ************
 
 Note that I compiled the file to a.exe so the usage is a.exe filename.

> ./a.exe demo
demo can't be opened
> ./a.exe chapter_22.c
chapter_22.c can be opened


*****************************/

/* Notes for Chapter 22

Three standard streams;
(1) stdin - standard input - default:  Keyboard
(2) stdout - standard output - default: screen
(3) stderr - standard erro - default: screen

These can be change by indirection.  For example:

demo >out.dat

will write output data to out.dat

Text and binary files are supported by <stdio.h>



*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

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

> ./a.exe demo
demo can't be opened
> ./a.exe chapter_22.c
chapter_22.c can be opened

*****************************/
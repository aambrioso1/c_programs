// Program puts.c

#include <stdio.h>
#define MAX_LEN 1000
int main() {
	FILE* pFile;
	pFile = fopen("foo.txt", "w");
	if (pFile == NULL) {
		printf ("Error opening file\n");
		return 1;
	}
	fputs("Humpty Dumpty sat on a wall\n", pFile);
	fputs("Humpty Dumpty had a great fall\n", pFile);
	fclose(pFile);
	printf ("File foo.txt written\n");
	return 0;
}
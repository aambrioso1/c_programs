/****** 11.2 Video:  3:30

This programs demonstrates the rewind function.
Try commenting out line 20 to see the effect of rewind.

**********/


#include <stdio.h>
#define MAX_LEN 1000
int main()
{
char str[MAX_LEN+1];
FILE* pFile;
pFile = fopen("test.txt", "r");
if (pFile == NULL){
	printf ("Error opening file\n");
	return 1;
}

while ( fgets (str, MAX_LEN+1, pFile ) != NULL )
	printf ("%s", str);
rewind(pFile);  // Comment this line in and out to see the effect of rewind.

while ( fgets (str, MAX_LEN+1, pFile ) != NULL )
	printf ("%s", str);

fclose(pFile);
return 0;
}
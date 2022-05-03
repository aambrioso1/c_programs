/************************Practice Test 3 - Problem 8 ********************
 Topic:  fscan - scan a line of text in a specific format

Answer: 

fscanf(pFile, "%[^,],%d , %d , %d", name, &month, &day, &year);

The format command %[^,] stops at the first comma.

*************************************************************************/
#include <stdio.h>

int main() {

	int month, day, year;
	char name[101];


	FILE *pFile = fopen("text_p16.txt", "r");
	
	if(pFile == NULL)
		printf("\nFrom print_to_file:  Error opening file.\n");
	for (int i = 0; i<3;i++) {
		fscanf(pFile, "%[^,],%d , %d , %d", name, &month, &day, &year);
		printf("%s was born on %d/%d/%d.", name, month, day, year);
	}
	fclose(pFile);
}

/**************************** Output ***********************************

> ./a.exe
Anthony was born on 2/15/1997.
Erika was born on 7/31/1999.
Joseph was born on 9/28/2001.


************************************************************************/
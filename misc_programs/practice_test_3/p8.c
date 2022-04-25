/************************Practice Test 3 - Problem 8 ********************
 Topic:  fscan - What is its return value?

Answer: 5

fscan returns the number of items scanned.

Try added another int item to test_p8.test

*************************************************************************/
#include <stdio.h>

int main() {

	int id, month, day, year, value
	char first_name[21];
	// int age;

	FILE *pFile = fopen("test_p8.txt", "r");
	
	if(pFile == NULL)
		printf("\nFrom print_to_file:  Error opening file.\n");

	value = fscanf(pFile, "%d%s%d%d%d", &id, first_name, &month, &day, &year);
	// value = fscanf(pFile, "%d%s%d%d%d%d", &id, first_name, &month, &day, &year, &age);
	printf("%d", value);
	fclose(pFile);
}

/**************************** Output ***********************************

> ./a.exe
5


************************************************************************/
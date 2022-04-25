/************************Practice Test 3 - Problem 2 ********************
 Topic:  fscan - scanning text from a file

Answer: The

Note it is important to close the file after fscanf.  If not the program apparently uses the system buffer.
Thank you Jian for this insight!!!

*************************************************************************/


#include <stdio.h>

int main() {

	// char buffer[6];
	// char buffer[2];
	char buffer[3];

	FILE *pFile = fopen("test.txt", "r");
	
	if(pFile == NULL)
		printf("\nFrom print_to_file:  Error opening file.\n");

	fscanf(pFile, "%s", buffer);
	fclose(pFile); // This solve the issue I was having.   Thanks Jian for the insight!!!
	printf("%s", buffer);
}

/**************************** Output ***********************************

With buffer as: char buff[6]
text.txt = "The quick brown fox jumped over the lazy dog's back."
> ./a.exe
The

With buffer as: char buff[3]
> ./a.exe
The

With buffer as: char buff[2]
> ./a.exe

With buffer as: char buff[20]
> ./a.exe
The

************************************************************************/
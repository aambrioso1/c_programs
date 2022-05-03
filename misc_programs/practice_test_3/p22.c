
/********************** Practice Test 3 - Problem 22 *********************
Topic:  Working with files

Answer: See code for count_characters

*************************************************************************/

#include <stdio.h>
#include <string.h>



int count_characters(char *filename);

int main() {

	char *filename;

	filename = "text_p16.txt";

	printf("The number of character in %s is %d.", filename, count_characters(filename));


	return 0;
}


int count_characters(char *filename)
{
 	char str[1001];
 	FILE* pFile;
 	int count = 0;

 	pFile = fopen(filename, "r");
 	if (pFile == NULL) {
 		printf("Error opening file\n");
 		return 0;
 	}

 	int call_num = 0;
 	while(fgets(str, 1000, pFile) != NULL) {
 		call_num += 1;
 		printf("(%d). The string is: %sIts length is %d\n\n", call_num, str, strlen(str));
 		count += strlen(str);
 	}

	fclose(pFile);
	return count;
}

/******** Output ***********

> ./a.exe
(1). The string is Anthony,2,15,1997
Its length is 18

(2). The string is Erika,7,31,1999
Its length is 16

(3). The string is Joseph,9,28,2001
Its length is 17

The number of character in text_p16.txt is 51.

*****************************************************/
/************************Practice Test 3 - Problem 1 ********************
 Topic:  fscan - scanning text from a file

 Need to figure the role of the buffer size.   Perhap the characters the go beyond
 end of the buffer are not-defined and behave in unpredictable ways?

Answer: The


*************************************************************************/


#include <stdio.h>

int main() {

	char buffer[6];

	FILE *pFile = fopen("test.txt", "r");
	
	if(pFile == NULL)
		printf("\nFrom print_to_file:  Error opening file.\n");

	fscanf(pFile, "%s", buffer);
	printf("%s", buffer);
}

/***************************** Output ***********************************


I ran this on my Windows system and the student cluster.   The behavior seems to be
to grab all the characters up to the white space regardless of the length for the string between
the beginning of the text and the first white space.


text.txt = "The quick brown fox jumped over the lazy dog's back."
> ./a.exe
The

text.txt ="Thequick brown fox jumped over the lazy dog's back."
> ./a.exe
Thequick

text.txt = "Thequickbrownfox
jumped over the lazy dog's back."
> ./a.exe
Thequickbrownfox


*****************************************************/
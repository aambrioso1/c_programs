#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* allocate_array_of_char(int size);

int main(){

	char s1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char *s2 = "hello";
	s1[0] = 'j';
	//s2[0] = 'm';
	printf("%s\n", s1);
	printf("%s\n", s2);

	char* s3 = s1+3;
	printf("%s\n", s3);

	char buffer[100];
	printf("Enter a sentence: ");
	//scanf("%99s", buffer);
	fgets(buffer, 99, stdin);

	int len = strlen(buffer);
	if(len>0 && buffer[len-1] == '\n')
	buffer[len - 1] = '\0';

	printf("You typed: %s\n", buffer);

	printf("\nthe main function is done...\n");
	return EXIT_SUCCESS;
}
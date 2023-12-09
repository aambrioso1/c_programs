//strings.c


	
/*
	while(*my_string) {
		printf("%c\n", *my_string);
		my_string++;
	}


	printf("my_string is %s\n", my_string);
	strcat(my_string, a);
	printf("my_string is %s\n", my_string);
	strcat(my_string, l);
	printf("my_string is %s\n", my_string);
	strcat(my_string, e);
	printf("my_string is %s\n", my_string);
	strcat(my_string, x);
	printf("my_string is %s\n", my_string);

	int i = 0;
	while(my_string[i]){
		printf("my_string[i] = %c\n", my_string[i]);
		i++;
	}

	// Nice article on iterating through a string:  https://dev.to/zirkelc/how-to-iterate-over-c-string-lcj
	
	char *str = "This is an example.";
	char *c = str;


	while (*c != '\0')
	{
	  printf("%c ", *c);
	  c++;
	}

	printf("\n");

	char *str = "Alexander";
	char str2[10];
	
	size_t length = strlen(str); 
	size_t i;
	
	for (i = 0; i < length; i++)
	{
	  str2[i] = str[length - i - 1];
	}
	str2[i] = '\0';

	printf("str2 : %s\n", str2);

	char *str = "Alexander";
	char str2[20];

	int i = 0;
	while(*str) {
		printf("%c\n", *str);
		str++;
		i++;
	}
	printf("i = %d\n", i);
	for (int j = 0; j <= i; j++){
		printf("(%d) %c\n", j, *str);
		str--;
		str2[j] = *str;
		// str2++;
	}
	str2[i] = '\0';

	printf("str2 is %s\n", str2);
*/
#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>
#include <string.h>

void word_reverse(char *str);

int main() {

	char string[] = "Alexander";
	word_reverse(string);

	printf("The reversed word is %s.\n", string);

	return 0;
}

void word_reverse(char *str) {
	
    size_t length = strlen(str); // we need the length of string to create a reversed index
    size_t i; // we need to declare i outside of for loop so we can add Null to the end new_string
    char new_str[length+1];
    
    for (i = 0; i < length; i++) { // We iterate backward through the string
        new_str[i] = str[length - i - 1]; // assign letter to a new string array
    }
    new_str[i] = '\0'; // append Null to terminate the new string

    strcpy(str, new_str); // copy the new string to the original string
}

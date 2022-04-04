#include <stdio.h>
#include <string.h>

// modify using pointers
int read_line(char *s);

// Strings - two types

// strlen - return the lenght of a string
// strcpy - 
// strcat -
// strcmp -
// 

// Lecture on the string library #include <string.h>

int count_characters(char *s) {
	char *p;
	int count = 0;
	for(p=s; *p!='\0'; p++) count ++;
	return count;
}


int main() {

	char str1[10] = "abc";
	char str2[10] = "def";
	strcpy(str1, "hello");
	strcat(str1, str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);
	strcpy(str1 + strlen(str2), str2);
	printf("str1 = %s, str2 = %s\n", str1, str2);



	printf("%d\n", strcmp("Hello", "bye")); // -
	printf("%d\n", strcmp("Hello", "Bye")); //
	printf("%d\n", strcmp("hello", "bye")); //
	printf("%d\n", strcmp("Hello", "hello")); //
	printf("%d\n", strcmp("bye", "bye")); //
	printf("%d\n", strcmp("8ye", "bye")); //
	printf("%d\n", strcmp("HEllo", "hello")); //
	printf("%d\n", strcmp("Bye", "BYe")); //
	printf("%d\n", strcmp(" ", "\n")); //		
	// Review lecture here around 44:00

/*
	strcpy(s1, "String");
	strcpy(s2, "Library");
	if (strcmp(s1, s2) = 0)

		strcat(s1, s2);

	else {};
*/
		//strcat

	char planets[][8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

	for (int i=0; i<8; i++) {
		printf("%s ", planets[i]);
	}

	char *planets_pointers[][8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

}

// Command-Line Arguments

// An example of command line arguments:  ls -l remind.c

/*

int main(int argc, char *args[]) {
	
}

*/




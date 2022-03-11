// Week 9 Lecture 1
#include <stdio.h>
#include <string.h>


// modify using pointers
int main(int arc, char *argv[]){

		//strcat

// Check if command line argument is a planet
	char planets[][8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

	int check = 0;
	for (int i=0; i<8; i++) {
		if(strcmp(argv[i], planets[i]) == 1)  {
			check = 1;
			break;
		}

	if (check)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;

	}

// Lecture on the string library #include <string.h>


}


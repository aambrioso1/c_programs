#include <stdlib.h>
#include <stdio.h>

int main(){
	int input = 0;
	printf("Enter an int value: ");
	scanf("%d", &input);

	switch (input){

	case 1: puts("one"); break;
		case 2: puts("two"); break;
			case 3: puts("three"); break;
				case 4: puts("four"); break;
				default: puts("Don't know");

	}

	puts("\n");
	return EXIT_FAILURE;

}
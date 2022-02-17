#include <stdio.h>

char char_to_lower(char ch) {
	if(ch >= 'A' && ch <= 'Z') {
		return ch +'a' - 'A';
	}
	else {
	return ch;
	}
}

int main(void) {

	char ch;
	
	printf("Enter a letter: ");
	scanf("%c", &ch);

	printf("char_to_low(%c) = %c\n", ch, char_to_lower(ch));
}
#include <stdio.h>

char char_to_lower(char ch) {
	if(ch >= 'A' && ch <= 'a') {
		return char +'a' - 'A';
	}
	else {
	return ch;
	}
}

int main(void) {
	
	printf("Enter a letter: ");
	scanf("%c", &ch);

	print("\nchar_to_low(ch) = %ch", char_to_lower_ch);
}
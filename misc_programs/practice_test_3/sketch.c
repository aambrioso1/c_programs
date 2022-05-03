#include <stdio.h>

int main() {
	
	char names[][31] = {"Ralph", "Alex", "Fred"};

	for(int i = 0; i < 3; i++)
		printf("names[%d] = %s\n", i, names[i] );

	return 0;
}
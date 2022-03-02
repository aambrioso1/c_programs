#include <stdio.h>

// ToDo:  Modify read_line skip white spaces at the beginning 

int read_line(char str[], int n){
	char ch;
	int count=0;

	while((ch = getchar()) != '\n') {
		if(count < n) {
			str[count] = ch;
			count ++;
		}

	}
	str[count] = '\0';
	return count;
}

int main() {
	char a[21];

	read_line(a, 20);

	printf("%s\n", a);
}
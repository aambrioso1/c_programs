#include <stdio.h>

int find_space(char *s) {

}

int count_characters(char *s) {
	char *p;
	int count = 0;
	for(p=s; *p!='\0'; p++) count ++;
	return count;
}


int main {
	char a[21]; // "Good"
	char b[21]; // " morning\n"

	scanf("%20s", a);
	scanf("%20s", b);

	int n_a = count_characters(a);
	int n_b = count_characters(b);

	for(int i; i < n_b; i++) {
		a[n_a+i] = b[i];
	}

	printf("%s\n",a);

}


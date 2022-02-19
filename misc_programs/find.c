#include <stdio.h>

int find_elements(int a[], int n1, int b[], int n2, int c[]) {
	int count = 0;

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (a[i]==b[j]) {
				count += 1;
				c[count] = a[i];
			}
		}
	}
	return count;
}

int main(void) {
	int a[4] = {1, 2, 3, 4};
	int b[6] = {3, 2, 6, 7, 5, 4};
	int c[4] = {0};
	int num;

	num = find_elements(a, 4, b, 6, c);
	printf("c has %d elements: ", num);
	for (int i = 0; i<4; i++) {
		if (c[i] != 0) {
			printf("%d ", c[i]);
		}
	}
	printf("\n");
}
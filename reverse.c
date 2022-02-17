#include <stdio.h>


void reverse(int a[], int n) {
	int temp;
	for (int i = 0; i<n-i; i++) {
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
}

int main() {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	int a[n];

	printf("Enter %d numbers: ", n);
	for (int i = 0; i<n;i ++) {
	 	scanf("%d", &a[i]);
	}

	
	reverse(a,n);

	for (int i = 0; i<n; i++) {
		printf("%d ", a[i]);
	}	
	printf("\n");
}
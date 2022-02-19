#include <stdio.h>

int main() {

	int size;	
	printf("Enter a number: ");
	
	scanf("%d", &size);

	int a[size];
	printf("Enter %d numbers: ", size);
	for(int i = 0; i<size; i++) {
		scanf("%d", &a[i]);
	}

    printf("\nThe numbers entered are: ");
	for(int i = 0; i<size; i++) {
		printf("%d ", a[i]);
	}

	int max = a[0];
	for(int i = 0; i<size; i++) {
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("\nThe biggest number is: %d", max);
}
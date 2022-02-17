#include <stdio.h>

int find_largest(int a[], int n);

int main() {
	int n;
	scanf("%d", &n);

	int array[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &array[i]);
	}
	 
	int largest = find_largest(array,n);
	printf("The largest element is %d\n", largest);

}

int find_largest(int a[], int n) {
	int ret = a[0];
	for(int i=1; i<n; i++) {
		if(ret < a[i]) {
			ret = a[i];
		}
	}
	return ret;
}
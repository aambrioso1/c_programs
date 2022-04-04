#include <stdio.h>

int main() {
	int a[4] = {5,8,2,9};
	for(int i=0; i<4; i++) {
		printf("%p\n", &a[i]);
	}
	printf("%d - %d = %d", &a[1], &a[0], &a[3]-&a[0]);
}
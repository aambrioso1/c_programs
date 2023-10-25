#include <stdio.h>

int main(){
	int *p;
	int i = 4;
	p = &i;
	int a = *p + 2;

	printf("*p = %d, p = %p\n, i = %d, *a = %p\n\n" , *p, p, i, &a);
	// printf("&i = %d, p = %p", &i, p);

	*p = 32;

	printf("i = %d, *p = %p\n", i, p); 
}
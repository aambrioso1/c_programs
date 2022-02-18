#include <stdio.h>

int main() {
	int *p;
	int i;
	i = 4;
	p=&i;
	printf("%d %d\n", i, *p);
	printf("%p %p\n", &i, p);
	*p = 32;
	printf("%d %p", i, p);
}
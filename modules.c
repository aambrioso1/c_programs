#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "greetings.h"

int getUserAge(char*);
void swap(int* x, int* y);

int main(){

	int a = 23, b = 42;

	printf("a is % d and b is %d\n", a, b);
	swap(&a,&b);
	printf("a is % d and b is %d\n", a, b);

	int johnAge = getUserAge("John");
	int alexAge = getUserAge("Alex");
	displayGreetings("John", johnAge);
	displayGreetings("Alex", alexAge);
	global++;
	printf("global is %d\n", global++);
	printf("global is %d\n", ++global);
	printf("global is %d\n", global);
	printf("\n");
	return EXIT_SUCCESS;
} // end main method

void swap(int* x, int* y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
};

int getUserAge(char* name){
	printf("Enter %s's age: ",name);
	int age = 0;
	scanf("%d", &age);
	return age;
}
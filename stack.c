#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// variables in the help
void doSomething();
void doSomethingElse();
int global=42; //global variable for this file
void swap(int*, int*);

int main(){

	int a = 10, b = 20;
	printf("a is %d and b is %d\n", a, b);
	swap(&a,&b);
	printf("a is %d and b is %d\n", a, b);
	// doSomething();
	// printf("finished doSomething()\n...");
	// doSomethingElse();
	// printf("finished doSomethingElse()\n");
	printf("main function is done...\n");

	return EXIT_SUCCESS;
} // end main method

void doSomething(){
	// how many times this function is called
	static int counter = 0;
	counter++;
	printf("working on something...\n");
};

void doSomethingElse(){
	printf("I'm calling doSomething()...\n");
	doSomething();
	printf("I'm done calling doSomething()...\n");
	printf("working on something...\n");
};

void swap(int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
};


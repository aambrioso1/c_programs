/************************ Practice Test 3 - Problem 10 ********************
Topic: Using function prototypes

The answer:  double integrate(double (*f)(double x), double a, double b);

A function named integrate that integrates a mathematical function f can be made by 
passing f as an argument, and a and b are the range for the integration, both and a and b are 
of type double. Function f can be any function that takes a double parameter and returns a 
double. The function integrate returns a double. Write a function prototype for the
integrate function.

*************************************************************************/

#include <stdio.h>

double f(double x);

double integrate(double (*f)(double x), double a, double b);

int main(void) {
	printf("The integral is: %f\n", integrate(f, 0.0, 1.0));
}

double f(double x) {
	return (double) x * (double) x;
}

double integrate(double (*f)(double x), double a, double b) {
	double sum = 0.0;
	int n = 10000;
	double delta_x = ((double) b - a) / n;
	for (int i = 0; i < n; i++) {
		sum += f(i * delta_x) * delta_x;
	}
	return sum;
}



/******************** OUTPUT *************************

> ./a.exe
The integral is 0.333283


*****************************************************/


/********************** Practice Test 3 - Problem 25 *********************
Topic:  Function pointers

Answer: See code for move_last_to_first

*************************************************************************/

#include <stdio.h>
#include <string.h>

double derive(double (*f)(double), double x);
double f(double x);

int main() {
	printf("f'(3) = %f", derive(f, 3));
}

double derive(double (*f)(double), double x)
{
 double stepSize = 0.01;
 double x1 = x - stepSize;
 double x2 = x + stepSize;
 return (f(x2) - f(x1))/ (2 *stepSize); 
}

double f(double x) {
	return x * x;
}




/******** Output ***********

> ./a.exe
f'(3) = 6.000000

*****************************************************/
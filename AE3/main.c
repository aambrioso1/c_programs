#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
// #include <tools.h>

void display_menu(int xvalue, int yvalue);

int main(){

	int input_value;

	do {
		display_menu(0,0);
		scanf("%d", &input_value);

	} while(input_value < 0 || input_value > 4);
	
	printf("\nThe input value is %d.\n", input_value); 
	printf("\nEXIT_SUCCESS = %d.\n\n", EXIT_SUCCESS);
	return EXIT_SUCCESS;
} // end main method

void display_menu(int xvalue, int yvalue){
	printf("\nApplication Menu\n");
	printf("****************\n");
	printf("****************\n");
	printf("Let us consider x and y, two positive integers...\n");
	printf("Current Values: X = 0 Y = 0\n\n");
	printf("Do you want to: \n");
	printf("\t[1] Set new values for X and Y");
	printf("\t[2] Compute the LCM of these two values\n");
	printf("\t[3] Compute the GCD of these two values\n");
	printf("\t[4] Compute x^y\n");
	printf("\t[0] Exit this application\n\n");
	printf("Your choice: ");
}

#include <stdio.h>
#include <stdlib.h>


int main(){

	int g = 0;
	int grade = 0;

	do  {
		printf("Enter a grade #%d: ", g);
		scanf("%d", &grade);
		
		if(grade != -1 && (grade>100 || grade<0)) {
		printf("Enter a grade in [0, 100] only.");
		printf("\n-1 to quit\n");
		} 
	} while(grade != -1);

	printf("\n");
	return EXIT_SUCCESS;
} // End of main menu
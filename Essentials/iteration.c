#include <stdlib.h>
#include <stdio.h>


int main(){
	int value=0;

	while(value<10){
		printf("%d", value);
		value++;
	}
/*
	printf("\n");

	for(int counter=1;counter<=5;counter++){
		if(counter%2==0){
			continue;
		}
		printf("%d", counter);
	}
*/
	printf("\n");
	return EXIT_SUCCESS;
}


// end of main method

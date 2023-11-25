#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* allocate_array_of_char(int size);

int main(){

	char *ptr = NULL;
	char name[6];


	printf("enter a name (5 chars max): ");
	scanf("%100s", name);
	//ptr = allcate_arr

	// ptr = something();
	//free(ptr);
	// printf("From the main: ptr is %p\n", ptr);
	// printf("From the main: *ptr is %d\n", *ptr);
	/*ptr = allocate_array_of_char(4);
	ptr[0] = 'h';
	ptr[1] = 'i';
	ptr[2] = '\0';
	ptr[3] = 'A';

	for (int i=0; i < 4; i++){
		printf("ptr[%d] = %c\n", i, ptr[i] );
	}
	printf("\n");

	char *p = ptr;
	while(*p) printf("[%c]  ", *p++);
	printf("\n");


	printf("ptr = %s\n", ptr); */


	
	free(ptr);
	//printf("From the main: ptr is %p\n", ptr);
	//*ptr = 9999;

	
	printf("\nthe main function is done...\n");
	return EXIT_SUCCESS;
}

char* allocate_array_of_char(int size) {
	char *p = NULL;
	
	p = (char*)malloc(size*sizeof(char));

	//printf("From inside something p is %p\n", p);
	//printf("From inside something *p is %d\n", *p);

	return p;


}
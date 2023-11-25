#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "hsl.h"

int main(){
	
	// testing hsl_length
	char *s0 = NULL; 			// a NULL string
	char *s1 = "";				// an empty string
	char *s2 = "hello there"; 	// normal string
	char *s3 = "Alex Ambrioso"; // normal string
	char *s4 = " Alex"; 		// space at the beginning
	char *s5 = "Ambrioso "; 	// space at the end
	char *s6 = " Alex "; 		// space at the beginning and the end
	char *s7 = "Alex ambrioso";  // slightly different from s3
	
	printf("String [%s] is %d characters long\n", s0, hsl_length(s0));
	printf("String [%s] is %d characters long\n", s1, hsl_length(s1));
	printf("String [%s] is %d characters long\n", s2, hsl_length(s2));
	printf("String [%s] is %d characters long\n", s3, hsl_length(s3));
	printf("String [%s] is %d characters long\n", s4, hsl_length(s4));
	printf("String [%s] is %d characters long\n", s5, hsl_length(s5));
	printf("String [%s] is %d characters long\n", s6, hsl_length(s6));

	// test hsl_compare
	printf("\nstrings [%s] and [%s] are %s", s3, s3, hsl_compare(s3, s3)?"identical":"different");
	printf("\nstrings [%s] and [%s] are %s", s2, s3, hsl_compare(s2, s3)?"identical":"different");
	printf("\nstrings [%s] and [%s] are %s", s4, s6, hsl_compare(s4, s6)?"identical":"different");
	printf("\nstrings [%s] and [%s] are %s", s0, s1, hsl_compare(s0, s1)?"identical":"different");
	printf("\nstrings [%s] and [%s] are %s\n", s3, s7, hsl_compare(s3, s6)?"identical":"different");

	printf("\n\n");

	char* s8 = hsl_allocate(hsl_length(s3));

	for(int i = 0; i <= hsl_length(s3); i++){
		s8[i] = s3[i];
	}
	printf("s3 and s8 are: [%s] and [%s]\n", s3, s8);
	printf("Deallocating s8: %s\n", hsl_deallocate(s8)?"success":"issue");
	char* s9 = NULL;
	printf("Deallocating NULL: %s\n", hsl_deallocate(s9)?"success":"issue");

	char* s10 = hsl_allocate(hsl_length(s3));

	for(int i = 0; i <= hsl_length(s3); i++){
		s10[i] = s3[i];
	}
	printf("s3 and s9 are: [%s] and [%s]\n", s3, s9);
	printf("Deallocating cleanly s10:%s", hsl_deallocate_cleanly(&s10)?"success":"issue");
	printf(" --> %p:\n", s10);
	char* s11 = NULL;
	printf("Deallocating cleanly NULL: %s", hsl_deallocate_cleanly(&s11)?"success":"issue");
	printf(" --> %p:\n", s11);

	




	


	return EXIT_SUCCESS;
}
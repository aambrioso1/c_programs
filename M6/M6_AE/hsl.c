
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



int 	hsl_length (char* s){
	// return if s is NULL, otherwise return length of s not including the '\0'
	if(!s) return 0; // or if (s==NULL) return 0;

	int count = 0;
	
	// while(s[count] != 0){
	//	count++;

	while(*s++){
		count++;
	}

	return count;
}


bool	hsl_compare (char* s1, char* s2){
	int size1 = hsl_length(s1);
	int size2 = hsl_length(s2);

	if (size1 != size2) return false;

	for (int i = 0; i < size1; i++) {
		if (s1[i] != s2[i]) return false;
	}
	return true;
}


char* 	hsl_allocate (int size){
	return (char*)malloc(sizeof(char) * size);
}


bool 	hsl_deallocate (char** p){
	if (!p) return false;
	free(p);
	return true;


}

bool 	hsl_deallocate_cleanly (char** p){
	if (*p == NULL) return false;
	free(*p);
	*p = NULL;
	return true;

}


char* 	hsl_clone (char* s){
	// Start here at 43 minutes in Module 6 AE 

	return NULL;
}


char* 	hsl_gather (char* s1, char* s2) {
	return NULL;
}


char* 	hsl_extract (char* s, int start, int end){
	return NULL;
}

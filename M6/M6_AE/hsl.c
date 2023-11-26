
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
	// compares two strings
	int size1 = hsl_length(s1);
	int size2 = hsl_length(s2);

	if (size1 != size2) return false;

	for (int i = 0; i < size1; i++) {
		if (s1[i] != s2[i]) return false;
	}
	return true;
}


char* 	hsl_allocate (int size){
	// allocates memory for a string of length size
	return (char*)malloc(sizeof(char) * size);
}


bool 	hsl_deallocate (char** p){
	// deallocates memory point to p
	if (!p) return false;
	free(p);
	return true;


}

bool 	hsl_deallocate_cleanly (char** p){
	// deallocates memory point to p
	if (*p == NULL) return false;
	free(*p);
	*p = NULL;
	return true;

}


char* 	hsl_clone (char* s){
	// Makes a clone of the string s
	if (!s) return NULL;

	int len = hsl_length(s);
	char *tmp = hsl_allocate(len);
	
	char* start = tmp;
	while(*s){
		*tmp++ = *s++;
	}
	*tmp = *s;
	
	return start;
}


char* 	hsl_gather (char* s1, char* s2) {
	int size1 = hsl_length(s1);
	int size2 = hsl_length(s2);

	char* p = hsl_allocate(size1 + size2);

	if (!p) return NULL;

	char* result = p;

	while(*s1) *p++ = *s1++;
	while(*s2) *p++ = *s2++;
	*p = '\0';

	return result;
}


char* 	hsl_extract (char* s, int start, int end){
	
	if (!s) return NULL;
	if (end < start) return NULL;
	if(end > hsl_length(s)) return NULL;
	if (start < 0) return NULL;


	int len = end - start + 1;

	char* p = hsl_allocate(len);

	if (!p) return NULL;

	int i = 0;
	for (i=start; i <= end; i++){
		p[i-start] =  s[i];
	}
	p[i] = '\0';

	return p;
}

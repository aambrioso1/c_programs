#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_line(char str[], int n);
void sort_strings(char **strings, int n);

int main() {
	char input_buffer[1001];
	int length = 0;
	char *sentence = NULL;
	char *sentences[50];
	int num_sentences = 0;

	for(;;) {	]
	printf ("Please type a sentence:\n");
	read_line(input_buffer, 1000);
    
    length = strlen(input_buffer);
    if (length = 0) 
    	break

	length = strlen(input_buffer);
	printf ("Allocating %d bytes to hold the sentence\n\n", length+1);

	sentence = malloc(length+1);
	if(sentence == NULL){
		printf("malloc failed");
		return 0;
	}
		
	strcpy (sentence, input_buffer);
   
	// Need to adjust code here.

	}

	sort_strings(sentences, num_sentences);

	for(int i=0; i<num_sentences;i++){
		printf("%s\n", sentence[i]);
	}

	return 0;
}

// read a line and store up to n characters
int read_line(char str[], int n) {
	int ch, i = 0;
  
	while ((ch = getchar()) != '\n') {
		if (i < n)
			str[i++] = ch;
	}
	str[i] = '\0';

	return i;
}

// selection sort for strings
void sort_strings(char **strings, int n) {
	for(int i=0; i < n-1; i++) {
		int k = i;
		for(int j=i+1; j < n; j++)
			if(strcmp(strings[i], strings[j]) > 0)
				k = j;
		// swap strings i and k
	}
}


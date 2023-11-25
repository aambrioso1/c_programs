#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_BUFFER_SIZE 100
#define STRTOK_SEPARATORS " \t"

int main(){

	char buffer[MAX_INPUT_BUFFER_SIZE];


	printf("How many sentences? ");
	int nbsentences = 0;
	scanf("%d", &nbsentences);
	fgets(buffer, MAX_INPUT_BUFFER_SIZE, stdin);

	if (nbsentences <= 0){
		return EXIT_FAILURE;
	}

	char **sentences = NULL;
	sentences = (char**)malloc(sizeof(char*) * nbsentences);

	for (int i = 0; i < nbsentences; i++){
		sentences[i] = NULL;
	}
	

	for (int s = 1; s < nbsentences+1; s++){
		printf("Enter sentence: #%d: ", s);
		fgets(buffer, MAX_INPUT_BUFFER_SIZE, stdin);
		int len = strlen(buffer);
	if(len > 0 && buffer[len-1] == '\n')	
		buffer[len - 1] = '\0';
	

	char *input = (char*)malloc(sizeof(char) * (len+1));

	strcpy(input, buffer);

	// insert input in our dynamical arrary
	sentences[s-1] = input;


	// printf("You typed: %s\n", input);
	//free(input);
	} // end loop

	for (int i = 0; i < nbsentences; i++)
		printf("Sentences #%d: %s\n", i+1, sentences[i]);


	for (int i = 0; i < nbsentences; i++)
		free(sentences[i]);
	free(sentences);




	// free(input);
	// printf("How many sentences? ");

	/*
	printf("Enter a sentence: ");
	fgets(buffer, MAX_INPUT_BUFFER_SIZE, stdin);
	int len = strlen(buffer);
	if(len > 0 && buffer[len-1] == '\n')
	buffer[len - 1] = '\0';

	char * input = (char*) malloc(sizeof(char)*(len+1));
	strcpy(input, buffer);

	// char *word = strtok(input, STRTOK_SEPARATORS);

	char *word = strtok(input, STRTOK_SEPARATORS);
	int n = 0;
	while(word != NULL){
		printf("Word #%d is: %s\n", ++n, word);
		word = strtok(NULL, STRTOK_SEPARATORS);
	}
	// printf("You typed: %s\n", input);
	*/

	printf("\nthe main function is done...\n");
	return EXIT_SUCCESS;
}
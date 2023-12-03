// file: dict_test.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This is sort of a rehash of the third video lecture

/* Data Structures Definitions */

struct wordPair {
       char* englishWord;
       char* foreignWord;
};

struct dictionary {
       struct wordPair ** data;
       int nbwords;
       int size;
};


/* Prototypes of functions */

struct dictionary* dictionary_build(int size);
     /* ROLE        Allocate and initialize a new dictionary structure able to accommodate
                    a number of pairs of words specified by the size parameter
       RETURNS      Address of new dictionary, if allocation was successful.
                    NULL otherwise
       PARAMETERS   The size of the dictionary to make
     */

#define ARRAY_SIZE 6
typedef struct wordPair myWord;
typedef struct dictionary Dictionary;


int main(){

	char* englishWords[] = {"dog", "daughter", "woman", "boy", "word", "dictionary"};
	char* foreignWords[] = {"perro", "hija", "woman", "muchacho", "palabra", "diccionario"};

	myWord wordPair_array[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++) {
		wordPair_array[i].englishWord = englishWords[i];
		wordPair_array[i].foreignWord = foreignWords[i];
	}


	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%s in English is %s in Spanish\n", wordPair_array[i].englishWord, wordPair_array[i].foreignWord);
	}

	return 0;
}

/************* OUTPUT ******************

~/documents/c_programs/m7/pa $ gcc dict_test.c
~/documents/c_programs/m7/pa $ ./a.out        
dog in English is perro in Spanish
daughter in English is hija in Spanish
woman in English is woman in Spanish
boy in English is muchacho in Spanish
word in English is palabra in Spanish
dictionary in English is diccionario in Spanish

****************************************/
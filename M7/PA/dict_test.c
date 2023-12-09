// file: dict_test.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This is sort of a rehash of the third video lecture
// All that I do here is build an array of word pairs.

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

#define ARRAY_SIZE 50
typedef struct wordPair myWord;
typedef struct dictionary Dictionary; 


int main(){

	char* englishWords[] = 	{
						"dog", "daughter", "woman", "boy", "word", 
						"dictionary", "good", "talk", "Spanish", "English"
						};
	char* foreignWords[] = 	{
						"perro", "hija", "mujer", "muchacho", "palabra",
						"diccionario", "bueno", "hablar", "espanol", "ingles"
						};


	Dictionary *myDictionary = dictionary_build(10);

	printf("%d\n", myDictionary->nbwords);
	printf("%d\n", myDictionary->size);


	// We construct an array of word pairs
	for (int i = 0; i < 10; i++) {
		//strcpy((myDictionary->data[i])->englishWord, englishWords[i]);
		//strcpy((myDictionary->data[i])->foreignWord, foreignWords[i]);
	}

	return 0;
}


struct dictionary* dictionary_build(int size){
     /* ROLE        Allocate and initialize a new dictionary structure able to accommodate
                    a number of pairs of words specified by the size parameter
       RETURNS      Address of new dictionary, if allocation was successful.
                    NULL otherwise
       PARAMETERS   The size of the dictionary to make
     */

     Dictionary *d = NULL;
     myWord *data = NULL;
     d = (Dictionary*)malloc(sizeof(Dictionary));
	d->data=(myWord**)malloc(sizeof(myWord*)*size);
	d->size = size;
	d->nbwords = 0;
	return d;

}



/************* OUTPUT ******************

~/documents/c_programs/m7/pa $ gcc dict_test.c
~/documents/c_programs/m7/pa $ ./a.out        
dog in English is perro in Spanish
daughter in English is hija in Spanish
woman in English is mujer in Spanish
boy in English is muchacho in Spanish
word in English is palabra in Spanish
dictionary in English is diccionario in Spanish

****************************************/
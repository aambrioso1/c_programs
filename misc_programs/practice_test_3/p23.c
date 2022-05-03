
/********************** Practice Test 3 - Problem 22 *********************
Topic:  Working with files

Answer: See code for count_characters

*************************************************************************/

#include <stdio.h>
#include <string.h>



struct part{
	int number;
 	char name[31];
 	int on_hand;
};

void search(struct part inv[], int np);

int main() {

	int np = 3;
	struct part my_inv[np];
	char names[][31] = {"washer", "bolt", "handle"};
	
	for(int i = 0; i < np; i++) {
		strcpy(my_inv[i].name, names[i]);
		my_inv[i].number = i+1;
		my_inv[i].on_hand = (i+1)*(i+1);
	}

	search(my_inv, np);
}


void search(struct part inv[], int np)
{ // add additional variable declarations if necessary
	int number;
	printf("Enter part number: ");
	scanf("%d", &number);
	for(int i = 0; i < np; i++) {
		if (inv[i].number == number) {
			printf("There are %d %ss on_hand.",  inv[i].on_hand, inv[i].name );
			return;
		}
	}
	printf("part not found");

}




/******** Output ***********

> ./a.exe
Enter part number: 0
part not found
> ./a.exe
Enter part number: 1
There are 1 washers on_hand.
> ./a.exe
Enter part number: 2
There are 4 bolts on_hand.
> ./a.exe
Enter part number: 3
There are 9 handles on_hand.
> ./a.exe
Enter part number: 4
part not found

*****************************************************/

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

}



struct node *move_first_to_last(struct node *list) {
	struct node *last, *temp;
 	if(list == NULL || list→next == NULL) return list; // If the list is empty, or has only one node, return the list.
 	for(last=list; last->next != NULL; last = last->next) ; // Set the last pointer to the last node of list.
 	last->next = list; // link last node to first node.  At this point last->next is the last node except without the NULL pointer.
 	list = list->next; // start the list to the second node
 	last->next->next = NULL; // Now we set the new last point to NULL.  Note that last is not the last node anymore.
 	return list; // return second node as new first node

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
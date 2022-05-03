
/********************** Practice Test 3 - Problem 22 *********************
Topic:  Operations on linked lists

Answer: See code for move_last_to_first

*************************************************************************/

#include <stdio.h>
#include <string.h>

struct part{
	int number;
 	char name[31];
 	int on_hand;
};

struct node *move_last_to_first(struct node *list);

int main() {

}

struct node *move_last_to_first(struct node *list) {
 struct node* prev, *cur;
 if(list == NULL) return list; //the list is empty
 for(prev = NULL, cur=list; cur->next !=NULL;
 prev = cur, cur = cur->next)
 ;
 if(prev == NULL) //there is only one node in the list
 return list;
 else{
 prev ->next = NULL;
 cur ->next = list;
 return cur;
 }
}




/******** Output ***********



*****************************************************/
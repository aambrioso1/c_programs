
/********************** Practice Test 3 - Problem 27 *********************
Topic:  Operations on Link Lists

Answer: see code for delete_all

*************************************************************************/

#include <stdio.h>
#include <string.h>

struct node {
 int value;
 struct node *next;
};

struct node *delete(struct node *list, int n); 
int size(struct node *list);
struct node *delete_all(struct node *list, int n);

int main() {

}

struct node {
 int value;
 struct node *next;
};
struct node *delete(struct node *list, int n) {
 struct node *cur, *prev;
 for(cur=list, prev=NULL; cur!=NULL && cur->value!=n; prev=cur, 
cur=cur->next) ;
 if(cur == NULL) 
 return list; 
 if(prev == NULL) 
 list = list->next;
 else 
 prev->next = cur->next; 
 free(cur); 
 return list; 
}

int size(struct node *list) {
 int r=0;
 for(struct node *p=list; p!=NULL; p=p->next, r++) ;
 return r;
}

struct node *delete_all(struct node *list, int n) {
 int old_size;
 do {
 old_size = size(list);
 list = delete(list, n);
 } while(old_size != size(list));
 return list;
}

/******** Output ***********



*****************************************************/
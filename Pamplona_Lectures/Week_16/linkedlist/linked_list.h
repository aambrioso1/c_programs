#ifndef __HEADER_LLIST
#define __HEADER_LLIST

#define llist struct node *

struct node {
	int value;          /* data stored in the node */
	struct node *next;  /* pointer to the next node */
};

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
void print_list(struct node *list);
int count_n(struct node *list, int n);
void clear_list(struct node *list);
int duplicates(struct node *list);
struct node *find_largest(struct node *list);

#endif

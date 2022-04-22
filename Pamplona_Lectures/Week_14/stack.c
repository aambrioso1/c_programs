#include <stdio.h>
#include <stdlib.h>

struct node{

	int value;
	struct node *next;
};

struct node *push(struct node *top, int i);
struct node *make_empty(struct node *top);
struct node *pop(struct node *top, int *i);
void print_stack(struct node *top);

int main(void)
{
   int n;
   struct node *stack1 = NULL;
   struct node *stack2 = NULL;
   stack1 = push(stack1, 25);
   stack1 = push(stack1, 32);
   stack1 = push(stack1, 8);
   stack1 = push(stack1, 94);
   stack2 = push(stack2, 21);
	
   printf("stack1:\n");
   print_stack(stack1);
   printf("stack2:\n");
   print_stack(stack2);   

   stack1 = pop(stack1, &n);
   printf("Popped %d from stack1\n", n);
   printf("stack1:\n");
   print_stack(stack1);
 
   stack2 = push(stack2, n);
   printf("stack2:\n");
   print_stack(stack2);
 
   stack1 = pop(stack1, &n);
   printf("Popped %d from stack1\n", n);
   printf("stack1:\n");
   print_stack(stack1);
 
  
   stack1 = make_empty(stack1);
   printf("stack1:\n");
   print_stack(stack1);


   stack2 = make_empty(stack2);
   printf("stack2:\n");
   print_stack(stack2);

   return 0;

}

struct node* push(struct node* top, int i)
{
   struct node *new_node;
   new_node = malloc(sizeof(struct node));
   if(new_node == NULL)
   {
	printf("malloc failed");
        return top;
   }
   
   new_node->value = i;
   new_node->next = top;
   return new_node;

}

struct node *make_empty(struct node *top)
{
   struct node *p;
  while(top!=NULL){
	p = top;
        top = top->next;
	free(p);
  } 

  return NULL;
}

struct node *pop(struct node *top, int *i)
{
  //add code here

  return top;
}

void print_stack(struct node *top)
{
   struct node *p;
   if(top != NULL){
      for(p = top; p !=NULL; p=p->next)
	printf("%d\n", p->value);
      printf("\n");
   }
   else
      printf("stack is empty\n");
}

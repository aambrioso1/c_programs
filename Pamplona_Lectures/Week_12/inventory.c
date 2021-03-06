#include <stdio.h>
#include <ctype.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
};

int find_part(int number, struct part inv[], int np);
void insert(struct part inv[], int *np);
void search(struct part inv[], int np);
void update(struct part inv[], int np);
void print(struct part inv[], int np);
int read_line(char str[], int n);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(void)
{
  char code;
  struct part inventory[MAX_PARTS];
  int num_parts = 0;

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'i': insert(inventory, &num_parts);
                break;
      case 's': search(inventory, num_parts);
                break;
      case 'u': update(inventory, num_parts);
                break;
      case 'p': print(inventory, num_parts);
                break;
      case 'q': 
                printf("Thank you for using this app!");
                return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

/**********************************************************
 * find_part: Looks up a part number in the inv array.    *
 *            Returns the array index if the part number  *
 *            is found; otherwise, returns -1.            *
 **********************************************************/
int find_part(int number, struct part inv[], int np)
{
  int i;

  for (i = 0; i < np; i++)
    if (inv[i].number == number)
      return i;
  return -1;
}

/**********************************************************
 * insert: Prompts the user for information about a new   *
 *         part and then inserts the part into the inv    *
 *         array. Prints an error message and returns     *
 *         prematurely if the part already exists or the  *
 *         array is full.                                 *
 **********************************************************/
void insert(struct part inv[], int *np)
{
  int part_number;

  if (*np == MAX_PARTS) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number, inv, *np) >= 0) {
    printf("Part already exists.\n");
    return;
  }

  inv[*np].number = part_number;
  printf("Enter part name: ");
  read_line(inv[*np].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inv[*np].on_hand);
  (*np)++;
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the inv array. If the     *
 *         part exists, prints the name and quantity on   *
 *         hand; if not, prints an error message.         *
 **********************************************************/
void search(struct part inv[], int np)
{
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number, inv, np);
  if (i >= 0) {
    printf("Part name: %s\n", inv[i].name);
    printf("Quantity on hand: %d\n", inv[i].on_hand);
  } else
    printf("Part not found.\n");
}

/**********************************************************
 * update: Prompts the user to enter a part number.       *
 *         Prints an error message if the part can't be   *
 *         found in the inv array; otherwise, prompts the *
 *         user to enter change in quantity on hand and   *
 *         updates the array.                             *
 **********************************************************/
void update(struct part inv[], int np)
{
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number, inv, np);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inv[i].on_hand += change;
  } else
    printf("Part not found.\n");
}
/**********************************************************
 * print: Prints a listing of all parts in the inv array, *
 *        showing the part number, part name, and         *
 *        quantity on hand. Parts are printed in the      *
 *        order in which they were entered into the       *
 *        array.                                          *
 **********************************************************/
void print(struct part inv[], int np)
{
  int i;

  printf("Part Number   Part Name                  "
         "Quantity on Hand\n");
  for (i = 0; i < np; i++)
    printf("%7d       %-25s%11d\n", inv[i].number,
           inv[i].name, inv[i].on_hand);
}

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 * readline.c (Chapter 16, page 395)                     *
 *********************************************************/
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (isspace(ch = getchar()))
    ;
  str[i++] = ch;
  while ((ch = getchar()) != '\n') {
    if (i < n)
      str[i++] = ch;
    //ch = getchar();
  }
  str[i] = '\0';
  return i;
}

/***************** Output *******************

Enter operation code: a
Illegal code

Enter operation code: i
Enter part number: 1
Enter part name: foobar
Enter quantity on hand: 3

Enter operation code: i
Enter part number: 2
Enter part name: do_hickey
Enter quantity on hand: 5

Enter operation code: i
Enter part number: 3
Enter part name: thing_a_ma_jig
Enter quantity on hand: 7

Enter operation code: i
Enter part number: 4
Enter part name: bolt
Enter quantity on hand: 11

Enter operation code: s
Enter part number: 5
Part not found.

Enter operation code: s
Enter part number: 4
Part name: bolt
Quantity on hand: 11

Enter operation code: u
Enter part number: 5
Part not found.

Enter operation code: 4
Illegal code

Enter operation code: u
Enter part number: 4
Enter change in quantity on hand: 2

Enter operation code: p
Part Number   Part Name                  Quantity on Hand
      1       foobar                             3
      2       do_hickey                          5
      3       thing_a_ma_jig                     7
      4       bolt                              13

Enter operation code: q
Thank you for using this app!

********************************************************/
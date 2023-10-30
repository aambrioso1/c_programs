#include <stdio.h>
#include <stdlib.h>
/*
Assignment  M2PA
File        prog2.c

Student:    [Alex Ambrioso] [U4806-8911]
Date:       [10/28/23]

Features:   [Inputs a number of stars and lines and outputs inputted number of stars(*)
            and lines.]
Bugs:       [None]
*/

int main()
{
  // Start by pasting inside the main the source you wrote for M2PA's prog1.c file
  printf("\nWelcome to Prog2\n\n");

  int nbstars;
  int nblines;
  
  do {
   
    printf("Enter a value for nbstars: ");
    scanf("%d", &nbstars);
    printf("\n");    
  } 
  while (nbstars < 1 || nbstars > 3);

  do {
   
    printf("Enter a value for nblines: ");
    scanf("%d", &nblines);
    printf("\n");
  } 
  while (nblines < 1 || nblines > 9);

  for(int i = 1; i <= nblines; i++) {
    printf("#%d ", i);
  
    for(int j = 1; j <= nbstars; j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  return EXIT_SUCCESS;
}

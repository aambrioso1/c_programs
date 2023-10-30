#include <stdio.h>
#include <stdlib.h>
/*
Assignment  M2PA
File        prog1.c

Student:    [Alex Ambrioso] [U4806-8911]
Date:       [10/27/2023]

Features:   [The programs inputs values for two variables and checks that each is in the proper range.]
Bugs:       [Specify here remaining bugs at time of submission]
*/

int main() {
  
  printf("\nWelcome to Prog1\n\n");

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

  // printf("The number of stars is %d.\n", nbstars);
  // printf("The number of lines is %d.\n", nblines);  

  return EXIT_SUCCESS;
}

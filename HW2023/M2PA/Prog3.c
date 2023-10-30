#include <stdio.h>
#include <stdlib.h>
/*
Assignment  M2PA
File        prog3.c

Student:    [Alex Ambrioso] [U4806-8911]
Date:       [10/28/23]

Features:   [Inputs number of stars and lines and outputs them according to formulas.]
Bugs:       [None]
*/

int main()
{
  // Start by pasting inside the main the source you wrote for M2PA's prog2.c file
  printf("\nWelcome to Prog3\n\n");

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

  if (nbstars==1){
    for(int i = 1; i <= nblines; i++){
    printf("#%d ", i);
      for(int j = 1; j <= i; j++) {
        printf("*");
      }
    printf("\n");
    } 
  printf("\n");
  }
  if (nbstars==2){
    for(int i = 1; i <= nblines; i++){
    printf("#%d ", i);
      for(int j = 1; j <= 2*i-1; j++) {
        printf("*");
      }
    printf("\n");
    } 
  printf("\n");
  }


  if (nbstars==3){
    for(int i = 1; i <= nblines; i++){
    printf("#%d ", i);
      for(int j = 1; j <= 3*i-2; j++) {
        printf("*");
      }
    printf("\n");
    } 
  printf("\n");
  } 
 

  return EXIT_SUCCESS;
}
// The formulas used in for generating the number of stars is based on the general term
// formula for an arithmetic series:  
//    a_n = d * n + b 
// where d is the common difference.
// For example, the sequence: 1, 4, 7, 10, 13, has a d = 3.
// Therefore a_n = 3 * n + b.
// Now, we can find b by make a_1 work out:  1 = 3 * 1 + b => b = -2.
// Therefore 
//    a_n = 3 * n - 2.  
// This is the formula used in line 63 for nbstarts = 3.
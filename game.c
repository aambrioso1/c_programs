#include <stdio.h>
#include <stdlib.h>

/*
Assignment  M2_IE #1
File        game.c

Student:    [Alex Ambrioso] [U4806-8911]
Date:       [10/27/2023]

Features:   [The programs plays a two player game where each player tasks coins from a stack.]
Bugs:       [None.  There should be a way to element a lot of the duplication but it will require a lot
            more time to figure out.]
*/

int main() {
  
  printf("\nWelcome to the pickup coins game!\n\n");

  int total_coins = 21;  // stores the total number of coins left
  int numcoins1; //store the number of coins picked up by player1
  int numcoins2; //store the number of coins picked up by player2
  
  printf("The stack has %d coins.\n\n", total_coins);
  
  while(total_coins > 0){ //Game contiues until the coins are gone
    do {  //We ask player 1 to choose a number of coins and checks the choice
      printf("Player 1 takes: ");
      scanf("%d", &numcoins1);
      printf("\n");
      if (numcoins1 < 1 || numcoins1 > 3){ //give player 1 a warning to enter the correct value
        printf("You can only take between 1 and 3 coins during each turn.\n\n");
      }   
    } 
    while (numcoins1 < 1 || numcoins1 > 3); //check that value is in the proper range

    total_coins -= numcoins1;  //reduce the number of coins by the amount chosen
    
    // print number of coins left with a special message if there are only 1 or 2 left
    if (total_coins == 1 || total_coins == 2){
      printf("The stack has only %d coins left.\n\n", total_coins);
    }
    else {
      printf("The stack has %d coins left.\n\n", total_coins);
    }

    // total_coins will reach 0 and end the game here 
    // or in the analagous if statement for player 2
    if (total_coins <= 0){
      printf("Player 1 wins!!!\n\n");
      return EXIT_SUCCESS; //The game ends with player 1 winning
    }

    do { //We ask player 2 to choose a number of coins and check the choice
      printf("Player 2 takes: ");
      scanf("%d", &numcoins2);
      printf("\n");
      if (numcoins2 < 1 || numcoins2 > 3){ //give player 2 a warning to enter the correct value
        printf("You can only take between 1 and 3 coins during each turn.\n\n");
      }   
    } 
    while (numcoins2 < 1 || numcoins2 > 3); //check that value is in the proper range

    total_coins -= numcoins2;  //Reduce the number of coins by the amount chosen
    
    // print number of coins left with a special message if there are only 1 or 2 left
    if ((total_coins == 1 || total_coins == 2)){
      printf("The stack has only %d coins left.\n\n", total_coins);
    }
    else {
      printf("The stack has %d coins left.\n\n", total_coins);
    }

    // total_coins will reach 0 and end the game here
    // or in the analagous if statement for player1
    if (total_coins <= 0){
      printf("Player 2 wins!!!\n\n");
      return EXIT_SUCCESS; //The game ends with player 2 winning
    }

  }

  // We should never reach here since total_coin must reach 0 and exit in the while loop.
  printf("\n\n***Something went wrong!***\n\n");
  return EXIT_SUCCESS;
}
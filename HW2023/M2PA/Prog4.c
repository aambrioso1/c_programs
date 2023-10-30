#include <stdio.h>
#include <stdlib.h>
/*
Assignment  M2PA
File        prog4.c

Student:    [Alex Ambrioso] [U4806-8911]
Date:       [10/28/3]

Features:   [Computes the reward for a game with three results in the range [1,3]]
Bugs:       [Specify here remaining bugs at time of submission]
*/

int main()
{
    printf("\nWelcome to Prog4\n\n");


    int R1, R2, R3; // The three reward values for our game.
  
    do {
   
    // Input R1
    printf("Enter a value for R1: ");
    scanf("%d", &R1);
    printf("\n");    
    } 
    while (R1 < 1 || R1 > 3);
    
    // Input R2
    do {
       
        printf("Enter a value for R2: ");
        scanf("%d", &R2);
        printf("\n");
    } 
    while (R2 < 1 || R2 > 3);
    

    // Input R3
    do {
       
        printf("Enter a value for R3: ");
        scanf("%d", &R3);
        printf("\n");
    } 
    while (R3 < 1 || R3 > 3);

    // Now we compute the payoff value according to the rules

    int payoff = R1; // We initial the game's payoff as required by first part of the rule.

    // The following if follows the logic of the second part of the rule.
    if (R2 < R1) {
        payoff += R2;
        if (R3 < R2){
            payoff += 2 * R3;
        }
        else {
            if (R3 < R1){
                payoff += R3;
            } 
        }
    }
    else { // This else introduces the third part of the rule.
        if(R3 < R1){
            payoff += R3;
        }
    }

    printf("\nFor R1=%d, R2=%d, and R3=%d, the payoff is %d.\n\n", R1, R2, R3, payoff);

    return EXIT_SUCCESS;


}

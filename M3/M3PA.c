#include <stdio.h>
#include <stdlib.h>

/*****

Assignment  M2PA
File        M3PA.c

Student:    Alex Ambrioso ID: U4806-8911
Instructor: Dr. Alessio Gaspar
Date:       11/6/2023

Features:
The program uses recursive functions to implement an iterative formula for 
computing all of a game's payoff value. The payoff is based on three numbers 
R1, R2, and R3 which vary from lowestRoll(set to 1 here) to highestRoll (set to 3 here).

Bugs:       None

*****/

// Function prototypes
int payoff(int R1, int R2, int R3); // Compute the payoff base on three rolls
void loopR1(int R1, int upto); // Recursively loops through all the R1 values
void loopR2(int R2, int upto, int R1); // Recursively loops through all the R2 values
void loopR3(int R3, int upto, int R1, int R2); // Recursively loops through all the R3 values

int main() {

    printf("Welcome to M3PA\n");

    int lowestRoll = 1;  // The lowest roll possible in the game
    int highestRoll = 3; // The highest roll possible in the game

    loopR1(lowestRoll, highestRoll); // We invoke loopR1 to loop through all the R1 values

    exit(EXIT_SUCCESS);
}

int payoff(int R1, int R2, int R3) {
    // Computes the payoff based on values of the three rolls and the formula

    // Set initial payoff to the value of R1
    int payOff = R1;
    // this portion of the program calculates the payoff and sets up the rules that results
    // R1, R, and R3 follow to compute with the proper payoff value
    if (R2 < R1) {
        payOff += R2;
        if (R3 < R2){
            payOff += (2 * R3);
        } else {
         if (R3 < R1){
            payOff += R3;
         }
      }
    } else {
        if (R3 < R1){
            payOff += R3;
        }
    }

    return payOff;
}

// Function Definitions

void loopR1(int R1, int upto){
    // loops through all the R1 values
    if (R1 <= upto){
        loopR2(1,upto,R1); //  loops through all the R2 values
        loopR1(R1+1, upto); // recursive call to loop through the rest of the R1 values
    }
}

void loopR2(int R2, int upto, int R1){
    // loops through all the R2 values
    if (R2 <= upto){
        loopR3(1, upto, R1, R2); //  loops through all the R3 values
        loopR2(R2+1, upto, R1); // recursive call to loop through the rest of the R2 values
    }
}

void loopR3(int R3, int upto, int R1, int R2){
    // loops through all the R3 values
    if (R3 <= upto){
        printf("For %d, %d, %d the payoff is %d\n", R1, R2, R3, payoff(R1, R2, R3));
        loopR3(R3+1, upto, R1, R2); // recursive call to loop through the rest of  the R3 values
    }
}

/*

***************************
******** OUTPUT ***********
***************************
For 1, 1, 1 the payoff is 1
For 1, 1, 2 the payoff is 1
For 1, 1, 3 the payoff is 1
For 1, 2, 1 the payoff is 1
For 1, 2, 2 the payoff is 1
For 1, 2, 3 the payoff is 1
For 1, 3, 1 the payoff is 1
For 1, 3, 2 the payoff is 1
For 1, 3, 3 the payoff is 1
For 2, 1, 1 the payoff is 4
For 2, 1, 2 the payoff is 3
For 2, 1, 3 the payoff is 3
For 2, 2, 1 the payoff is 3
For 2, 2, 2 the payoff is 2
For 2, 2, 3 the payoff is 2
For 2, 3, 1 the payoff is 3
For 2, 3, 2 the payoff is 2
For 2, 3, 3 the payoff is 2
For 3, 1, 1 the payoff is 5
For 3, 1, 2 the payoff is 6
For 3, 1, 3 the payoff is 4
For 3, 2, 1 the payoff is 7
For 3, 2, 2 the payoff is 7
For 3, 2, 3 the payoff is 5
For 3, 3, 1 the payoff is 4
For 3, 3, 2 the payoff is 5
For 3, 3, 3 the payoff is 3
*/

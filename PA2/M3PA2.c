#include <stdio.h>
#include <stdlib.h>

/* add proper header documentation here */

int payoff(int R1, int R2, int R3); // function prototype for the payoff function

int main() {

    printf("Welcome to M3PA\n");
    int roll1, roll2, roll3, payOff;

    for (int i=1; i<=3;i++){
        for (int j=1; j<=3;j++){
            for (int k=1; k<=3;k++){
                // Set roll1, roll2, roll3 as we loop through all possible values
                roll1 = i;
                roll2 = j;
                roll3 = k;

                // Set initial payoff to the value of roll 1
                int payOff = roll1;
                // this portion of the program calculates the payoff and sets up the rules that results have
                // roll1, roll2, and roll3 have to follow to come with the proper payoff value.
                if (roll2 < roll1) {
                    payOff += roll2;
                    if (roll3 < roll2){
                        payOff += (2 * roll3);
                    }else{
                     if (roll3 < roll1){
                        payOff += roll3;
                     }
                  }
                }else{
                    if (roll3 < roll1){
                        payOff += roll3;
                    }
                }
                printf("For %d, %d, %d the payoff is %d\n", roll1, roll2, roll3, payOff);
            }
        }
    }

    exit(EXIT_SUCCESS);
}

int payoff(int R1, int R2, int R3) {

    return EXIT_SUCCESS;

}

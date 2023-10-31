/*
Assignment  M2PA
File        prog1.c

Student:    [Alex Ambrioso] [U4806-8911]
Date:       [10/27/2023]

Features:   [The programs inputs values for two variables and checks that each is in the proper range.]
Bugs:       [Specify here remaining bugs at time of submission]
*/

int main() {
  
  printf("\nWelcome to the pickup pticks game!\n\n");

  int numstick1; //store number of sticks picked up by player1
  int numstick2; //store number of sticks picked up by player2
  
  do {
   
    printf("Player 1 enter a value in [1,3]: ");
    scanf("%d", &numsticks1);
    printf("\n");    
  } 
  while (numsticks1 < 1 || numsticks1 > 3);

  do {
   
    printf("Player 2 enter a value in [1,3]: ");
    scanf("%d", &nblines);
    printf("\n");
  } 
  while (numsticks2 < 1 || numsticks2 > 3);

  // printf("The number of stars is %d.\n", numsticks1);
  // printf("The number of lines is %d.\n", numsticks2);  

  return EXIT_SUCCESS;
}
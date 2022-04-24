
/********************** Practice Test 3 - Problem 3 *********************
Topic:  Recursion

Answer:  
n = 2   n = 1   n = 0   n = -1  n = 0   n = 1

Comment out the code marked added to run the orginal program.

*************************************************************************/

#include <stdio.h>

void countdown(int n) {


	printf("\n|Top of code   | printf    | ");  // Added printf at top of count.
	printf("n = %d\t", n);

	n--;
	printf("\n|Just before if| n--       | n = %d", n); // Added printf after n is increment just before the if.
 	
 	if (n >= 0) {
 		printf("\n|In if         | countdown | n = %d", n); // Added printf inside of if.
 		countdown(n);
 	}

 	printf("\n|Bottom code   | printf    | ", n); // Added printf at the bottom of count.
 	printf ("n = %d\t", n);

 }

int main ( ) { 
	printf("|--------------|-----------|----------|\n");  // Added code
	printf("|   Position   |  Action   |  n value |\n");  // Added code
	printf("|--------------|-----------|----------|");
	countdown(2);
	printf("\n|--------------|-----------|----------|"); // Added code
 	return 0;
}


/***************************** Output ***********************************

Output without new commented printf statements to mark progress of the programs execution:

> ./a.exe
n = 2   n = 1   n = 0   n = -1  n = 0   n = 1

Output with the printf statements in lines 11 and 15:

> ./a.exe
Top of code: print n = 2: n = 2
Just before if: print n = 1:
In if: call countdown(1):
Top of code: print n = 1: n = 1
Just before if: print n = 0:
In if: call countdown(0):
Top of code: print n = 0: n = 0
Just before if: print n = -1:
Bottom code:  print n = -1: n = -1
Bottom code:  print n = 0: n = 0
Bottom code:  print n = 1: n = 1

The new printf statements allow you to follow the execution of the original code in a linear fashion.

The original code keeps calling countdown.
Each call results in the n value due to the printf at the top of the code: Output:  n = 2  n = 1  n = 0.   
After the call countdown(0), n is decremented to -1.  
The if is skipped
Since n = -1 this is printed using the printf at the bottom of the code:  
Output so far:  n = 2   n = 1   n = 0   n = -1  
At this point countdown(0) completes execution.  
Then countdown(1) this completions runs the bottom afteer the value of n has been decremented:
Output so far:  n = 2   n = 1   n = 0   n = -1  n = 0
Finallt countdown(2) reaches the bottom of the code, prints n = 1, completes exceution and the program terminates

Final output:  n = 2   n = 1   n = 0   n = -1  n = 0   n = 1

*****************************************************/
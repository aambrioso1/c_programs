#include <stdio.h>

// Practice Test 3 - Problem 3
// A question about recursion

void countdown(int n) {
	printf("\nTop of code: print n = %d: ", n);  // Added printf at top of count.
	printf("n = %d\t", n);
	n--;
	printf("\nJust before if: decrement n: n = %d: ", n); // Added printf after n is increment just before the if.
 	if (n >= 0) {
 		printf("\nIn if: call countdown(%d): ",n); // Added printf inside of if.
 		countdown(n);

 	}
 	printf("\nBottom code:  print n = %d: ",n); // Added printf at the bottom of count.
 	printf ("n = %d\t", n);
 }

int main ( ) { 
	countdown(2);
 	return 0;
}



/***************************** Output ***********************************

Answer:  
n = 2   n = 1   n = 0   n = -1  n = 0   n = 1

Output without printf statements in lines 7, 10, 12, 16:
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

The original code keeps calling countdown and printing the n value due to the printf at the top of the code.
This gives n = 2, n = 1, and n = 0.   After the call countdown(0), n is decremented to -1.  Now the if is skipped
and n = -1 is printed using the printf at the bottom of the code).   At this point countdown(0) completes execution.  
Followed by countdown(1) and countdown(2).   Since these last two completions are running the bottom
of the code the value of n has been decremented since the original call to countdwon.   The results the bottom of the 
code printing n = 0 and n = 1.

*****************************************************/
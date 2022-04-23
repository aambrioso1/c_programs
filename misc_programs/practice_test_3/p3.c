#include <stdio.h>

// Practice Test 3 - Problem 3
// A question about recursion

void countdown(int n) {
	// printf("\nTop of code: print n = %d: ", n);
	printf("n = %d\t", n);
	n--;
 	if (n >= 0) {
 		// printf("\nIn if: call countdown(%d): ",n);
 		countdown(n);

 	}
 	// printf("\nBottom code:  print n = %d: ",n);
 	printf ("n = %d\t", n);
 }

int main ( ) { 
	countdown(2);
 	return 0;
}



/***************************** Output ***********************************
Note that the function is declared as void.   There is no return value.  
This means the action taken by he recursive call to countdown will only 
depend on the function argument n.




*****************************************************/
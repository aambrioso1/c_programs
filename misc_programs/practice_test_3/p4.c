#include <stdio.h> // Practice Test 3 - Problem 4:  Unintensionally modifying an array
int main()
{
	int* pMax;
	int* pNext;
	int numbers[] = {33, 15, 65, 98, 21, 0, -12};
	pMax = numbers; // The line sets pMAX to be a pointer to the first element of numbers.
	pNext = numbers;
	int i = 0;
	while (pNext <= &numbers[6])
	{   
		if (*pNext > *pMax)
		{	
			*pMax = *pNext;  printf("numbers[0] = %d\n", numbers[i]); // This line will change the first value in numbers.
		}	
		pNext++; i++;
	}
	printf ("Max = %d\n", *pMax);
	printf("The elements of numbers are now: ");
	for (int i = 0; i <= 6; i++)
		printf("%d ", numbers[i]);
	return 0;
	}


/***************************** Output ***********************************

Answer:  Line 14

> ./a.exe
numbers[0] = 65
numbers[0] = 98
Max = 98
The elements of numbers are now: 98 15 65 98 21 0 -12

You may wonder, "How do we fix the code?"  

One way is to declare MAX as an integer and set it to the first value of numbers:
	int MAX = numbers[0];
Then change of all the occurences of *pMax to MAX.

Try it!

*****************************************************/

/********************** Practice Test 3 - Problem 20 *********************
Topic:  Structures

Answer: dates[3].day = 10

*************************************************************************/

#include <stdio.h>


struct date {
 int day, month, year;
};
struct date dates[5] = {
 	{4,7,2021},
 	{12,12,1997},
 	{1,1,1991},
 	{10,2,2022},
 	{3,4,2002}
};

int main() {

	printf("dates[3].day = %d\n", dates[3].day);
	printf("dates[1].year = %d\n", dates[1].year);

	return 0;
}


/******** Output ***********

dates[3].day = 10
dates[1].year = 1997

*****************************************************/
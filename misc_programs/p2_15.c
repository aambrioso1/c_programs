#include <stdio.h>
#include <string.h>

/***** Problem 15 on Practice Test 2 
 
total_sec is a time represented as the number of seconds since midnight. hr, min, and
sec are pointers to variables in which the function will store the equivalent time in hours (0 -23), 
minutes (0-59), and seconds (0-59), respectively.

*****/

// Note the initialization of the strings.


void split_time(int total_sec, int *hr, int *min, int *sec);

int main(void) {
    

    int seconds = 100000;
    int hr, min, sec;

    split_time(seconds, &hr, &min, &sec);
    printf("hours: %d, min: %d, secs: %d\n", hr, min, sec);
    printf("The total number of seconds is: %d", 3600 * hr + 60 * min + sec);

    return 0;
}

void split_time(int total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / 3600;
    *min = total_sec % 3600 / 60;
    // *sec = total_sec % 3600 % 60
    *sec = total_sec % 60; // This is shorter than the solution on the key.
}


/********************* OUTPUT **************************



********************************************************/
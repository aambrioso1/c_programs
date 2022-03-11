#include <stdio.h>

int main() {
    
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    // For string arrays a[row][column] the row indicates the string and the column a letter within the string.
    // As usual indexing starts at 0.
    printf("planets[1][3] = %c", planets[1][3]);

    return 0;

}

// Output: planets[1][3] = u

#include <stdio.h>

int main() {
    
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    // For string array a[row][column] the row indicates the string and the column a letter within the string.
    // As usual indexing starts at 0.
    printf("planets[1][3] = %c\n", planets[1][3]);

    // Shows that planets = &planets[0] where "Mercury is stored"
    printf("*planets = %s\n", *planets);
    printf("*(planets + 3) = %s\n", *(planets+3));

    return 0;
}

/******** Output *********

planets[1][3] = u
*planets = Mercury
*(planets + 3) = Mars

**************************/
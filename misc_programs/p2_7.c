#include <stdio.h>

int f(char *s, char *t) {
    
    char *p1, *p2;
    for(p1=s;*p1!='\0';p1++) {
        for(p2 = t; *p2 != '\0'; p2++)
            if (*p1==*p2) break;
        if(*p2 == '\0') break;
    }
    printf("p1 - s = %d\n", p1-s);
    return p1 - s;
}

int main() {
    
        printf("f(\"cabd\", \"acad\") = %d\n", f("cabd", "acad"));
        printf("f(\"cadb\", \"acad\") = %d\n", f("cadb", "acad"));
        printf("f(\"abcdefghijklmnopqrstuvwxyz\", \"abcdefG\") = %d\n", f("abcdefghijklmnopqrstuvwxyz", "abcdefG"));

    return 0;

}

// Output:  


/* The program computes the position of the first character in the first string that is not in
the second string.

We need to analyze the nested for loops.   The pointer p1 points to 'c'.
Then we advance p2 through the second string looking for another c.
We find one so we break out of the inner loop and advance p1 to 'a'.
Then p2 moves through its string until it finds a matching 'a' and breaks out of the loop.  
Then p1 advances to b.   The inner loop iterates.  Since b is not in the 
second string p2 will advance to the ending null character.   
Program flow drops out the nested loops.   Now s points to the beginning
of the first string and p1 points to the 'b' in s.  This is the first letter in the string 
that is not part of the second string.   The pointer arithmetic calculation
p1 - s computes how far p1 has advanced.   

*/
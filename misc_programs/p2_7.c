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
    // printf("f/“{cabd/”, /“acad/”} = %s", f("cabd", "acad"));
    return 0;

}

// We need to analyze the nested for loopg.   The pointer p1 points to 'c'.
// Then we advance p2 through the second string looking for another c.
// We find one so we break out of the the inner loop and advance p1 to 'a'
// Ten p2 move through its string and it find a, breaks out the loop,
// p1 advances to b.   The inner loop iterates and since b is not in the 
// second string the p2 will advance to the ending null character.   
// The control drops out the nested loops.   Now s points to the beginning
// of the first string and p1 points to b the first letter in the string 
// that is not part of the second string.   The pointer arithmetic calculation
// p1 - s compute how far p1 advanced before one of its character have advance.
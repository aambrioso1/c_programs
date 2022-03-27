// Program put_planets

#include <stdio.h>
#define MAX_LEN 1000
int main() {

	char planets[][8] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

	FILE* pFile;
	pFile = fopen("planets.txt", "w");
	if (pFile == NULL) {
		printf ("Error opening file\n");
		return 1;
	}
	for(int i = 0; i<8;i++) {
		fputs(planets[i], pFile);	
		fputs("\n",pFile);
	}
	fclose(pFile);
	printf ("File planets.txt written\n");
		return 0;
}
// Week 11 Lecture 2


/*

Here is an outline of the lecture and the programs demonstrating during them.


rewind(): rewind to the beginning of the file.   See the program rewind_11_2.c for a demonstration.

fscanf()
int feof (FILE* pFile) - returns True if you attempt to read beyond the end of the file
fscanf() returns number of characters that were successfully read.

Example below for fscanf()







*/

// reading from a file using scanf
int main() {
	FILE *fp;

	fp = fopen("dumbbells.txt", "r");
	if (fp == NULL){
		return 1;
	}
	int weight, amount;
	char color[256];

	while(!feof(myFile)) {
		if(fscanf(fp, %d%s%d, &weight, color, &amount) == 3) {

		}


	}

	fclose(fp);
	return 0;
}


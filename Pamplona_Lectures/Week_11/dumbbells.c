#include <stdio.h>

/* Class 11.2: Video about 20:00

count the total number of dumbbells */
int main()
{

	char color[31];
	int weight;
	int count;
	int total_count=0;
		
    FILE *fp = fopen("dumbbells.txt", "r");
	
	if(fp == NULL){
		printf("Error opening file.");
		return 1;
	}
	//read the file
	while(!feof(fp) && !ferror(fp)){
		if(fscanf(fp, "%d%s%d", &weight, color, &count)== 3){ 
			printf("%d\t%s\t%d\n", weight, color, count);
			total_count += count;
		}
	}
	printf("There are %d number of dumbbells in total.\n", total_count); 
	fclose(fp);
	return 0;
}

// Class 11.2 - Video:  47:20

// Demonstrates conversion specifiers

#include <stdio.h>
#include <string.h>


int main(){

	//char line[1000];
	char file_name[1000];
	char name[1000];
	char gender[50];
	char species[50];
	int age;
	double weight;
	

	printf("Enter file name:");
        scanf("%s", file_name);
	FILE *csv_file = fopen(file_name, "r");
	if(csv_file == NULL){
		printf("unable to open the file.");
		return 0;
	}
	while(!feof(csv_file)&&!ferror(csv_file)){
		// Note the use of conversion specifies to skip commmas.
		if(fscanf(csv_file, "%[^,], %[^,], %[^,], %d, %lf\n",name, species, gender, &age, &weight)==5){  	
			printf("%s %s %s %d %.1f", name, species, gender, age, weight);
		}	
		printf("\n");
	}
	return 0;
}	

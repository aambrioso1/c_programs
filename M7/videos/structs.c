#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Go to 18:36

struct my_data{
	int value;
	double dvalue;
	char* name;
};

typedef struct my_data MyData;

void displaydata(MyData d);

bool compare(MyData d1, MyData);

int main(){

	MyData data1;

	data1.value = 42;
	data1.dvalue = 42.23;
	data1.name = (char*)malloc(sizeof(char)*30);
	strcpy(data1.name, "hello");
	displaydata(data1);

	MyData data2;
	data2.value = 999;
	data2.dvalue = 999.9;

	MyData* ptr = NULL;
	ptr = &data1;
	(*ptr).value = -1;
	ptr->dvalue = -3.8;


	displaydata(data1);

	if (compare(data1, data2))
		printf("They are the same.\n");
	else printf("They are not the same.\n");

	return 0;
	}


void displaydata(MyData d){
	printf("MyData: value = %d dvalue = %lf name = %s\n", d.value, d.dvalue, d.name);

}

bool compare(MyData d1, MyData d2) {
	return ( (d1.value == d2.value) && (d1.dvalue == d2.dvalue));
}

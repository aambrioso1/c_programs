// file: structs_vid2.c

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Commented out code from the first part of vid

/*
union my_data {
	int value;
	double dvalue;
	char* name;
};

typedef union my_data MyData;

void displaydata(MyData d);

bool compare(MyData d1, MyData);
*/


union numerical_value {
	int ivalue;
	double dvalue;
};

typedef union numerical_value NumValue;



struct variable_data {
	char* name;
	char* data_type;
	NumValue value; // new datatype defined by union
};

typedef struct variable_data VarData;

//void displaydata(MyData d);
//bool compare(MyData d1, MyData d2);

void display(VarData v){
	printf("%s is a %s with value: ", v.name, v.data_type);
	
	if(strcmp(v.data_type, "INTEGER") == 0){
	printf("%d ", v.value.ivalue);
	} else {
		printf("%lf", v.value.dvalue);
	}

	printf("\n");
}

int main(){

	VarData var1;
	var1.name = "number of players";
	var1.data_type = "INTEGER";
	var1.value.ivalue = 42;

	VarData var2;
	var2.name = "score";
	var2.data_type = "FLOATINGPOINT";
	var2.value.dvalue = 42.9;

	display(var1);
	display(var2);


/*
	MyData data1;

	data1.value = 42;
	data1.dvalue = 42.23;

	// Note for Dr. Gaspar
	// For the novice the use of the code below in the
	// video might give the impression that malloc must be used from
	// string assignment.  I beleieve you intention is to review
	// this idea.  I suggest that you declare the string in the simpler way
	// first and explain the benefit of dynamic allocation.
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
*/
	return 0;
	}

/*
void displaydata(MyData d){
	printf("MyData: value = %d dvalue = %lf name = %s\n", d.value, d.dvalue, d.name);

}

bool compare(MyData d1, MyData d2) {
	return ( (d1.value == d2.value) && (d1.dvalue == d2.dvalue));
}
*/

#include <stdio.h>

//This program illustrates 

void find_element(int a[], int n1, in c[], int n2, int *size);




int main(){
	int a[6] ={17, 10, 55, 21, 500, 106};
	int b[4] ={17, 10, 55, 21, 500, 106};
	int c[6];
	int size;

	find_elements(a, 6, b, 4, c &size);

	for(int i=0; i<size; i++){
		print("%d ", c[i]);
	}
}


void find_element(int a[], int n1, in c[], int n2, int *size) {


	int *r = &c[0]
	for(int *p =a[0]; p< &a[n1]; p++){
		for(int *q =a[0]; q< &b[n1]; q++){
			if (*p==*q) {
				*r = *p;
				r++;
			}
		}
	}
	*size = 

}
#include <stdio.h>

//This program illustrates 

int compare_array(int a[], int n, int value){
	int count = 0;
		for(int *p=&a[0]; p<a[n]; p++){
			for (*p>value) {
				count++;
			}
		}
	return count;

}

int main(){
	int a[6] ={17, 10, 55, 21, 500, 106};

	printf("%d\n", compare_array(a, 6, 50));
}

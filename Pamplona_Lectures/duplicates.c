# include <stdio.h>

int main(){
	int i;
	int n;

	printf("enter the size of the array: ");
	scanf("%d",n);
	int a[n];
	printf("enter the array elements", n);
	for (int i = 0; i<n;i++){
		scanf("%d", &a[i]);
	}
	int result = duplicates(a,n);
	if (result)
		printf("There are duplicates in this array\n");
	else
		printf("There are duplicates in this array\n");
}

int remove_duplicates(int a, int n){
	int *p, *q
	for (p=a; p < a + n ; p++) {
		for (q = a; q < a + n; q++){
			if (p!=q) {
				if {
					*p = *q;
					return 1;
				}
			}
		}
	}
	return 0;
}


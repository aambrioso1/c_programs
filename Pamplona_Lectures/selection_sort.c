/*selection_sort.c, project 5, Program Design
 */

#include <stdio.h>
#define N 10

void selection_sort(int a[], int n);

int main(void)
{
  int i;

  FILE *fp;
  fp = fopen("numbers.txt", "r");
  
  // What N will work for any file?
  while(fscanf(fp, %d) == 1) {
     N++;
   }

  int a[N];

  rewind(fp);


  FILE *fp;
  fp = fopen("sorted_numbers.txt", "r");

  for(int i = 0; i<N;i++){
      fprintf(fp, "%d\n");
  }
  int a[N];
  }


  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i++)
    fscanf("%d", &a[i]);

  selection_sort(a, N);

  printf("In sorted order:");
  for (i = 0; i < N; i++)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}

void selection_sort(int a[], int n)
{
  int i, largest = 0, temp;

  if (n == 1)
    return;

  for (i = 1; i < n; i++)
    if (a[i] > a[largest])
      largest = i;

  if (largest < n - 1) {
    temp = a[n-1];
    a[n-1] = a[largest];
    a[largest] = temp;
  }

  selection_sort(a, n - 1);
}

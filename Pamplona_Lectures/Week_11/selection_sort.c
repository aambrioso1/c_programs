/*selection_sort.c, project 5, Program Design
 */

#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
  int i, N=0, x;

  FILE *fp;
  fp = fopen("numbers.txt", "r");

  // What N will work for any file?

  // This while loop is used to decide how big to make the array of numbers
    while(fscanf(fp, "%d", &x) == 1) {
     N++;
   }

  int a[N];

  rewind(fp);  // We are at the end of the file so we rewind to the beginning for reading.

  for (i = 0; i < N; i++)
    fscanf(fp, "%d", &a[i]);
  fclose(fp);


  selection_sort(a, N);

  fp = fopen("sorted_numbers.txt","w");
  for (i = 0; i < N; i++)
    fprintf(fp, "%d\n", a[i]);
  fclose(fp);

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

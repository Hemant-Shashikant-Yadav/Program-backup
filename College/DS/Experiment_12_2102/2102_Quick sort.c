/*NAME:-Hemant S. Yadav
ROLLNO:-2102
EXP:- QUICK SORT */

#include <stdio.h>
void quicksort(int a[], int low, int high)
{
	int i, j, pivot, temp;
	if (low < high)
	{
		pivot = low;
		i = low + 1;
		j = high;
		while (i <= j)
		{
			while (a[i] <= a[pivot])
				i++;
			while (a[j] > a[pivot])
				j--;
			if (i < j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		temp = a[pivot];
		a[pivot] = a[j];
		a[j] = temp;
		quicksort(a, low, j - 1);
		quicksort(a, j + 1, high);
	}
}
int main()
{
	int i, n;
	printf("\nEnter the size of array=");
	scanf("%d", &n);
	int a[n];
	printf("\nEnter the data elements=");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	quicksort(a, 0, n - 1);
	printf("\nSorted list--->");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}

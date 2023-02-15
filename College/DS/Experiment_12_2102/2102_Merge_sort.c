/*NAME:-Hemant S.Yadav
ROLLNO:-2102
EXP:-MERGE SORT */

#include <stdio.h>
void MERGE(int a[], int low, int mid, int high)
{
	int r[50];
	int i = low, j = mid + 1, k = low;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			r[k] = a[i];
			i++;
		}
		else
		{
			r[k] = a[j];
			j++;
		}
		k++;
	}
	if (i > mid)
	{
		while (j <= high)
		{
			r[k++] = a[j++];
		}
	}
	else
	{
		while (i <= mid)
		{
			r[k++] = a[i++];
		}
	}
	for (i = low; i <= high; i++)
	{
		a[i] = r[i];
	}
}
void MERGESORT(int a[], int low, int high)
{

	if (low < high)
	{
		int mid = (low + high) / 2;
		MERGESORT(a, low, mid);
		MERGESORT(a, mid + 1, high);
		MERGE(a, low, mid, high);
	}
}
int main()
{
	int i, n;
	printf("\nENTER THE SIZE OF ARRAY :");
	scanf("%d", &n);
	int a[n];
	printf("\nENTER THE DATA ELEMENTS :");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	MERGESORT(a, 0, n - 1);
	printf("\nSORTED LIST");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}

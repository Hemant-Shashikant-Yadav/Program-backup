/*
Name = Hemant Shashikant Yadav
Roll no = 2102
URN = 21031035
*/

#include <stdio.h>
int main()
{
	int a[100], n;
	int i, j, min, temp = 0;
	printf("\n Enter the number of array elements:");
	scanf("%d", &n);
	printf("\n Enter elements in array:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nArray elements:");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{

				min = j;
			}
		}
		if (i != min)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	printf("\n\n Sorted array is:");
	for (i = 0; i < n; i++)
	{
		printf(" %d\t", a[i]);
	}
}

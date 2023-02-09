/*
Name = Hemant Shashikant Yadav
Roll no = 2102
URN = 21031035
*/

#include <stdio.h>
int main()
{
	int i, j, a[100], n, temp;
	printf("\n Enter the number of array elements:");
	scanf("%d", &n);
	printf("\n Enter the array elements:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Array elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	for (i = 1; i < n; i++)
	{
		temp = a[i];
		j = i - 1;
		while (temp < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	printf("\n\n Sorted Array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}

/*
Name = Hemant Shashikant Yadav
Roll no = 2102
URN = 21031035
*/

#include <stdio.h>
int main()
{
  int i, j, a[100], n, temp;
  printf("\n Enter the no of array elements:");
  scanf("%d", &n);
  printf("\n Enter the array elements:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("\n Array elements:\n ");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("\n\n Sorted Array: \n ");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
}

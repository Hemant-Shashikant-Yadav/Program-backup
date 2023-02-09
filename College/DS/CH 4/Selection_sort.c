/*
Name = Hemant Shashikant Yadav
Roll no = 2102
URN = 21031035
*/

#include <stdio.h>

int main()
{

    int arr[100];
    int n, min;
    printf("Enter the the numbers of elements in array = ");
    scanf("%d", &n);
    printf("Enter the elements in array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray data = ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            // if (min != i)
            // {
            int temp;
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    printf("\nArray after sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }

    return 0;
}
/*
Name = Hemant Shashikant Yadav
Roll no = 2102
URN = 21031035
*/

#include <stdio.h>

int main()
{

    int arr[100];
    int n;
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
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nArray after sorting = ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }

    return 0;
}
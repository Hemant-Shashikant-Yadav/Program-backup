#include <stdio.h>

int main()
{

    int arr[100], n;

    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter the elements in array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The sorted array is = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
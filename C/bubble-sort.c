#include <stdio.h>

int main()
{

    int n, arr[100], key;

    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter the elements in array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }

    return 0;
}
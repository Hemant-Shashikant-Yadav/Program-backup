/*
Name = Hemant Shashikant Yadav
Roll no = 2102
URN = 21031035
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, start, end;
    int key, mid;

    printf("Enter size of array = ");
    scanf("%d", &n);

    printf("Enter array data = ");
    int *arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    printf("Enter the search key = ");
    scanf("%d", &key);

    start = 0;
    end = n - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == *(arr + mid))
        {
            printf("Search succesful !!! \nKey is found at location %d", mid + 1);
            break;
        }
        else if (key <= *(arr + mid))
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (start > end)
    {
        printf("Search unsuccesful !!!");
    }

    free(arr);

    return 0;
}
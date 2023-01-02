#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int key;

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

    for (i = 0; i < n; i++)
    {
        if (key == *(arr + i))
        {
            printf("Search succesful !!! \nKey is found at location %d", i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("Search unsuccesful !!!");
    }

    free(arr);

    return 0;
}
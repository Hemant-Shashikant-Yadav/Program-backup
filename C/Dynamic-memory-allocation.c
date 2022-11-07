#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n;

    // Using malloc
    // printf("Enter size of array you want = ");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the data for the array index %d = ",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The data for the array index %d is = %4d\n",i,ptr[i]);
    // }

    // Using calloc
    printf("Enter size of array you want = ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data for the array index %d = ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The data for the array index %d is = %4d\n", i, ptr[i]);
    }

    // Using realloc
    printf("Enter size of array you want = ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the data for the array index %d = ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The data for the array index %d is = %4d\n", i, ptr[i]);
    }

    return 0;
}
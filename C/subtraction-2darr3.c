#include <stdio.h>

int main()
{
    int arr1[100][100], arr2[100][100], a;

    printf("Enter the size of array = ");
    scanf("%d", &a);

    printf("Enter array 1 = ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d ", &arr1[i][j]);
        }
    }
    printf("\n");

    printf("Enter array 2 = ");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d ", &arr2[i][j]);
        }
    }
    printf("\n");

    printf("The array 1 = \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("The array 2 = \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("The Subtraction of array is = \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", arr1[i][j] - arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
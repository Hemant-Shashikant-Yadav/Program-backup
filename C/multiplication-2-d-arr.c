#include <stdio.h>

int main()
{

    int arr1[3][3], arr2[3][3], arr3[3][3];
    int i, j, k;

    printf("Enter array 1 = ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("X[%d][%d]", i, j);
            scanf("%d ", &arr1[i][j]);
        }
    }
    printf("Enter array 2 = ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Y[%d][%d]", i, j);
            scanf("%d ", &arr2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[i][j];
            }
        }
    }

    printf("The array output = \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", arr1[i][j]);
        }
        printf("\t");
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", arr2[i][j]);
        }
        printf("\t");
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", arr3[i][j]);
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int arr1[5][5] = {{11, 12, 13, 14, 15}, {21, 22, 23, 24, 25}, {31, 32, 33, 34, 35}, {41, 42, 43, 44, 45}, {51, 52, 53, 54, 55}};
    int arr2[100][100], a;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter the size of array = ");
    scanf("%d", &a);

    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < a; y++)
        {
            scanf("%d ", &arr2[x][y]);
        }
    }

    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < a; y++)
        {
            printf("%d ", arr2[x][y]);
        }
        printf("\n");
    }

    return 0;
}
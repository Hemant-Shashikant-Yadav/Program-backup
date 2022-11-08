#include <stdio.h>

int Arr(int a[100][100], int b[100][100], int c[100][100], int n);

int main()
{
    int a[100][100], b[100][100], c[100][100], n;

    printf("Enter size of matrix = ");
    scanf("%d", &n);

    printf("Enter matrix 1 = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix 2 = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    Arr(a, b, c, n);

    printf("\vThe addition of two matrix is = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
int Arr(int a[100][100], int b[100][100], int c[100][100], int n)
{
    static int i = 0, j = 0;
    if (i < n)
    {
        if (j < n)
        {
            c[i][j] = a[i][j] + b[i][j];
            j++;
            Arr(a, b, c, n);
        }
        j = 0;
        i++;
        Arr(a, b, c, n);
    }
}
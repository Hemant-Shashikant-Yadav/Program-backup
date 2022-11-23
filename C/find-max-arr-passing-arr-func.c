#include <stdio.h>

int main()
{

    int x[10], i, res;
    int FindMax(int[], int);

    printf("Arr data = ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Arr data = ");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }

    res = FindMax(x, 10);
    printf("Max value = %d", res);
    return 0;
}
int FindMax(int y[], int n)
{
    int i = 1, max = y[0];
    while (i < n)
    {
        if (y[i] > max)
        {
            max = y[i];
        }
        i++;
    }
    return max;
}
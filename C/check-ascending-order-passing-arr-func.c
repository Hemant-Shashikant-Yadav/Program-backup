#include <stdio.h>

int main()
{

    int x[10], i;
    int isOrdered(int[], int);
    void display(int[], int);

    printf("Enter array data = ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    display(x, 10);

    if (isOrdered(x, 10) == 0)
    {
        printf("\nNot ordered");
    }
    else
    {
        printf("\nOrdered");
    }

    return 0;
}
void display(int y[], int n)
{
    int i = 0;
    printf("Data = ");
    while (i < n)
    {
        printf("%4d", y[i]);
        i++;
    }
}
int isOrdered(int y[], int n)
{
    int i = 1;
    while (i < n)
    {
        if (y[i] < y[i - 1])
        {
            break;
        }
        i++;
    }
    if (i == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
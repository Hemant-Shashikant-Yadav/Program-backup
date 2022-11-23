#include <stdio.h>

int main()
{

    int x[10], i;

    void display(int[], int);
    printf("Arr data = ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }

    display(x, 10);

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
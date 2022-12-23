#include <stdio.h>

int main()
{
    int x[100], i, n;
    printf("Enter information count = ");
    scanf("%d", &n);

    printf("Enter data = ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("Data = ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", x[i]);
    }

    return 0;
}
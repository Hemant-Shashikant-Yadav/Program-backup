#include <stdio.h>

int main()
{

    int n, i = 2;

    printf("Enter number = ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (i == n)
    {
        printf("Prime");
    }
    else
    {
        printf("Non Prime");
    }

    return 0;
}
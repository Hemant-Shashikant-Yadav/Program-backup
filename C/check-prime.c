#include <stdio.h>

int main()
{

    int n, i;

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
        printf("Prime.");
    }
    else
    {
        printf("Not prime.");
    }

    return 0;
}
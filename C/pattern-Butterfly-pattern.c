#include <stdio.h>

int main()
{
    int n, space;

    printf("Enter the number =");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }

        space = 2 * n - 2 * i;

        for (int j = 1; j <= space; j++)
        {
            printf("  ");
        }

        for(int j=1; j<=i; j++)
        {
            printf(" *");
        }

        printf("\n");       
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }

        space = 2 * n - 2 * i;

        for (int j = 1; j <= space; j++)
        {
            printf("  ");
        }

        for(int j=1; j<=i; j++)
        {
            printf(" *");
        }
        
        printf("\n");       
    }

    return 0;
}
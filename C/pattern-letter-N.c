#include <stdio.h>

int main()
{

    int n;
    printf("\nEnter line count = \n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        n += 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
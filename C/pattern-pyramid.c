#include <stdio.h>

int main()
{

    int i=1, j=1, n;

    printf("Enter number = ");
    scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    if (n < 5)
    {
        return 0;
    }

    printf("Pattern =\n");

    while (i <= n)
    {
        printf("* ");
        if (++j > i)
        {
            printf("\n");
            j = 1;
            i++;
        }
    }

    return 0;
}
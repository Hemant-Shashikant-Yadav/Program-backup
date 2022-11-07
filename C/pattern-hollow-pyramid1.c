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

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (j == 1 || i == j || i==n)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    for (int i = 1; i <= n; i++)
    {
        int j =1;
        while (j<=i)
        {
            if (j == 1 || i == j || i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        
    }

    return 0;
}
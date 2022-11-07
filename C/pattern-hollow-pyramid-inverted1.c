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
            if (i == 1 || i == j || j ==n)
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
    // for (int i = 1; i <= n; i++)
    // {
    //     int j =1;
    //     while (j<=n)
    //     {
    //         if (i == 1 || j == n || i==j)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //         j++;
    //     }
    //     printf("\n");
        
    // }

    return 0;
}
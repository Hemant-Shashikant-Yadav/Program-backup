#include <stdio.h>

int main()
{

    int x[5], i = 0;

    while (i < 5)
    {
        printf("Data = ");
        scanf("%d", &x[i]);
        i++;
    }

    printf("Array data = ");
    for (i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }

    for (i = 1; i < 5; i++)
    {
        if (x[i] < x[i - 1])
        {
            break;
        }
    }

    // for ( i = 0; i < 4; i++)
    // {
    //     if (x[i]>x[i+1])
    //     {
    //         break;
    //     }
    // }

    if (i == 5)
    {
        printf("\nArray in order.");
    }
    else
    {
        printf("\nArray not in order.");
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int a, total = 0;

    while (1)
    {
        printf("Enter no =");
        scanf("%d",&a);

        if (a == 0)
        {
            break;
        }
        else
        {
            if (a < 0)
            {
                printf("Invalid output \n");
                continue;
            }
        }
        total += a;
    }
    printf("\vTotal = %d",total);

    return 0;
}
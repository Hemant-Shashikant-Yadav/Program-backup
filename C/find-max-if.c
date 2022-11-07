#include <stdio.h>

int main()
{

    int i, j, k;

    printf("Enter three numbers = ");
    scanf("%d %d %d", &i, &j, &k);

    if (i > j)
    {
        if (i > k)
        {
            printf("%d is gratest.", i);
        }
        else
        {
            printf("%d is gratest.", k);
        }
    }
    else
    {
        if (j > k)
        {
            printf("%d is gratest.", j);
        }
        else
        {
            printf("%d is gratest.", k);
        }
    }

    return 0;
}
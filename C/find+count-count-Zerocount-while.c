#include <stdio.h>

int main()
{

    int i = 1, PositiveC = 0, NegativeC = 0, ZeroC = 0, n;

    while (i <= 10)
    {
        printf("Enter a number = ");
        scanf("%d", &n);
        if (n < 0)
        {
            NegativeC++;
        }
        else if (n > 0)
        {
            PositiveC++;
        }
        else
        {
            ZeroC++;
        }
        i++;
    }

    printf("\vPositive count =%d\nNegative count = %d\nZero count = %d", PositiveC, NegativeC, ZeroC);

    return 0;
}
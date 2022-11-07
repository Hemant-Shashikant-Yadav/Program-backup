#include <stdio.h>

int main()
{

    int res = 0, mf = 1;
    long int n, rem;

    printf("Enter the Number = ");
    scanf("%ld", &n);

    while (n > 0)
    {
        rem = n % 10;

        if (rem > 1)
        {
            break;
        }

        res = res + rem * mf;
        mf *= 2;
        n /= 10;
    }
    if (n == 0)
    {
        printf("Decimal = %d", res);
    }

    return 0;
}
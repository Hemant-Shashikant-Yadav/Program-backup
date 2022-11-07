#include <stdio.h>

int main()
{

    int n, dig, i;

    printf("Enter the Number = ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }

    if (i < n)
    {
        printf("Not prime.");
        return 0;
    }
    while (n > 0)
    {
        dig = n % 10;

        if (dig == 2 || dig == 3 || dig == 5 || dig == 7)
        {
            n /= 10;
        }
        else
        {
            break;
        }
    }
    if (n == 0)
    {
        printf("Super Prime no.");
    }
    else
    {
        printf("Prime.");
    }


return 0;
}
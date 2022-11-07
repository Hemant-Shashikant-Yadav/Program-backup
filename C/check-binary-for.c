#include <stdio.h>

int main()
{

    int n, i;

    printf("Enter number = ");
    scanf("%d", &n);

    for (; n > 0; n /= 10)
    {
        if (n % 10 > 1)
        {
            break;
        }
    }
    if (n > 0)
    {
        printf("Not Binary");
    }
    else
    {
        printf("Binary.");
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int n, i = 1, count = 0;

    printf("Enter number = ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("The count of number of time inputed number is divisible = %d", count);

    return 0;
}
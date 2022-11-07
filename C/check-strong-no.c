#include <stdio.h>

/*Strong number is a special number whose sum of the factorial of digits is equal to the original number*/

int main()
{
    int n, fact, temp, dig, tot = 0;

    printf("Enter a number = ");
    scanf("%d", &n);

    for (temp = n; temp > 0; temp /= 10)
    {
        dig = temp % 10;
        fact = dig--;
        while (dig > 0)
        {
            fact = fact * dig;
            dig--;
        }
        tot += fact;
    }

    if (n == tot)
    {
        printf("Strong no.");
    }
    else
    {
        printf("Not Strong.");
    }

    return 0;
}
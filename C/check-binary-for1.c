#include <stdio.h>

int main()
{

    long int n, dig;

    printf("Enter a number = ");
    scanf("%ld", &n);

    do
    {
        dig = n % 10;

        if (dig != 1 || dig != 0)
        {
            break;
        }
        n /= 10;
        
    }while(n >0);

    if (n == 0)
    {
        printf("Binary no.");
    }
    else
    {
        printf("Not binary no.");
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int n, rev=0, dig;

    printf("Enter a number = ");
    scanf("%d",&n);

    while (n > 0)
    {
        dig = n % 10;

        rev = rev * 10 + dig;
        n /= 10;
    }
    printf("Reversed no is = %d",rev);

    return 0;
}
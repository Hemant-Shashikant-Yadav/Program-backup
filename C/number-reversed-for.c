#include <stdio.h>

int main()
{

    int a, dig, rev = 0;

    printf("Enter a number = ");
    scanf("%d", &a);

    for (rev = 0; a > 0; a /= 10)
    {
        dig = a % 10;
        rev = rev * 10 + dig;
    }
    printf("Reverse no is = %d", rev);

    return 0;
}
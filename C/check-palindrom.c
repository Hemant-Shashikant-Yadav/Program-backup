#include <stdio.h>

int main()
{

    int a, dig, rev, temp;

    printf("Enter a number = ");
    scanf("%d", &a);

    for (a = temp, rev = 0; a > 0; a /= 10)
    {
        dig = a % 10;
        rev = rev * 10 + dig;
    }

    if (temp == rev)
    {
        printf("Palimdrom no.");
    }
    else
    {
        printf("Not Palindrome no.");
    }

    return 0;
}
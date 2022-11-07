#include <stdio.h>

int main()
{

    int n, fact=1, dig, tot = 0;

    printf("Enter a number = ");
    scanf("%d",&n);

    while (n>1)
    {
        fact=fact*n;
        n--;
    }

    printf("Factorial = %d",fact);
    


    return 0;
}
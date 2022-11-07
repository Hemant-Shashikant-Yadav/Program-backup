#include <stdio.h>

int main()
{

    int num, fact=1, i;

    printf("Enter number = ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
    return 0;
}
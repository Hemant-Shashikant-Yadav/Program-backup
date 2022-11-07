#include <stdio.h>

int factorial(int num);

int main(int argc, char const *argv[])
{
    int num, fact;
    printf("Enter the number = ");
    scanf("%d", &num);

    fact= factorial(num);
    printf("The factorial of %d is = ",num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d ",i);
        printf("* ");
    }
    printf(" is = %d",fact);
    return 0;
}


int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

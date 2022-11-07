/*
This is the program for finding fibonacci series between the limit using recursion function
*/
#include <stdio.h>
int fibona(int num1, int num2, int num3, int num4)
{
    if (num3 >= num4)
    {
        return 0;
    }
    else
    {
        return num1 + fibona(num3 == num1 + num2 + num3, num2, num3, num4);
    }
}
int main()
{
    int num1 = 0, num2 = 1, num3 = 0, num4;
    printf("Enter your Limit:");
    scanf("%d", &num4);
    printf("The Fibonacci series between the given range is: %d", fibona(num1, num2, num3, num4));
}
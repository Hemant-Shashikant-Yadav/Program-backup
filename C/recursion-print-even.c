/*
This is the program for finding all even numbers between the limit using recursion function
*/
#include <stdio.h>
int PrintEven(int num1, int num2)
{
    if (num1 > num2)
    {
        return 0;
    }
    else
    {
        printf("%d ", num1);
        return 1 * PrintEven(num1 + 2, num2);
    }
}
int main()
{
    int num1 = 2, num2;
    printf("Enter your Limit:");
    scanf("%d", &num2);
    printf("The series of all even numbers between limit is= %d ", num1);
    PrintEven(num1 + 2, num2);
}
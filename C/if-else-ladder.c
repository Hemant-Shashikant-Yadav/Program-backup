#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" Enter the number1 = ");
    scanf("%d", &num1);
    printf("\n Enter the number2 = ");
    scanf("%d", &num2);
    printf("\n Enter the number3 = ");
    scanf("%d", &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("\n %d is the largest number.\n", num1);
    }
    else if (num2 >= num3)
    {
        printf("\n %d is the largest number.\n", num2);
    }
    else 
    {
        printf("\n %d is the largest number.\n", num3);
    }
    return 0;
}
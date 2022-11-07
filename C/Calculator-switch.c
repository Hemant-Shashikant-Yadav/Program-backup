#include <stdio.h>

int main(int argc, char const *argv[])
{

    float num1, num2, result;
    char operator;

    printf("Enter the operator= ");
    scanf(" %c", &operator);

    printf("Enter the two numbers= ");
    scanf("%f%f", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("%f", result = num1 + num2);
        break;

    case '-':
        printf("%f", result = num1 - num2);
        break;

    case '*':
        printf("%f", result = num1 * num2);
        break;

    case '/':
        printf("%f", result = num1 / num2);
        break;

    default:
        printf("You entered a wrong operator");
        break;
    }

    
    return 0;
}

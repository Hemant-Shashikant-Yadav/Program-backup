#include <stdio.h>

int main()
{

    int num1, num2, result=0;
    char operator;

    printf("Enter the oprand 1= ");
    scanf("%d",&num1);


    printf("Enter the operator\n+ : Add= \n- : Sub=\n* : Multi= \n/ : Div= \nE : Exit=\n");
    scanf("%c",&operator);
    
    if (operator=='e'||operator=='E')
    {
        return 0;
    }

    printf("Enter the oprand 2 = ");
    scanf("%d",&num2);


    switch (operator)
    {
    case '+':
        printf("Result = %d", result = num1 + num2);
        break;

    case '-':
        printf("Result = %d", result = num1 - num2);
        break;

    case '*':
        printf("Result = %d", result = num1 * num2);
        break;

    case '/':
        printf("Result = %d", result = num1 / num2);
        break;

    default:
        printf("You entered a wrong operator");
        break;
    }

    
    return 0;
}

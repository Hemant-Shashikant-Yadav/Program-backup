#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num1, num2, result, flag = 0;
    char operator;

    do
    {
        if (flag == 0)
        {
            printf("Enter the oprand 1= ");
            scanf("%d", &num1);
            flag = 1;
        }
        else
        {
            printf("\nThe oprand 1= %d", num1);
        }

        printf("\nEnter the operator\n+ : Add= \n- : Sub=\n* : Multi= \n/ : Div= \nE : Exit=\n");
        scanf(" %c", &operator);

        if (operator== 'e' || operator== 'E')
        {
            return 0;
        }
        printf("\nEnter the oprand 2 = ");
        scanf("%d", &num2);


        switch (operator)
        {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;
        }
        num1 = result;

    } while (1);

    return 0;
}

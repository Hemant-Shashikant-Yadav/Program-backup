#include <stdio.h>

int main()
{

    int n, flag = 0, sum = 0;

    while (flag)
    {
        printf("Enter number = ");
        scanf("%d", &n);

        if (n == 0)
        {
            flag = 0;
            break;
        }
        else
        {
            if (n < 0)
            {
                printf("Invalid input.");
                continue;
            }
            sum+=0;
        }
    }

    printf("Sum = %d",sum);
    return 0;
}
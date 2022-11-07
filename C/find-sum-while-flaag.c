#include <stdio.h>

int main()
{

    int n, flag = 1, sum = 0;

    while (flag = 1)
    {
        printf("Enter number = ");
        scanf("%d", &n);

        if (n == 0)
        {
            flag = 0;
        }
        else
        {
            sum += n;
        }
    }

    printf("Sum = %d",sum);
    return 0;
}
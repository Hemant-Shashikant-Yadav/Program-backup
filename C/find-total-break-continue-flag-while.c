#include <stdio.h>

int main()
{

    int a, total = 0, flag = 1;
    while (flag)
    {
        printf("Enter number = ");
        scanf("%d", &a);

        if (a == 0)
        {
            flag = 0;
        }
        else
        {
            if (a < 0)
            {
                printf("Invalid input \n");
            }
        }
        total += a;
    }
    printf("\vTotal = %d", total);

    return 0;
}
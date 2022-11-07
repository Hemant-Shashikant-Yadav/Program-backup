#include <stdio.h>

int main()
{

    int x[5], i = 0, j, temp, flag;

    printf("Enter array = \n");
    while (i < 5)
    {
        printf("Enter data =");
        scanf("%d", &x[i]);
        i++;
    }

    i = 0;
    printf("Before sorting = ");
    while (i < 5)
    {
        printf("%4d", x[i]);
        i++;
    }

    for (i = 0; i < 4; i++)
    {
        flag = 0;
        for (j = 0; j < 4 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
        if (flag==0)
        {
            break;
        }
    }

    i = 0;
    printf("\nAfter sorting = ");
    while (i < 5)
    {
        printf("%4d", x[i]);
        i++;
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int x[5], i=0, j, temp, pos;

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
        pos = i;
        for (j = i+1; j < 5; j++)
        {
            if (x[j] < x[pos])
            {
                pos = j;
            }
        }
        if (i != pos)
        {
            temp = x[i];
            x[i] = x[pos];
            x[pos] = temp;
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
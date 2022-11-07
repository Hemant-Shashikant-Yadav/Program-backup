#include <stdio.h>

int main()
{

    int n, min, max, i = 1;

    while (i <= 10)
    {
        printf("Enter a number = ");
        scanf("%d", &n);

        if (i == 1)
        {
            min = max = n;
        }
        else
        {
            if (n > max)
            {
                max = n;
            }
            else if (n < min)
            {
                min = n;
            }
        }
        i++;
    }

    printf("Maximum numbaer is = %d\nMinimum number is = %d",max,min);

    return 0;
}
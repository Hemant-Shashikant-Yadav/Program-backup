#include <stdio.h>

int main()
{

    int n, count = 0, i = 1;

    while (i <= 10)
    {
        printf("Enter number = ");
        scanf("%d", &n);
        if (n % 5 == 0)
        {
            count++;
        }
        i++;
    }
    printf("Count of numbers devisible by 5 is = %d", count);

    i = 0;
    printf("\vNumber completely devisible by 5 is = \n");
    while (i <= 100)
    {

        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
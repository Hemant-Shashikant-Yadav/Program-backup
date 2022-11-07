#include <stdio.h>

int main()
{

    int i = 1, j = 1, n;

    printf("Enter number = ");
    scanf("%d", &n);

    while (i <= n)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        i++;
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int a;
    printf("Enter line count = ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        a += 1;
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j == a || i == a || i + j == a + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
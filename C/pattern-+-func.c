#include <stdio.h>

int main()
{

    void pattern();
    pattern();

    return 0;
}
void pattern()
{
    int i, j, n;
    printf("Enter count = ");
    scanf("%d", &n);

    n = (n % 2 == 0) ? n + 1 : n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == (n/2)+1 || j == (n/2)+1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
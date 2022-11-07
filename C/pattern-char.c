#include <stdio.h>

int main()
{

    int n, no = 65;

    printf("Enter line count = ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        n += 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i + j <= n + 1; j++)
        {
            printf("%c", no);
        }
        printf("\n");
        no++;
    }

    return 0;
}  
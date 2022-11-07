#include <stdio.h>

int main()
{
    int count = 0, n, t, r, b;

    printf("How many numbers you are testing=");
    scanf("%d", &t);
    while (t--)
    {
        printf("Enter the numbers you are testing=");
        scanf("%d", &n);
        printf("Enter the number you want to count in given integers=");
        scanf("%d", &b);
        while (n > 0)
        {
            r = n % 10;
            n = n / 10;
            if (r == b)
            {
                count = count + 1;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

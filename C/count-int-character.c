#include <stdio.h>

int main()
{

    int n = 10, count = 0;
    char a;

    printf("Enter 10 characters = ");
    while (n--)
    {
        scanf("%c", &a);
        if (48 <= a && a <= 57)
        {
            count++;
        }
    }
    printf("The count of integers un given 10 characters is = %d", count);

    return 0;
}
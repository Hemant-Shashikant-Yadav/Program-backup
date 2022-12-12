#include <stdio.h>

int main()
{

    int x[5], i = 0;

    printf("Enter data = ");
    while (i < 5)
    {
        scanf("%d", (x + i));
        i++;
    }

    printf("Data = ");
    while (i < 5)
    {
        printf("%4d", *(x + i));
        i++;
    }

    return 0;
}
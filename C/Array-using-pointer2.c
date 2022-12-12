#include <stdio.h>

int main()
{

    int x[5];
    int *p = (a + 0);
    int *q = (a + 4);

    printf("Enter data = ");
    while (p < q)
    {
        scanf("%d", p);
        p++;
    }

    p = x + 0;
    printf("Data = ");
    while (p <= q)
    {
        printf("%4d", *p);
        p++;
    }

    return 0;
}
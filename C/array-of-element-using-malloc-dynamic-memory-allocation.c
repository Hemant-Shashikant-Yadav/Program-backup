#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n;
    printf("Enter information count = ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int))

        printf("Enter data = ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("Data = ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", (ptr + i));
    }

    free(ptr);

    return 0;
}
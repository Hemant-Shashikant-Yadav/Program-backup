#include <stdio.h>

int main()
{

    int a[10], min, max, i;

    printf("Array data = ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array data = ");
    for (min = max = a[0],i=0; i < 10; i++)
    {
        printf("%4d", a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nMax = %d\nMin = %d", max, min);

    return 0;
}
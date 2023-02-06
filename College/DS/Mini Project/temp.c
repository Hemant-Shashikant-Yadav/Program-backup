#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int t;

    // scanf("%d", &t);

    // while (t--)
    // {
    int n, k, sum = 0;

    scanf("%d %d", &n, &k);

    int *p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p -= n;

    // while (k--)
    // {
    int count = 0, count1 = 0;
    int max = *p;
    p++;
    for (int i = 0; i < n - 1; i++)
    {
        count++;
        if (max < *p)
        {
            max = *p;
            count1 = count;
        }
        p++;
    }
    p -= n;

    printf("\n%d", count1);
    printf("\n%d", max);
    printf("\n%d", *(p + count1));
    *(p + count1) /= 2;
    printf("\n%d", *(p + count1));

    // sum += max;
    // }
    // printf("\n%4d", sum);
    free(p);
    // }

    return 0;
}
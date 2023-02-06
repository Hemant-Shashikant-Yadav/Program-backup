#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t;

    scanf("%d", &t);

    while (t--)
    {
        int n, k, sum = 0;

        scanf("%d %d", &n, &k);

        int *p = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            scanf("%d", p);
            p++;
        }
        p -= 5;

        // for (int i = 0; i < 5; i++)
        // {
        //     printf("%4d", *p);
        //     p++;
        // }
        // p -= 5;

        while (k--)
        {
            int count = 0, count1 = 0;
            int max = *p;
            p++;
            // printf("%d", max);
            for (int i = 0; i < n - 1; i++)
            {
                if (max < *p)
                {
                    max = *p;
                    count1 = count;
                    // *p /= 2;
                }
                p++;
                count++;
            }
            p -= 5;
            // *(p + count1) = *p / 2;
            // p -= count1;
            // for (int i = 0; i < 5; i++)
            // {
            //     printf("%4d", *p);
            //     p++;
            // }
            // p -= 5;

            printf("\n");
            // printf("%d", max);

            sum += max;
            // printf("%4d", sum);
        }
        printf("\n");
        printf("%4d", sum);
        free(p);
    }

    return 0;
}
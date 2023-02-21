#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t;

    printf("Enter number of testcases = ");
    scanf("%d", &t);

    while (t--)
    {
        int n, k, sum = 0;

        printf("Enter number of bags = ");
        scanf("%d", &n);

        // Array is allocated dynamically of size 'n'.
        int *p = (int *)malloc(n * sizeof(int));

        printf("Enter how many times she will pick bags = ");
        scanf("%d", &k);

        printf("Enter number of dimonds in each bag =");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", p);
            p++;
        }
        // p -= n is used to move pointer of array by 'n' (i.e. sizeof(int)*n)
        // i.e. after this instruction 'p' will point to first element in array.
        p -= n; // p = p - n

        while (k--)
        {
            int count = 0, count1 = 0;

            int max = *p; // 1st element of array is stored at max
            p++;
            for (int i = 0; i < n - 1; i++) // The array will run from 2nd position (index value 1) till last
            {
                count++;
                if (max < *p)
                {
                    max = *p;
                    count1 = count; // The index position number of maximum number is stored at count1
                }
                p++;
            }
            p -= n;

            *(p + count1) /= 2; //'p' is moved by 'count1' (i.e. sizeof(int)*count1) (i.e.p[count1])
                                // The value present at that position is devided by 2 and sored in that position itself.

            sum += max; // After every loop the maximum number in array is added to the Sum
        }
        printf("The total number of dimonds she got = %4d", sum);
        free(p);
    }

    return 0;
}
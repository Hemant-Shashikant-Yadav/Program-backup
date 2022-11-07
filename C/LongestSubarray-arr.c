#include <stdio.h>

// contiguous = same common diffrence
int main()
{

    int n, arr[100];

    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter the elements in array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int last_diff, count, final_ans;

    last_diff = arr[1] - arr[0];
    count = 2;
    final_ans = 2;

    for (int i = 2; i < n; i++)
    {
        if (last_diff == arr[i] - arr[i - 1])
        {
            count++;
        }
        else
        {
            last_diff = arr[i] - arr[i - 1];
            count = 2;
        }

        if (final_ans < count)
        {
            final_ans = count;
        }
    }

    printf("The largest contiguous subarray is = %d", final_ans);

    return 0;
}
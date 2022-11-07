#include <stdio.h>

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

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans += arr[j];
            //printf("\nThe subarry is = %d  ", arr[j]);
            printf("\nAddition of subarry is = %d  ", ans);
        }
        ans = 0;
    }

    return 0;
}
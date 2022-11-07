#include <stdio.h>

int binary(int n, int arr[], int key);

int main()
{

    int n, arr[100], key;

    printf("Enter the size of array = ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to find = ");
    scanf("%d", &key);

    int ans = binary(n, arr, key);

    printf("The index position of number you want to find is = %d", ans);

    return 0;
}
int binary(int n, int arr[], int key)
{
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
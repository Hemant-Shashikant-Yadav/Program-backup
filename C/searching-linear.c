#include <stdio.h>

int linear(int n, int arr[], int key);

int main()
{

    int key, n, arr[100];

    printf("Enter the size of array = ");
    scanf("%d", &n);
    printf("Enter the elements in array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key you want to find = ");
    scanf("%d", &key);

    int ans = linear(n, arr, key);

    printf("The index position of given number is = %d ", ans);

    return 0;
}
int linear(int n, int arr[], int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
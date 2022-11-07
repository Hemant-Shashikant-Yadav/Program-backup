#include<stdio.h>

int func1(int n, int* ptr);

int main()
{   
    int n;

    printf("Enter the size of array = ");
    scanf("%d",&n);

    int arr[n];

    func1(n,arr);

    return 0;

}

int func1(int n, int* ptr)
{   
    printf("Enter the array = \n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&*(ptr+i));
    }
    
    printf("The array is = \n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d \n",*(ptr+i));
    }
}
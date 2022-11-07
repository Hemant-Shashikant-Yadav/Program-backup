#include<stdio.h>

int func1(int n, int array[]);

int main ()
{
      
    int n;

    printf("Enter the size of array = ");
    scanf("%d",&n);
      
    int arr[n];

    printf("Enter the array= ");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    func1(n,arr);
    
    return 0; 
}

int func1(int n, int array[])
{
    printf("The array is = \n");

    for (int  i = 0; i < n; i++)
    {
        printf("%d \n",array[i]);
    }

    return 0;
    
}
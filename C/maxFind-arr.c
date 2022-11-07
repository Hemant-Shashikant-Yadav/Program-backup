#include<stdio.h>


int main ()
{
    int n,arr[100];
    int max = -9999999;

    printf("Enter the size of array = ");
    scanf("%d",&n);

    printf("Enter the elements in array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    
    printf("The maximum number will be = %d",max);

    return 0; 
}
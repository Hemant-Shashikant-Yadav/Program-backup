#include<stdio.h>


int main ()
{
      
    int arr[100],sum[100],n;
    sum[0]=0;
    
    printf("Enter the no of elements in array = ");
    scanf("%d",&n);

    printf("Enter the elements in array = ");
    for (int i = 1; i < n; i++)
    {
        scanf("%d",&arr[i]);

        sum[i]=sum[i]+arr[i];
    }

    printf("The sum of element in array and elements left to it is = ");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ",sum[i]);
    }
            


      
    return 0; 
}
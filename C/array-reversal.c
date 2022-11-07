#include<stdio.h>

void arrRev(int arr[],int n);

int main ()
{
      
    int arr[100],n;

    printf("Enter size of array = ");
    scanf("%d",&n); 

    arr[n];

    printf("Enter elements in array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nArray before swapping = ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d",arr[i]);
    }
    
    arrRev(arr,n);

    printf("\nArray after swapping = ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d",arr[i]);
    }
         
    return 0; 
}
void arrRev(int arr[],int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-i] = temp;
    }
    
}
#include<stdio.h>


int main ()
{
      
    int a[10],i;

    printf("Array data = ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array Data = ");
    for ( i = 0; i < 10; i++)
    {
        printf("%4d",a[i]);
    }
    
    
      
    return 0; 
}
#include<stdio.h>


int main ()
{
      
    int a[10],tot=0,i;

    printf("Array Data = ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("%4d",a[i]);
        tot+=a[i];
    }

    printf("\nSum = %d\nAvg = %f",tot,(float)tot/10);
    

      
    return 0; 
}
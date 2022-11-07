#include<stdio.h>


int main ()
{
      
    int n,dig,count=0,rem;

    printf("Enter a number = ");
    scanf("%d",&n);

    printf("Enter a digit you want to find = ");
    scanf("%d",&dig);

    while (n>0)
    {
        rem=n%10;

        if (rem==dig)
        {
            count++;
        }
        n/=10;
    }

    printf("Count of digit in number is = %d",count);
    
      
    return 0; 
}
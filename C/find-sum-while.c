#include<stdio.h>


int main ()
{
      
    int i=1,sum=0,n;

    while (i<=10)
    {
        printf("Enter a number = ");
        scanf("%d",&n);

        sum+=n;
        i++;
    }
    printf("The sum of all number is = %d",sum);
    
      
    return 0; 
}
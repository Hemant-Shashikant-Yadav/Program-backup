#include<stdio.h>


int main ()
{
      
    int n,i=1,sum=0;

    for ( i = 1; i <= 10; i++)
    {
        printf("Enter number = ");
        scanf("%d", &n);

        sum+=n;
    }

    printf("Sum = %d",sum);
    

      
    return 0; 
}

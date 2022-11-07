#include<stdio.h>


int main ()
{
      
    int a,i=1,sumOdd=0,sumEven=0;

    while (i<=10)
    {
        printf("Enter a number = ");
        scanf("%d",&a);

        if (a%2==0)
        {
            sumEven+=a;
        }
        else
        {
            sumOdd+=a;
        }
        
        i++;
    }

    printf("\vSum of 10 even numbers is = %d\nSum of 10 odd numbers is = %d",sumEven,sumOdd);
    
      
    return 0; 
}
#include<stdio.h>


int main ()
{
      
    int i=1,Osum=0,Esum=0,n;

    while (i<=10)
    {
        printf("Enter a number = ");
        scanf("%d",&n);

        if (n%2==0)
        {
            Osum+=n;
        }
        else
        {
            Esum+=n;
        }
        
        i++;
    }
        printf("Even sum = %d\nOdd sum = %d",Esum,Osum);
    
      
    return 0; 
}
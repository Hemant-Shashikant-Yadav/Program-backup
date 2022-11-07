#include<stdio.h>


int main ()
{
      
    int a[10],Ecount=0,Ocount=0,i;

    printf("Array Data = ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        {
            Ecount++;
        }
        else
        {
            Ocount++;
        }
        
        
    }
    printf("Even count = %d\nOdd count = %d",Ecount,Ocount);
    
      
    return 0; 
}
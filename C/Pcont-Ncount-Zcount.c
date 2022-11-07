#include<stdio.h>


int main ()
{
      
    int a[10],Pcount=0,Ncount=0,Zcount=0,i;

    printf("Array Data = ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        if (a[i]>0)
        {
            Pcount++;
        }
        else if (a[i]<0)
        {
            Ncount++;
        }
        else
        {
            Zcount++;
        }
        
        
        
        
        
    }
    printf("Positive count = %d\nNegative count = %d\nZero count = %d",Pcount,Ncount,Zcount);
    
      
    return 0; 
}
#include<stdio.h>


int main ()
{
      
    int i,j,flag;
    for ( i = 100; i <= 200; i++)
    {
        flag =0;
        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;  
            }
            
        }
        if (flag==0)
        {
            printf("Prime = %d\n",i);
        }        
        
    }
    
      
    return 0; 
}
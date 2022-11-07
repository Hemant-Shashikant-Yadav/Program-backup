#include<stdio.h>


int main ()
{
      
    int a,i=2;
 

    for(a=10;a<=100;a++)
    {
        do
        {
            if (a%i==0)
            {
                break;
                i++;
            }
            
        } while (i<a);
        if (i==a)
        {
            printf("Prime = %d\n",a);
        }
        
    }

    
        
    return 0; 
}
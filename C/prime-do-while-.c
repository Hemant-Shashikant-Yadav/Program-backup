#include<stdio.h>


int main ()
{
      
    int a,i=2;

    printf("Enter a number = ");
    scanf("%d",&a);

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
        printf("Prime no");
    }
    else
    {
        printf("Non prime");
    }
    
    
        
    return 0; 
}
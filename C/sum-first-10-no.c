#include<stdio.h>


int main ()
{
      
    int i=1,tot=0;

    while (i<=10)
    {
        tot+=i;
        i+=1;
    }
    printf("Sum is = %d",tot);
      
    return 0; 
}
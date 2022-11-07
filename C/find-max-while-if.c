#include<stdio.h>


int main ()
{
      
    int i=1,max=0,n;

    while (i<=10)
    {
        printf("Enter a number = ");
        scanf("%d",&n);

        if (n>max)
        {
            max=n;
        }
        i++;
    }
    
    printf("The maximum number is = %d",max);
      
    return 0; 
}
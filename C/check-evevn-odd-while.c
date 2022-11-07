#include<stdio.h>


int main ()
{
      
    int i=1,n,oddC=0,evenC=0;

    while (i<=10)
    {
        printf("Enter a number = ");
        scanf("%d",&n);

        if (n%2==0)
        {
            evenC++;
        }
        else
        {
            oddC++;
        }
        i++;
        
    }
    
    printf("The odd no are = %d\nThe even no are =%d\n",oddC,evenC);
      
    return 0; 
}
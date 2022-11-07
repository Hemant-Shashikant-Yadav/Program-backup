#include<stdio.h>


int main ()
{
      
    int a;

    printf("Enter a number = ");
    scanf("%d",&a);

    if (a<0)
    {
        printf("Less than zero.");
    }
    else if (a>100)
    {
        printf("Greater than 100. Out of range.");
    }
    else
    {
        printf("In the range.");
    }
    
    
    
      
    return 0; 
}
#include<stdio.h>


int main ()
{
      
    int a,fact=1;

    printf("Enter a number = ");
    scanf("%d", &a);

    while (a>0)
    {
        fact*=a--;
    }
    
    // while (a--)
    // {
    //     fact*=a;
    // }
    
    printf("Factorial = %d",fact);
    return 0; 
}
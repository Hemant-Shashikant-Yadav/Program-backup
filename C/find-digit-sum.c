#include<stdio.h>


int main ()
{
      
    int n,dig,total=0;

    printf("Enter 3 digit no = ");
    scanf("%d",&n);

    dig=n%10;
    total+=dig;
    n/=10;

    dig=n%10;
    total+=dig;
    n/=10;
      
    dig=n%10;
    total+=dig;
    
    printf("The sum of digits in number is = %d",total);

    return 0; 
}
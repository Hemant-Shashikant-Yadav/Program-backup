#include<stdio.h>


int main ()
{
      
    int n,dig,rev=0;

    printf("Enter 3 number = "); 
    scanf("%d",&n);

    dig=n%10;
    rev+=dig;
    rev*=10;
    n/=10;

    dig=n%10;
    rev+=dig;
    rev*=10;
    n/=10;

    dig=n%10;
    rev+=dig;
    
    
    printf("The reverse of input number is = %d",rev);

    return 0; 
}
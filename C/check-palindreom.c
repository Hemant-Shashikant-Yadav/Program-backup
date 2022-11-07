#include<stdio.h>


int main ()
{
      
    int n,dig,rev=0,temp;

    printf("Enter a number = ");
    scanf("%d",&n);

    temp=n;
    while (n>0)
    {
        dig = n%10;
        rev=rev*10+dig;
        n/=10;
    }
    if (rev==temp)
    {
        printf("Palindrom");
    }
    else
    {
        printf("Not palindrom");
    }
    
    
      
    return 0; 
}
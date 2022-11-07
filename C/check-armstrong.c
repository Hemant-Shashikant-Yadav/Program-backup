#include<stdio.h>


int main ()
{
      
    int a,dig,sum,cube,temp;

    
    printf("Enter a number = ");
    scanf("%d", &a);

    for(temp==a,sum=0;a>0;a/=10)
    {
        dig =a%10;
        cube=dig*dig*dig;
        sum+=cube;
    }

    if (sum==temp)
    {
        printf("Armstrong no.");
    }
    else
    {
        printf("Not Armstrong no.");
    }
    
    
    return 0; 
}
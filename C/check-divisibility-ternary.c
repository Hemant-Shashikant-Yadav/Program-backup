#include<stdio.h>


int main ()
{
      
    int a;

    printf("Enter a number = ");
    scanf("%d",&a);

    printf("%d is divisible by %s",a,((a%5==0&&a%7==0)?"Both":(a%5!=0&& a%7==0)?"7":(a%7!=0&& a%5==0)?"5":"none"));
      
    return 0; 
}
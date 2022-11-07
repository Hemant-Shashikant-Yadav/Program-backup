#include<stdio.h>

//ternary operator.

int main ()
{
      
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);

    printf("The no = %d is %s",a,((a%2==0)?"Even":"Odd"));
      
    return 0; 
}